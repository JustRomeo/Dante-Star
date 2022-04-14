/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** generate_maze
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dante_generator.h"
#include "dante_structures.h"

int is_connected_to_path(node_t *node, node_t *prev_node)
{
    if (node->up_node) {
        if (!node->up_node->is_a_wall && node->up_node != prev_node)
            return (1);
    }
    if (node->down_node) {
        if (!node->down_node->is_a_wall && node->down_node != prev_node)
            return (1);
    }
    if (node->left_node) {
        if (!node->left_node->is_a_wall && node->left_node != prev_node)
            return (1);
    }
    if (node->right_node) {
        if (!node->right_node->is_a_wall && node->right_node != prev_node)
            return (1);
    }
    return (0);
}

int get_free_connections(node_t *node, node_t **connections)
{
    int i = 0;

    if (node->up_node && !is_connected_to_path(node->up_node, node)) {
        if (node->up_node->is_a_wall) {
            connections[i] = node->up_node;
            i++;
        }
    }
    if (node->down_node && !is_connected_to_path(node->down_node, node)) {
        if (node->down_node->is_a_wall) {
            connections[i] = node->down_node;
            i++;
        }
    }
    if (node->left_node && !is_connected_to_path(node->left_node, node)) {
        if (node->left_node->is_a_wall) {
            connections[i] = node->left_node;
            i++;
        }
    }
    if (node->right_node && !is_connected_to_path(node->right_node, node)) {
        if (node->right_node->is_a_wall) {
            connections[i] = node->right_node;
            i++;
        }
    }
    return (i);
}

node_t *choose_next_node(node_t *node)
{
    int connections_nbr = 0;
    node_t *connections[5] = {NULL, NULL, NULL, NULL, NULL};
    int choosed_node = 0;

    connections_nbr = get_free_connections(node, connections);
    if (connections_nbr == 0)
        return (NULL);
    choosed_node = rand() % connections_nbr;
    return (connections[choosed_node]);
}

int fill_maze(node_t *node)
{
    node_t *next_node = choose_next_node(node);

    node->is_a_wall = 0;
    while (next_node != NULL) {
        fill_maze(next_node);
        next_node = choose_next_node(node);
    }
    return (0);
}

int generate_paths(node_t *node)
{
    node_t *cursor = get_first_node(node);
    srand(time(NULL));

    fill_maze(cursor);
    return (0);
}

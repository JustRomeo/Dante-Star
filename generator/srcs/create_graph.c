/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** create_graph
*/

#include <stdlib.h>
#include <stdio.h>
#include "dante_structures.h"
#include "dante_generator.h"

node_t *create_node(node_t *prev_node)
{
    node_t *node = malloc(sizeof(node_t));

    if (!node)
        return (NULL);
    node->is_a_wall = 1;
    node->up_node = NULL;
    node->down_node = NULL;
    node->left_node = prev_node;
    node->right_node = NULL;
    return (node);
}

node_t *create_line(int x)
{
    node_t *line = create_node(NULL);
    node_t *cursor = line;

    if (!line)
        return (NULL);
    for (int i = 0; i < x; i++) {
        cursor->right_node = create_node(cursor);
        if (!cursor->right_node)
            return (NULL);
        cursor = cursor->right_node;
    }
    return (line);
}

void link_lines(node_t *top_line, node_t *bottom_line)
{
    if (!top_line || !bottom_line)
        return;
    while (top_line && bottom_line) {
        top_line->down_node = bottom_line;
        bottom_line->up_node = top_line;
        top_line = top_line->right_node;
        bottom_line = bottom_line->right_node;
    }
}

node_t *create_graph(int x, int y)
{
    node_t *line = NULL;
    node_t *prev_line = NULL;

    y = y;
    for (int i = 0; i < y; i++) {
        line = create_line(x);
        if (!line)
            return (NULL);
        link_lines(prev_line, line);
        prev_line = line;
    }
    return (line);
}

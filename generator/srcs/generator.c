/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** generator
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "dante_generator.h"

void random_remove(node_t *node)
{
    if (!node->is_a_wall)
        return;
    if (rand() % 20 == 3)
        node->is_a_wall = 0;
}

void remove_walls(node_t *node)
{   
    node_t *first_node = get_first_node(node);
    node_t *col = first_node;
    node_t *row = first_node;

    while (row) {
        while (col) {
            random_remove(col);
            col = col->right_node;
        }
        row = row->down_node;
        col = row;
    }
}

int generate_maze(int ac, char **av)
{
    int x = 0;
    int y = 0;
    node_t *node = NULL;

    if (check_arguments(ac, av) == 84)
        return (84);
    x = atoi(av[1]) - 1;
    y = atoi(av[2]);
    if (x == 0 || y == 0 || x * y > 1440000)
        return (0);
    node = create_graph(x, y);
    generate_paths(node);
    if (ac == 3)
        remove_walls(node);
    remove_last(node);
    display_maze(node);
    free_graph(node);
    return (0);
}

/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** display_maze
*/

#include <stdio.h>
#include "dante_generator.h"
#include "dante_structures.h"

void display_col(node_t *node)
{
    while (node) {
        if (node->is_a_wall)
            printf("X");
        else
            printf("*");
        node = node->right_node;
    }
}

void display_maze(node_t *node)
{
    node_t *first_node = get_first_node(node);
    node_t *row = first_node;

    while (row) {
        display_col(row);
        if (row->down_node)
            printf("\n");
        row = row->down_node;
    }
}

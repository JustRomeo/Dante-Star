/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** free_graph
*/

#include <stdlib.h>
#include "dante_generator.h"
#include "dante_structures.h"

void free_graph(node_t *node)
{
    node_t *first_node = get_first_node(node);
    node_t *row = first_node;
    node_t *col = NULL;
    node_t *save = NULL;

    while (row) {
        col = row;
        row = row->down_node;
        while (col) {
            save = col;
            col = col->right_node;
            free(save);
        }
    }
}

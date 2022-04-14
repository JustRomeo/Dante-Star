/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** display_graph
*/

#include <stdio.h>
#include "dante_structures.h"

node_t *get_first_node(node_t *node)
{
    while (node->left_node)
        node = node->left_node;
    while (node->up_node)
        node = node->up_node;
    return (node);
}

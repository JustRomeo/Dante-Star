/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** remove_last
*/

#include "dante_generator.h"

void remove_last(node_t *node)
{
    node_t *last_node = node;

    while (last_node->right_node)
        last_node = last_node->right_node;
    while (last_node->down_node)
        last_node = last_node->down_node;
    if (last_node->is_a_wall) {
        last_node->is_a_wall = 0;
        last_node->up_node->is_a_wall = 0;
        last_node->left_node->is_a_wall = 0;
    }
}
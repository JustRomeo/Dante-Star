/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** dante_generator
*/

#ifndef DANTE_GENERATOR_H_
#define DANTE_GENERATOR_H_

#include "dante_structures.h"

int generate_maze(int ac, char **av);
int check_arguments(int ac, char **av);
node_t *create_graph(int x, int y);
node_t *get_first_node(node_t *node);
void display_maze(node_t *node);
int generate_paths(node_t *node);
void free_graph(node_t *node);
void remove_last(node_t *node);

#endif /* !DANTE_GENERATOR_H_ */

/*
** EPITECH PROJECT, 2019
** CPE_dante_2018
** File description:
** dante_structures
*/

#ifndef DANTE_STRUCTURES_H_
#define DANTE_STRUCTURES_H_

typedef struct node_s {
    int is_a_wall;
    struct node_s *up_node;
    struct node_s *down_node;
    struct node_s *left_node;
    struct node_s *right_node;
} node_t;

#endif /* !DANTE_STRUCTURES_H_ */

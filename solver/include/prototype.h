/*
** EPITECH PROJECT, 2018
** prototype.h
** File description:
** HEADER
*/

#ifndef PROTO_H
#define PROTO_H

#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/sysmacros.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <pwd.h>
#include <string.h>
#include <time.h>
#include <grp.h>
#include <dirent.h>
#include "structures.h"
#include "my.h"

//algo.c
int algo_en_tab(char **av, char **bcp_tab);

//av_mv_tools.c
int left(char **av, int *x, int *y);
int right(char **av, int *x, int *y);
int up(char **av, int *x, int *y);
int down(char **av, int *x, int *y);

//error.c
int output_e(char *str);
int basics_e(int ac, char **av);

//free.c
int tab_free_double(char **av, char **av2);
int tab_free(char **av);
int free_two(char *str, char *str2);
int free_three(char *str, char *str2, char *str3);

//main.c

//may_i_go.c
int may_left(char **av, int x, int y);
int may_right(char **av, int x, int y);
int may_up(char **av, int x, int y);
int may_down(char **av, int x, int y);
int save_static2(int x, int y);

//print_end.c
int end_tab(char **av, char **end);
char **compar(char **av, char **bcp);

//saver.c
//char **saver(FILE *fd);
char **saver(int fd, char *path);

//usage.c
int usage(void);

//xandy.c
int restart(char **av, int x, int y, char **bcp_tab);
int is_blocked(char **av, int x, int y);
void mv_in_tab(char **av, int *x, int *y);
int save_static(int x, int y);

#endif

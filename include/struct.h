/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdbool.h>

typedef struct node_s {
    int data;
    struct node_s *next;
    struct node_s *prev;
} node_t;

typedef struct list_s {
    struct node_s *head;
    struct node_s *tail;
} list_t;

typedef struct pushswap_s {
    list_t *l_a;
    list_t *l_b;
    int len_a;
    int len_b;
    short space;
} pushswap_t;

#endif /* !STRUCT_H_ */

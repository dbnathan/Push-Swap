/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** free
*/

#include "../include/pushswap.h"

void free_list(list_t *list)
{
    node_t *tmp = list->head;
    node_t *tmp2 = NULL;

    while (tmp != NULL) {
        tmp2 = tmp->next;
        free(tmp);
        tmp = tmp2;
    }
    free(tmp2);
    free(list);
}

void free_all(pushswap_t *ctrl)
{
    free_list(ctrl->l_a);
    free_list(ctrl->l_b);
    free(ctrl);
}
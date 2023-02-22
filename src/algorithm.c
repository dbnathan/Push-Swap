/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** algorithm
*/

#include "../include/pushswap.h"

void pushswap_algo(pushswap_t *ctrl)
{
    while (ctrl->len_a != 1) {
        if (ctrl->l_a->head->data > ctrl->l_a->head->next->data)
            sa_function(ctrl);
        pb_function(ctrl);
    }
    while (ctrl->len_b != 0) {
        if (ctrl->len_b == 1) {
            pa_function(ctrl);
            break;
        }
        if ((ctrl->l_b->head->data < ctrl->l_b->head->next->data) &&
            ctrl->len_b != 1)
            sb_function(ctrl);
        pa_function(ctrl);
    }
}

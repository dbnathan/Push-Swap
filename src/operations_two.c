/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** operations_two
*/

#include "../include/pushswap.h"

void ra_function(pushswap_t *ctrl)
{
    if (!ctrl->l_a || ctrl->len_a < 2)
        return;
    node_t *tmp = ctrl->l_a->head;

    ctrl->l_a->head = ctrl->l_a->head->next;
    ctrl->l_a->head->prev = NULL;
    tmp->next = NULL;
    tmp->prev = ctrl->l_a->tail;
    ctrl->l_a->tail->next = tmp;
    ctrl->l_a->tail = tmp;
    if (ctrl->space == 0) {
        my_putstr("ra");
        ctrl->space = 1;
    } else
        my_putstr(" ra");
}

void rb_function(pushswap_t *ctrl)
{
    if (!ctrl->l_b || ctrl->len_b < 2)
        return;
    node_t *tmp = ctrl->l_b->head;

    ctrl->l_b->head = ctrl->l_b->head->next;
    ctrl->l_b->head->prev = NULL;
    tmp->next = NULL;
    tmp->prev = ctrl->l_b->tail;
    ctrl->l_b->tail->next = tmp;
    ctrl->l_b->tail = tmp;
    if (ctrl->space == 0) {
        my_putstr("rb");
        ctrl->space = 1;
    } else
        my_putstr(" rb");
}

void rr_function(pushswap_t *ctrl)
{
    ra_function(ctrl);
    rb_function(ctrl);
    my_putstr("rr ");
}

void rra_function(pushswap_t *ctrl)
{
    if (!ctrl->l_a || ctrl->len_a < 2)
        return;
    node_t *tmp = ctrl->l_a->tail;

    ctrl->l_a->tail = ctrl->l_a->tail->prev;
    ctrl->l_a->tail->next = NULL;
    tmp->prev = NULL;
    tmp->next = ctrl->l_a->head;
    ctrl->l_a->head->prev = tmp;
    ctrl->l_a->head = tmp;
    if (ctrl->space == 0) {
        my_putstr("rra");
        ctrl->space = 1;
    } else
        my_putstr(" rra");
}

void rrb_function(pushswap_t *ctrl)
{
    if (!ctrl->l_b || ctrl->len_b < 2)
        return;
    node_t *tmp = ctrl->l_b->tail;

    ctrl->l_b->tail = ctrl->l_b->tail->prev;
    ctrl->l_b->tail->next = NULL;
    tmp->prev = NULL;
    tmp->next = ctrl->l_b->head;
    ctrl->l_b->head->prev = tmp;
    ctrl->l_b->head = tmp;
    if (ctrl->space == 0) {
        my_putstr("rrb");
        ctrl->space = 1;
    } else
        my_putstr(" rrb");
}

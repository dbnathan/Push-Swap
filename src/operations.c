/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** operations
*/

#include "../include/pushswap.h"

void sa_function(pushswap_t *ctrl)
{
    if (!ctrl->l_a || ctrl->len_a < 2)
        return;
    node_t *tmp = ctrl->l_a->head;
    int tmp_data = tmp->data;

    tmp->data = tmp->next->data;
    tmp->next->data = tmp_data;
    if (ctrl->space == 0) {
        my_putstr("sa");
        ctrl->space = 1;
    } else
        my_putstr(" sa");
}

void sb_function(pushswap_t *ctrl)
{
    if (!ctrl->l_b || ctrl->len_b < 2)
        return;
    node_t *tmp = ctrl->l_b->head;
    int tmp_data = tmp->data;

    tmp->data = tmp->next->data;
    tmp->next->data = tmp_data;
    if (ctrl->space == 0) {
        my_putstr("sb");
        ctrl->space = 1;
    } else
        my_putstr(" sb");
}

void sc_function(pushswap_t *ctrl)
{
    sa_function(ctrl);
    sb_function(ctrl);
    my_putstr("sc ");
}

void pa_function(pushswap_t *ctrl)
{
    if (!ctrl->l_b || !ctrl->l_b->head)
        return;
    int data = ctrl->l_b->head->data;
    free_first_element(ctrl->l_b);
    ctrl->l_a = add_node_front(ctrl->l_a, data);
    ctrl->len_a++;
    ctrl->len_b--;
    if (ctrl->space == 0) {
        my_putstr("pa");
        ctrl->space = 1;
    } else
        my_putstr(" pa");
}

void pb_function(pushswap_t *ctrl)
{
    if (!ctrl->l_a || !ctrl->l_a->head)
        return;
    int data = ctrl->l_a->head->data;
    free_first_element(ctrl->l_a);
    ctrl->l_b = add_node_front(ctrl->l_b, data);
    ctrl->len_b++;
    ctrl->len_a--;
    if (ctrl->space == 0) {
        my_putstr("pb");
        ctrl->space = 1;
    } else
        my_putstr(" pb");
}

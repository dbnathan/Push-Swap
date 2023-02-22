/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** main
*/

#include "../include/pushswap.h"

void print_list(list_t *list)
{
    node_t *tmp = list->head;

    while (tmp != NULL) {
        my_putnbr(tmp->data);
        tmp = tmp->next;
    }
    my_putstr("\n");
}

pushswap_t *init_pushswap(int ac, char **av)
{
    pushswap_t *ctrl = malloc(sizeof(pushswap_t));
    if (!ctrl) return (NULL);
    ctrl->len_a = ac - 1;
    ctrl->len_b = 0;
    ctrl->space = 0;
    ctrl->l_a = NULL;
    ctrl->l_b = NULL;
    for (int i = 1; i < ac; i++)
        ctrl->l_a = add_node_back(ctrl->l_a, my_getnbr(av[i]));
    return (ctrl);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return (84);
    if (!verif_function(ac, av))
        return (84);
    pushswap_t *ctrl = init_pushswap(ac, av);
    if (is_list_sorted(ctrl->l_a)) {
        write(1, "\n", 1);
        return (0);
    }
    for (int i = 0; i < 4; i++)
        ra_function(ctrl);
    while (!is_list_sorted(ctrl->l_a))
        pushswap_algo(ctrl);
    write(1, "\n", 1);
    free_all(ctrl);
    return (0);
}

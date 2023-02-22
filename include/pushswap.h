/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** pushswap
*/

#ifndef PUSHSWAP_H_
    #define PUSHSWAP_H_

    #include "struct.h"

int my_strlen(char *str);
list_t *add_node_back(list_t *list, int data);
list_t *add_node_front(list_t *list, int data);
int my_getnbr(char *str);
void print_list(list_t *list);
bool verif_function(int ac, char **av);
void my_putstr(char *str);
bool is_list_empty(list_t *list);
void pushswap_algo(pushswap_t *ctrl);
bool is_list_sorted(list_t *list);
void free_first_element(list_t *list);
void free_list(list_t *list);
void free_all(pushswap_t *ctrl);
void my_putnbr(int nb);

void sa_function(pushswap_t *ctrl);
void sb_function(pushswap_t *ctrl);
void sc_function(pushswap_t *ctrl);
void pa_function(pushswap_t *ctrl);
void pb_function(pushswap_t *ctrl);
void ra_function(pushswap_t *ctrl);
void rb_function(pushswap_t *ctrl);
void rr_function(pushswap_t *ctrl);
void rra_function(pushswap_t *ctrl);
void rrb_function(pushswap_t *ctrl);
void rrr_function(pushswap_t *ctrl);

#endif /* !PUSHSWAP_H_ */

/*
** EPITECH PROJECT, 2023
** Pushswap
** File description:
** list
*/

#include "../include/pushswap.h"

bool is_list_empty(list_t *list)
{
    if (list == NULL || list->head == NULL || list->tail == NULL)
        return (true);
    return (false);
}

list_t *add_node_back(list_t *list, int data)
{
    node_t *new = malloc(sizeof(node_t));
    if (!new) return (NULL);
    new->data = data;

    if (is_list_empty(list)) {
        list = malloc(sizeof(list_t));
        if (!list) return (NULL);
        list->head = new;
        list->tail = new;
        new->next = NULL;
        new->prev = NULL;
    } else {
        new->next = NULL;
        list->tail->next = new;
        new->prev = list->tail;
        list->tail = new;
    }
    return (list);
}

list_t *add_node_front(list_t *list, int data)
{
    node_t *new = malloc(sizeof(node_t));
    if (!new) return (NULL);
    new->data = data;

    if (is_list_empty(list)) {
        list = malloc(sizeof(list_t));
        if (!list) return (NULL);
        list->head = new;
        list->tail = new;
        new->next = NULL;
        new->prev = NULL;
    } else {
        new->prev = NULL;
        list->head->prev = new;
        new->next = list->head;
        list->head = new;
    }
    return (list);
}

bool is_list_sorted(list_t *list)
{
    node_t *tmp = list->head;

    while (tmp->next != NULL) {
        if (tmp->data > tmp->next->data) {
            return (false);
        }
        tmp = tmp->next;
    }
    return (true);
}

void free_first_element(list_t *list)
{
    node_t *tmp = list->head;

    if (list->head == list->tail) {
        list->head = NULL;
        list->tail = NULL;
    } else {
        list->head = list->head->next;
        list->head->prev = NULL;
    }
    free(tmp);
}

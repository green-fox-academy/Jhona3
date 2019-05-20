//
// Created by Jonas on 2019. 05. 20..
//

#ifndef LINKED_LIST_LINKED_LIST_H
#define LINKED_LIST_LINKED_LIST_H


typedef struct linked_list {
    int data;
    struct linked_list *next;


} linked_list_t;

void append(linked_list_t *head, int data);

linked_list_t *create_node(int data);

void push_front(linked_list_t *head, int data);

void print_list(linked_list_t *list);

void insert_after(linked_list_t *head, int data, int index);

linked_list_t *point_to_index(linked_list_t *head, int index);

int size(linked_list_t *head);

int is_empty(linked_list_t *head);

void delete_first(linked_list_t *head);


#endif //LINKED_LIST_LINKED_LIST_H

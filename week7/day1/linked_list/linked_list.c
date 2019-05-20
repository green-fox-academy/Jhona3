//
// Created by Jonas on 2019. 05. 20..
//
#include "linked_list.h"

#include <stdio.h>
#include <stdlib.h>


void append(linked_list_t *head, int data)
{
    linked_list_t *new_node = create_node(data);

    linked_list_t *it = head;
    while (it->next != NULL) {
        it = it->next;
    }
    it->next = new_node;

}

linked_list_t *create_node(int data)
{
    linked_list_t *node = (linked_list_t *) malloc(sizeof(linked_list_t));
    node->data = data;
    node->next = NULL;
    return node;

}

void push_front(linked_list_t *head, int data)
{
    linked_list_t *new_node = (linked_list_t *) malloc(sizeof(linked_list_t));
    new_node->data = data;
    new_node->next = head->next;

    head->next = new_node;


}

void print_list(linked_list_t *list)
{
    linked_list_t *it = list->next;
    while (it != NULL) {
        printf("%d\n", it->data);
        it = it->next;
    }

}

void insert_after(linked_list_t *head, int data, int index)
{
    linked_list_t *new_node = create_node(data);
    new_node->data = data;
    linked_list_t *node_before = point_to_index(head, index);
    new_node->next = node_before->next;
    node_before->next = new_node;


}

linked_list_t *point_to_index(linked_list_t *head, int index)
{
    linked_list_t *index_pointer = (linked_list_t *) malloc(sizeof(linked_list_t));
    index_pointer->next = head->next;

    for (int i = 0; i < index; ++i) {
        index_pointer = index_pointer->next;
    }

    return index_pointer;
}

int size(linked_list_t *head)
{
    int counter = 0;
    while (head->next != NULL) {
        ++counter;
        head = head->next;

    }

    return counter;
}

int is_empty(linked_list_t *head)
{
    if (head->next == NULL) {
        return 1;
    }
    return 0;
}

void delete_first(linked_list_t *head)
{
    linked_list_t *second_loc = head->next->next;
    free(head->next);
    head->next = second_loc;

}

void delete_by_value(linked_list_t *head, int data)
{
    while (head->next != NULL) {
        while (head->next->data != data) {
            head = head->next;
        }
            linked_list_t *next_loc = head->next->next;
            free(head->next);
            head->next = next_loc;

    }
}

linked_list_t *search(linked_list_t *head, int data)
{
    while(head->next != NULL){
        if(head->next->data == data){
            return head->next;
        }

        head = head->next;
    }

    return NULL;
}

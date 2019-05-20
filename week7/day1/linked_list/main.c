#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

int main()
{
    linked_list_t *head = create_node(0);

    append(head, 50);
    append(head, 60);
    append(head, 70);
    append(head, 80);
    append(head,90);
    push_front(head, 40);
    push_front(head,30);
    insert_after(head, 40000000, 4);
    append(head, 60);
    delete_first(head);
    delete_by_value(head, 60);
    linked_list_t *search_test = search(head, 40);

    printf("%d\n", size(head));
    printf("%d\n", is_empty(head));


    if(search_test != NULL){
        printf("%d\n", search_test->data);

    }
    if(search_test == NULL){
        printf("Yaaas\n");
    }
    print_list(head);

    return 0;
}
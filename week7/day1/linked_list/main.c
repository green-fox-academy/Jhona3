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
    delete_first(head);

    printf("%d\n", size(head));
    printf("%d\n", is_empty(head));

    print_list(head);

    return 0;
}
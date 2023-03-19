#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node * next;
};

void sl_list_init(struct Node *node, int value, struct Node *next) {
    node->value = value;
    node->next = next;
};

struct Node *sl_list_create_node(int value, struct Node *next)
{
    struct Node *node = malloc(sizeof(struct Node));
    sl_list_init(node, value, next);
    return node;
}

void sl_list_print(struct Node* head){
    if (head == NULL){
        printf("NULL\n");
        return;
    }
    struct Node *current = head;
    while(current != NULL)
    {
        printf("address: %p, value: %d, next: %p\n", current, current->value, current->next);
        current = current->next;
    }
}

struct Node* sl_list_get_last_node(struct Node*head){
    struct Node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
    }
    return current;
}

void sl_list_push(struct Node* head, int value){
    struct Node *current = sl_list_get_last_node(head);
    current->next = sl_list_create_node(value, NULL);
}

struct Node* sl_list_push_front(struct Node* head, int value){
    return sl_list_create_node(value, head);
}

struct Node* sl_list_insert_at(struct Node* head, int index, int value){
    if(index == 0) return sl_list_push_front(head,value);
    struct Node* node = head;
    for(int i = 1; i < index; i++) {
        node = node->next;
        if (node == NULL) return head;
    }
    node->next = sl_list_create_node(value, node->next);
    return head;
}

struct Node* sl_list_pop_front(struct Node* head){
    struct Node *next = head->next;
    free(head);
    return next;
}

struct Node* sl_list_pop_back(struct Node* head){
    if (head->next == NULL){
        free(head);
        return NULL;
    }
    struct Node *node = head;
    while(node->next->next != NULL)  node = node->next;
    free(node->next);
    node->next = NULL;
    return head;
}

struct Node* sl_list_delete_at(struct Node* head, int index){
    if (index == 0) return sl_list_pop_front(head);
    struct Node* node = head;
    for(int i = 1; i < index; i++) {
        node = node->next;
        if (node == NULL) return head;
    }
    struct Node* node_to_destroy = node->next;
    if (node_to_destroy == NULL) return head;
    node->next = node->next->next;
    free(node_to_destroy);
    return head;
}

void sl_list_destroy(struct Node* head){
    struct Node *current = head;
    while(current != NULL)
    {
        struct Node *next = current->next;
        free(current);
        current = next;
    }
}

int main()
{
    struct Node *n3 = sl_list_create_node(9, NULL);
    struct Node *n2 = sl_list_create_node(5, n3);
    struct Node *head = sl_list_create_node(42, n2);

    sl_list_push(head, 5);
    sl_list_push(head, 6);
    head = sl_list_push_front(head, -1);
    sl_list_insert_at(head, 30, 50);
    head = sl_list_pop_front(head);
    head = sl_list_pop_back(head);
    head = sl_list_delete_at(head, 50);

    sl_list_print(head);

    sl_list_destroy(head);
}

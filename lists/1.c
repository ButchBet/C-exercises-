/* Program to show the working of a linked list using the LIFO method */
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int data;
    struct nodo *next;
}nodo;

/* save the data */
nodo *enter_lifo (nodo *l, int b){
    nodo *new;
    new = (nodo *)malloc(sizeof(nodo));
    new->data = b;
    new->next = l;
    return new;
}

/* Show the data */
void show_data(nodo *l){
    printf("List -->");
    while(l != NULL){
        printf(" %d", l->data);
        l = l->next;
    }
    printf("\n");
}

/* Delete all the data */
nodo *delete_data(nodo *l){
    nodo *help;
    while(l != NULL){
        help = l;
        l = l->next;
        free(help);
    }
    return NULL;
}

int main(){
    nodo *list = NULL;

    /* Adding all of the values */
    list = enter_lifo(list, 1);
    list = enter_lifo(list, 2);
    list = enter_lifo(list, 3);

    /* Show list data */
    show_data(list);

    /* Delete nodos data */
    list = delete_data(list);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;

void beginInsert(){
    struct node *ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    
}
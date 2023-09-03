// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;
};

int main() {
    int n,data;
    struct node *prevnode, *newnode, *head;
    head=NULL;
    
    printf("Enter the no.of nodes: ");
    scanf("%d", &n);
    
    head=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE 1ST NODE DATA: ");
    scanf("%d", &data);
    head->info=data;
    head->next=NULL;
    prevnode=head;
    
    for(int i=2;i<=n;i++){
        newnode=(struct node *)malloc(sizeof(struct node));
        
        printf("ENTER THE DATA FOR NODE %d: ", i);
        scanf("%d",&newnode->info);
        prevnode->next=newnode;
        newnode->next=NULL;
        prevnode=newnode;
    }
    prevnode->next=head;
    printf("CIRCULAR LINKED LIST CREATED");
}

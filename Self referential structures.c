#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *next;
};

int main() {
    int size;
    struct node *temp,*head,*ptr;
    head=NULL;
    printf("enter the size of node: ");
    scanf("%d", &size);
    for (int i=0;i<size;i++){
        temp=malloc(sizeof(struct node));
        printf("ENTER THE DATA: ");
        scanf("%d",&temp->info);
        if (head==NULL){
            head=temp;
            temp->next=NULL;
        }
        else{
            ptr=head;
            while(ptr->next!=NULL){
                ptr=ptr->next;
            }
            ptr->next=temp;
            temp->next=NULL;
        }
    }
        
    //PRINTING THE DATA
    ptr=head;
    for(int i =0;i<size;i++){
        printf("%d",ptr->info);
        printf("\n");
        ptr=ptr->next;
    }
    
    return 0;
}

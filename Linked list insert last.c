#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

int main(){
    struct node *new_node,*temp;
    int num,i,value;

    printf("How many node want to create? : ");
    scanf("%d",&num);

    for(i = 0;i<num;i++){

        printf("\nEnter the %d value: ",i+1);
        scanf("%d",&value);
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = value;
        new_node->next = NULL;
        if(i==0){
            head = new_node;
        }else{
           temp->next = new_node;
        }
        temp = new_node;

    }

    printf("\nFull link list is: ");

    temp = head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    printf("\n\n");
    return 0;
}







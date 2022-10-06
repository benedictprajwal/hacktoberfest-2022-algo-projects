#include<stdlib.h>
#include<stdio.h>
typedef struct linkedlist{
    int data;
    struct linkedlist * next;
} linkedlist;
linkedlist *front, *rear;
linkedlist *enqueue(linkedlist *head, int data){
    linkedlist *temp=(linkedlist*)malloc(sizeof(linkedlist));
    temp->data= data;
    temp->next=NULL;
    if(front==NULL && rear== NULL){
        front=rear=temp;
    }
    else{
        rear->next= temp;
        rear=temp;
    }
    return temp;
}

void *dequeue(){
    if(front==NULL && rear==NULL){
        printf("Empty Queue");
    }
    else{
        if(rear==front){
            rear=front=NULL;
        }
        else{
            linkedlist *temp, *p;
            // temp=front;
            // while(temp->next!=rear){
            //     temp=temp->next;
            // }
            p=front;
            front=front->next;
            // rear->next=NULL;
            free(p);
        } 
    }   
}
int peek(linkedlist *front){
    return front->data;
}
void display_queue(){
    linkedlist *temp;
    temp=front;
    while(temp!= NULL){
        printf("%4d", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    printf("Welcome to queue using linkedlist.\n");
    linkedlist *head;
    // linkedlist *front_= front;
    // linkedlist *rear_= rear;
    printf("enter number of things you wanna enqueue    :");
    int num;
    scanf("%d", &num);
    int data;
    for (int i = 0; i < num; i++)
    {
        printf("enter what you wanna enqueue            :");
        scanf("%d", &data);
        head=enqueue(head, data);
        
    }
    display_queue();
    dequeue();
    display_queue();
    dequeue();
    display_queue();
    int c= peek(front);
    printf ("%d", c);
    dequeue();
    printf("%d", peek(front));

}

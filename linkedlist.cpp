// this c file is all about the double circular linked list
#include "linkedlist.h"

// free the list
void FreeList(node_t **head){
    node_t *tmp=NULL;
    node_t *pHead=*head;
    while(pHead->next!=*head){
        tmp=pHead;
        pHead=pHead->next;
        delete tmp;
    }
    delete pHead;
}

// insert a player in the list
void InsertLastList(node_t **head,player *pl){
    node_t *tmp=*head;
    int i=1;
    node_t *c=new node_t;
    c->pl=pl;
    if (tmp!=NULL){
        while (tmp->next!=*head){
            tmp=tmp->next;
            i++;
        }
        c->next=NULL;
        c->front=tmp;
        tmp->next=c;
        c->next=*head;
        (*head)->front=c;
    } else {
        c->next=NULL;
        *head=c;
        (*head)->next=*head;
    }
}

// create new list
node_t *Initialize(player *pl){
    node_t *head;
    head=new node_t;
    if(head==NULL){
        cout<<"no memory"<<endl;
        exit(-1);
    }
    head->next=NULL;
    head->front=NULL;
    head->pl=pl;
    head->next=head;
    head->front=head;
    return head;
}

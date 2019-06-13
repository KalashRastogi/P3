#include<bits/stdc++.h>
#include "linkedlist.h"
using namespace std;
void insertAtBack(Node **head, int value){
    Node *newNode = new Node();
    if(newNode==NULL){
        cout<<"Memort not available";
        return;
    }
    else{
        newNode->data = value;
        newNode->next = NULL;
        if(*head==NULL){
            *head = newNode;
        }
        else{
            Node *lastNode = *head;
            while(lastNode->next != NULL){
                lastNode = lastNode->next;
            }
            lastNode->next = newNode;
        }
    }
}
void insertAtFront(Node **head, int value){
    Node *newNode = new Node();
    if(newNode==NULL){
        cout<<"Memort not available";
        return;
    }
    else{
        newNode->data=value;
        if(*head==NULL){
            newNode->next=NULL;
            *head=newNode;
        }
        else{
            newNode->next=*head;
            *head=newNode;
        }
    }
}
void insertInMiddle(Node **head, int num, int pos){
    Node *temp=*head;
    pos--;
    while(pos!=0 && temp!=NULL){
        temp=temp->next;
        pos--;
    }
    if(temp==NULL){
        cout<<"Position not correct"<<endl;
        return;
    }
    Node *newNode = new Node();
    if(newNode==NULL){
        cout<<"Memory not availabe!"<<endl;
        return;
    }
    newNode->data=num;
    newNode->next=temp->next;
    temp->next=newNode;
}
void printList(Node *head){
    if(head == NULL){
        cout<<"No elements availabe!";
        return;
    }
    else{
        while(head!=NULL){
            cout<<head->data<<"->";
            head=head->next;
        }
        cout<<"Null"<<endl;
    }
}
void deleteNode(Node **head, int val){
    if(*head == NULL){
        cout<<"List is empty!";
        return;
    }
    else{
        Node *temp=*head;
        if((*head)->data==val){
            *head=(*head)->next;
            delete(temp);
        }
        else{
            Node *prevNode;
            while(temp!=NULL && temp->data != val){
                prevNode=temp;
                temp=temp->next;
            }
            if(temp==NULL){
                cout<<"No such element is found!"<<endl;
                return;
            }
            else{
                prevNode->next=temp->next;
                delete(temp);           
            }
        }
    }
}
void deleteFromFront(Node **head){
    Node *temp=*head;
    if(*head==NULL){
        cout<<"List is empty!";
        return;
    }
    *head=(*head)->next;
    delete(temp);
}
void deleteFromBack(Node **head){
    Node *temp=*head;
    Node *prevNode;
    while(temp->next!=NULL){
        prevNode = temp;
        temp=temp->next;
    }
    prevNode->next=NULL;
    delete(temp);
}

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
void deletePointer(Node **head, Node *ptr){
    if(*head == NULL){
        cout<<"List is empty!";
        return;
    }
    else{
        Node *temp=*head;
        if(*head==ptr){
            *head=(*head)->next;
            delete(temp);
        }
        else{
            Node *prevNode;
            while(temp!=NULL && temp != ptr){
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
void reverseList(Node **head){
    Node *back=NULL,*current=*head,*ahead;
    while(current!=NULL){
        ahead=current->next;
        current->next=back;
        back=current;
        current=ahead;
    }
    *head=back;
}
int listLength(Node *head){
    int counter=0;
    while(head!=NULL){
        counter++;
        head=head->next;
    }
    return counter;
}
void split(Node *head,Node** first, Node** second){
    *first=head;
    int len=listLength(head);
    len=ceil((float)len/2);
    while(len>1){
        head=head->next;
        len--;
    }
    *second=head->next;
    head->next=NULL;
}
Node* merge(Node* firstPart, Node* secondPart){
    Node *head;
    head=firstPart;
    while(firstPart->next!=NULL){
        firstPart=firstPart->next;
    }
    firstPart->next=secondPart;
    return head;
}
Node* mergeLists(Node *first, Node* second){
    Node *head=NULL;
    while(first!=NULL && second!=NULL){
        if((first->data)<(second->data)){
            insertAtBack(&head,first->data);
            first=first->next;
        }
        else if((first->data)>(second->data)){
            insertAtBack(&head,second->data);
            second=second->next;
        } 
        else{
            insertAtBack(&head,first->data);
            insertAtBack(&head,second->data);
            first=first->next;
            second=second->next;
        }
    }
    while(first!=NULL){
        insertAtBack(&head,first->data);
        first=first->next;
    }
    while(second!=NULL){
        insertAtBack(&head,second->data);
        second=second->next;
    }
    return head;
}
void mergeSort(Node **head){
    Node *hptr=*head;
    Node *first,*second;
    if(hptr==NULL || hptr->next==NULL){
        return;
    }
    split(hptr,&first,&second);
    printList(first);
    printList(second);
    mergeSort(&first);
    mergeSort(&second);
    *head = mergeLists(first, second);
    printList(*head);
}
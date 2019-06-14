#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int coeff;
    int expo;
    Node *next;
};
void insertAtBack(Node **head, int coeff, int expo){
    Node *newNode = new Node();
    if(newNode==NULL){
        cout<<"Memort not available";
        return;
    }
    else{
        newNode->coeff = coeff;
        newNode->expo = expo;
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
Node* addList(Node* head1, Node* head2){
    Node *res;
    while(head1!=NULL && head2!=NULL){
        if((head1->expo)==(head2->expo)){
            insertAtBack(&res,(head1->coeff+head2->coeff),head1->expo);
            head1=head1->next;
            head2=head2->next;
        }    
        else if((head1->expo)>(head2->expo)){
            insertAtBack(&res,head1->coeff,head1->expo);
            head1=head1->next;
        }
        else{
            insertAtBack(&res,head2->coeff,head2->expo);
            head2=head2->next;
        }
    }
    while(head1!=NULL){
        insertAtBack(&res,head1->coeff,head1->expo);
        head1=head1->next;
    }
    while(head2!=NULL){
        insertAtBack(&res,head2->coeff,head2->expo);
        head2=head2->next;
    }
    return res;
}
void printList(Node *head){
    if(head == NULL){
        cout<<"No elements availabe!";
        return;
    }
    else{
        while(head->next!=NULL){
            if(head->expo==1)
                cout<<head->coeff<<"x"<<" + ";
            else    
                cout<<head->coeff<<"x^"<<head->expo<<" + ";
            head=head->next;
        }
        if(head->expo!=0)
            cout<<head->coeff<<"x^"<<head->expo;
        else
            cout<<head->coeff;
        head=head->next;
        cout<<" = 0;"<<endl;
    }
}
int main(){
    Node *head1=NULL, *head2=NULL, *head3;
    int coeff,expo;
    while(1){
        cout<<"Enter coefficient:";
        cin>>coeff;
        if(coeff==-1){
            break;
        }
        cout<<"Enter power:";
        cin>>expo;
        insertAtBack(&head1, coeff, expo);
    }
    printList(head1);
    while(1){
        cout<<"Enter coefficient:";
        cin>>coeff;
        if(coeff==-1){
            break;
        }
        cout<<"Enter power:";
        cin>>expo;
        insertAtBack(&head2, coeff, expo);
    }
    printList(head2);
    head3 = addList(head1,head2);
    printList(head3);
    return 0;
}
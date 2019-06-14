/*multiplication of two polynomials*/
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
Node* multiplyList(Node *head1,Node* head2){
    Node *res=NULL;
    Node *temp=head2,*toBeDel;
    while(head1!=NULL){
        head2=temp;
        while(head2!=NULL){
            insertAtBack(&res,((head1->coeff)*(head2->coeff)),((head1->expo)+(head2->expo)));
            head2=head2->next;    
        }
        head1=head1->next;
    }
    temp=res;
    /* while(temp!=NULL){
        if(temp->expo == temp->next->expo){
            temp->coeff += temp->next->coeff;
            toBeDel = temp->next;
            temp->next=toBeDel->next;
            delete(toBeDel);
        }
        temp=temp->next;
    }*/
    return res;
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
    head3 = multiplyList(head1,head2);
    printList(head3);
    return 0;
}
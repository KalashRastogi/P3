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
int evaluateList(Node* head,int x){
    int sum=0;
    while(head!=NULL){
        sum+=(head->coeff)*(pow(x,head->expo));
        head=head->next;
    }
    return sum;
}
int main(){
    Node *head=NULL;
    int coeff,expo,x,result;
    while(1){
        cout<<"Enter coefficient:";
        cin>>coeff;
        if(coeff==-1){
            break;
        }
        cout<<"Enter power:";
        cin>>expo;
        insertAtBack(&head, coeff, expo);
    }
    printList(head);
    cout<<"Enter x:";
    cin>>x;
    cout<<evaluateList(head,x)<<endl;
    return 0;
}
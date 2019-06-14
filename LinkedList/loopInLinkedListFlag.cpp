/*Floyd's cycle detection*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    bool visited;
    Node *next;
};
void insertAtBack(Node **head,int val){
    Node *newNode = new Node();
    if(newNode==NULL){
        cout<<"Memory not available";
    }
    else{
        newNode->data=val;
        newNode->visited=false;
        newNode->next=NULL;
        if(*head==NULL){
            *head=newNode;
        }
        else{
            Node *temp=*head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
}
bool cycleInList(Node *head){
    while(head!=NULL){
        if(head->visited){
            return true;
        }
        head->visited=true;
        head=head->next;
    }
    return false;
}
int main(){
    Node *head=NULL;
    /* Creating Loop*/
    int a,k;
    while(1){
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }
    cout<<"Enter pos to start loop:";
    cin>>k;
    Node *loopStart=head, *loopEnd=head;
    while(k>1){
        loopStart=loopStart->next;
        k--;
    }
    while(loopEnd->next!=NULL){
        loopEnd=loopEnd->next;
    }
    loopEnd->next=loopStart;
    if(cycleInList(head)){
        cout<<"Loop in the list";
    }
    else{
        cout<<"Simple list";
    }
    cout<<endl;
    return 0;
}
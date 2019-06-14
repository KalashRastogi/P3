/*This problem is same as detecting loop in linked list*/
/*Floyd's cycle detection*/
#include "linkedlistfunctions.h"
using namespace std;
bool cycleInList(Node *head){
    Node *p1=head,*p2=head;
    do{
        p1=p1->next;
        p2=p2->next->next;
    }while(p1!=p2 && p2!=NULL && p2->next!=NULL && p2->next->next!=NULL);
    if(p1==p2)
        return true;
    else
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
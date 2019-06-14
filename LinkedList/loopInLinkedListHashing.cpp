/*Floyd's cycle detection*/
#include "linkedlistfunctions.h"
using namespace std;
bool cycleInList(Node *head){
    unordered_set<Node*> s;
    while(head!=NULL){
        if(s.find(head)==s.end()){
            return true;
        }
        s.insert(head);
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
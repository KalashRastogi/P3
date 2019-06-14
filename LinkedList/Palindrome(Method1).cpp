#include "linkedlistfunctions.h"
using namespace std;
int findKNode(Node *head, int k){
    if(k>listLength(head)){
        cout<<"Wrong value of k"<<endl;
        return 0;
    }
    else{
        while(k>1){
            head=head->next;
            k--;
        }
        return head->data;
    }
}
bool isPalindrome(Node *head){
    int begin=1, end=listLength(head);
    while(begin<end){
        if(findKNode(head,begin)!=findKNode(head,end)){
            return false;
        }
        begin++;end--;
    }
    return true;
}
int main(){
    Node *head=NULL;
    int a;
    do{
        cin>>a;
        if(a==-1){
            break;
        }
        insertAtBack(&head,a);
    }while(a!=-1);
    printList(head);
    if(isPalindrome(head)){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}
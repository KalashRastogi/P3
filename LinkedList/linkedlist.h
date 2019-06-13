//#ifndef _linkedlist_h
#define _linkedlist_h
class Node{
    public:
    int data;
    Node *next;
};
void insertAtBack(Node **, int);
void insertAtFront(Node **, int);
void insertInMiddle(Node **, int, int);
void deleteFromFront(Node **);
void deleteFromBack(Node **);
void deleteNode(Node **, int);
void printList(Node*);

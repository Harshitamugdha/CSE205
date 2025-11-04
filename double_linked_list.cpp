#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
        }
};
void ConnectNode(Node* l1, Node* l2){
    l1->next=l2;
    l2->prev=l1;
};
int main(){
     Node* head = new Node(10);
     Node* n1= new Node(20);
     Node* n2= new Node(30);
     Node* n3= new Node(40);
    ConnectNode(head,n1);
    ConnectNode(n1,n2);
    ConnectNode(n2,n3); 
}
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
/*
Node* insertatstart(Node*& head, Node* newhead){
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newhead->next=head;
    temp->next=newhead;
    return newhead;
}
*/
void insertatstart(Node*& head, Node* newhead){
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newhead->next=head;
    temp->next=newhead;
    head=newhead;
}
void insertatend(Node*& head, Node* newtail){
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newtail;
    newtail->next=head;
}
/*
void insertatposition(Node* head, int x){

}
*/
void deletatstart(Node*& head){
    // if(head->next==NULL){
    //     return NULL;
    // }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* del=head;
    head=head->next;
    temp->next=head;
    delete del;
}
int main(){
    Node* head=new Node(10);
    Node* l1=new Node(20);
    Node* l2=new Node(30);
    Node* tail=new Node(40);
    head->next=l1;
    l1->next=l2;
    l2->next=tail;
    tail->next=head;
    Node* nh=new Node(50);
    //head=insertatstart(head,nh);
    Node* nt= new Node(60);
    insertatstart(head,nh);
    insertatend(head,nt);
    deletatstart(head);
    // int n;
    // cin>>n;
    // insertatposition(head,n);
    Node* temp=head;
    do{
        cout<<temp->data<<' ';
        temp=temp->next;
    }while(temp!=head);

}
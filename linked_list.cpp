#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next=NULL;

    }
};
int main(){
    // node* newhead = new node(100);
    node* head = new node(10);
    node* l1= new node(20);
    node* l2= new node(30);
    node* l3= new node(40);
    // newhead->next=head;
    head->next = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = NULL;
    node* newnode= new node(5);
    l3->next=newnode;
    newnode->next=NULL;
    // for(node* i=head;i!=NULL;i=i->next){
    //     cout<<i->data<<" ";
    // }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
 }

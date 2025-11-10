#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node* insert_at_end(struct Node* head, int val){
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=val;
    new_node->next=NULL;
    struct Node* temp=head;
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=new_node;
    return temp;
};
struct Node* delete_at_end(struct Node* head){
    struct Node* temp= head;
    while(head->next->next!=NULL){
        head=head->next;
    }
    struct Node* del= head->next;
    head->next=NULL;
    free(del);
    return temp;
}
int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* l1=(struct Node*)malloc(sizeof(struct Node));
    struct Node* l2=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    l1->data=20;
    l2->data=30;
    head->next=l1;
    l1->next=l2;
    l2->next=NULL;
    insert_at_end(head,40);
    insert_at_end(head,50);
    delete_at_end(head);
    while(head!=NULL){
        cout<<head->data<<' ';
        head=head->next;
    }
}
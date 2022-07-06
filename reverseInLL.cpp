#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
//iteratively reverse
node* reverseIterative(node * &head){
node*prev=NULL;
node*curr=head;
node*nextptr;
while(curr!=NULL){
    nextptr=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextptr;
}
return prev;
}
//recursively reverse
node*reverseRecursively(node * &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursively(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}


void insertAtTail(node* &head,int val){
    node*n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout << temp->data << "->";
        temp=temp->next;
    }
    cout <<"NULL" << endl;
}


int main(){
    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    node* newhead= reverseRecursively(head);
    display(newhead);
}
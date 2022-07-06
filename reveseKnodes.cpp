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

node* reverseK(node * &head,int k){
node*prev=NULL;
node*curr=head;
node*nextptr;
int count=0;
while(curr!=NULL && count<k){
    nextptr=curr->next;
    curr->next=prev;
    prev=curr;
    curr=nextptr;
    count++;
}
if(nextptr!=NULL){
    head->next=reverseK(nextptr,k);
}
return prev;
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
    insertAtTail(head,6);
    display(head);
    int k=2;
    node* newhead= reverseK(head,k);
    display(newhead);
}
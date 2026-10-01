#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        this->data=val;
        this->next=nullptr;
    }
};
class LL{
      Node*head=nullptr;
      Node*tail=nullptr;
      public:
      LL(){
        head=tail=nullptr;
      }
void push_front(int val){
    Node*newnode=new Node(val);
    if(head==nullptr){
        head=tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}
void push_back(int val){
    Node*newnode=new Node(val);
    if(head==nullptr){
        head=tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void pop_front(){
    if(head==nullptr){
        return;
    }
     Node*temp=head;
    head=head->next;

    temp->next=nullptr;
    delete temp;
}
void pop_back(){
    if(head==nullptr){
        return ;
    }
    if(head==tail){
        delete head;
        head=tail=nullptr;
        return;
    }
 Node*temp=head;
 while(temp->next=tail){
    temp=temp->next;
 } 
 delete tail;
 temp=tail;
 tail->next=nullptr;
}
void print(){
    Node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
};
int main(){
    LL ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);
    ll.push_back(50);
    ll.pop_front();
    ll.pop_back();
    ll.print();


    return 0;
}
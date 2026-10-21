#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int x):data(x),next(nullptr){} };
int main() {
    Node* head=new Node(1); head->next=new Node(2); head->next->next=new Node(3);
    Node *prev=nullptr,*cur=head;
    while(cur){Node* next=cur->next;cur->next=prev;prev=cur;cur=next;} head=prev;
    for(Node* p=head;p;p=p->next) cout<<p->data<<' '; cout<<'\n';
    while(head){Node* old=head;head=head->next;delete old;}
}
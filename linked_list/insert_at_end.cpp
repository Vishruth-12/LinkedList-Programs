#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int x):data(x),next(nullptr){} };
int main() {
    Node* head=nullptr; Node* tail=nullptr;
    for(int x:{10,20,30}) { Node* n=new Node(x); if(!head) head=n; else tail->next=n; tail=n; }
    for(Node* p=head;p;p=p->next) cout<<p->data<<' '; cout<<'\n';
    while(head){Node* old=head;head=head->next;delete old;}
}
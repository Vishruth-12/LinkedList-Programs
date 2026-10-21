#include <iostream>
using namespace std;
struct Node { int data; Node* next; Node(int x):data(x),next(nullptr){} };
int main() {
    Node* head=new Node(4); head->next=new Node(7); head->next->next=new Node(9);
    int key=7; Node dummy(0); dummy.next=head; Node* prev=&dummy;
    while(prev->next && prev->next->data!=key) prev=prev->next;
    if(prev->next){Node* victim=prev->next;prev->next=victim->next;delete victim;}
    head=dummy.next; for(Node* p=head;p;p=p->next) cout<<p->data<<' '; cout<<'\n';
    while(head){Node* old=head;head=head->next;delete old;}
}
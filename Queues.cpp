#include "Queues.h"

Queues::Queues()
{
    head = tail = NULL ;
}
Queues::push(char c){
    Node *newnode = new Node(c);
    if(head == NULL){
        newnode->next = head ;
        newnode->prev = head ;
        head = newnode;
        tail = head ;
    }else{
        newnode->next = head ;
        head->prev = newnode;
        newnode->prev = NULL ;
        head = newnode ;
    }
}
Queues::pop(){
    if(tail == NULL){
        cout << "Nothing in the queue "<<endl;
    }else{
        cout << tail->value<<endl ;
        tail = tail->prev ;
    }
}


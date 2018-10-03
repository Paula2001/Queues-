#ifndef QUEUES_H
#define QUEUES_H
#include "Node.h"
#include <iostream>
using namespace std;

class Queues
{
    public:
        Queues();
        push(char c);
        pop();
    private:
        Node *head ;
        Node *tail ;
};

#endif // QUEUES_H

#include <iostream>
#include "Queues.h"
using namespace std;

int main()
{
    Queues *q = new Queues() ;
    q->push('A');
    q->push('B');
    q->push('C');
    q->push('D');
    q->pop();
    q->pop();
    q->pop();
    q->pop();
    q->pop();

    return 0;
}

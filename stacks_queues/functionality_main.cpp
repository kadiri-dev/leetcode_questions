#include <iostream>
#include "stack_using_queues.cpp"
using namespace std;

int main(){
    Mystack* m1 = new Mystack(5);
    m1->push(1);
    m1->push(2);
    m1->push(3);
    m1->push(4);
    m1->push(5);
    cout<<m1->pop()<<endl;
    m1->traverse();
}
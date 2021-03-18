#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    Stack* s = new Stack(5);
    s->push(1);
    s->push(2);
    s->push(4);
    s->push(6);
    s->push(3);
    s->traverse();    
    delete s;
    return 0;
}
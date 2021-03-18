#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int maxSize = 0;
    int last = -1;

public:
    Stack(int n);
    int pop();
    void push(int n);
    void traverse();
    ~Stack(){
        cout<<"Destructor called"<<endl;        
        delete[] arr;        
    }
};
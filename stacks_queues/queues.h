#include <iostream>
using namespace std;

class queue{
    int front=0,rear=0;
    int maxSize=0;
    int* arr;
    public:
        queue(int n);
        void insert(int n);
        int pop();
        void traverse();
        int size();
        void empty();
        int top();
        ~queue();
};
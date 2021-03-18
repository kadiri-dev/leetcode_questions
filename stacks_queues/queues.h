#include <iostream>
using namespace std;

class queue{
    int front,rear;
    int maxSize;
    int* arr;
    public:
        queue(int n);
        void insert(int n);
        int pop();
        void traverse();
        ~queue();
};
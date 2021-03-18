#include "stack.h"
#define ERROR 12345

Stack::Stack(int n)
{
    arr = new int[n];
    cout<<"constructor called"<<endl;
    maxSize = n;
}

int Stack::pop()
{
    if (last != 0)
    {
        return arr[last--];
    }    
    cout << "No element found" << endl;
    return ERROR;
}

void Stack::push(int n)
{
    if (last < maxSize - 1)
    {
        arr[++last] = n;
    }
    else
    {
        cout << "Max Size Reached" << endl;
    }
}

void Stack::traverse()
{
    for (int i = 0; i <= last; i++)
    {
        cout << arr[i] << endl;
    }
}


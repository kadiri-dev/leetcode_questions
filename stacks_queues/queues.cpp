#include "queues.h"
#define ERROR_STRING 1111

queue::queue(int n){    
    arr = new int[n];
    maxSize=n;
}

void queue::insert(int ele){
    if(rear < maxSize){
        arr[rear++]=ele;
    }
    else{
        cout<<"Queue full"<<endl;
    }
}

int queue::pop(){
    if(front != rear){
        return arr[front++];
    }
    
    cout<<"Queue empty"<<endl;    
    return ERROR_STRING;
    
}

void queue::traverse(){
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
}

int queue::size(){    
    return rear-front;
}

void queue::empty(){    
    front=0;
    rear=0;
}

int queue::top(){
    return arr[rear];
}

queue::~queue(){
    cout<<"destructor called"<<endl;
    delete []arr;
}
#include "queues.h"

queue::queue(int n){
    arr = new int[n];
    maxSize=n;
}

void queue::insert(int ele){
    if(rear < maxSize - 1){
        arr[rear++]=ele;
    }
    else{
        cout<<"Queue full"<<endl;
    }
}

int queue::pop(){
    if(front != 0){
        cout<<arr[front++]<<endl;
    }
    else{
        cout<<"Queue empty"<<endl;
    }
}

void queue::traverse(){
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
}

queue::~queue(){
    cout<<"destructor called"<<endl;
    delete []arr;
}
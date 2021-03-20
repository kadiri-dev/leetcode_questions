#include "queues.h"

class Mystack{
    int rear=0;
    int max_size=0;
    queue* original;
    queue* dummy;
    public:
        Mystack(int n){            
            original = new queue(n);            
            dummy = new queue(n);
            max_size=n;            
        }

        void push(int x){
            if(original->size()<max_size){
                original->insert(x);
                rear++;                
            }
            else{
                cout<<"Max Size reached"<<endl;
            }
        }

        int pop(){            
            for(int i=0;i<rear-1;i++){
                int val = original->pop();
                dummy->insert(val);                
            }
            queue* tmp=dummy;
            dummy=original;
            original=tmp;  
            return dummy->pop();
        }

        int top(){
            return original->top();
        }

        bool empty(){
            return rear==0;
        }

        void traverse(){
            original->traverse();
        }

        ~Mystack(){
            delete original;
            delete dummy;
        }
};
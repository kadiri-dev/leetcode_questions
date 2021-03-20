#include <iostream>
using namespace std;



void findSum(int* arr, int len, int S){
    int sPtr=0;
    int wSize=0;
    int sum=arr[0];
    while(sPtr + wSize < len){  
        if(sum < S){
        	wSize++;
        	sum+=arr[sPtr + wSize];
        }
        else if(sum > S){
        	sum-=arr[sPtr];
            sPtr++;
            wSize--;
        }
        else{
            cout<<sPtr<<" "<<sPtr + wSize<<endl;
            break;
        }
        
    }    
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    findSum(arr,10,15);
    return 0;
}
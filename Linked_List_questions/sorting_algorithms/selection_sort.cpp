#include <iostream>
#define INT_MAX 2147483647
#include "array.h"
using namespace std;

void SelectionSort(int *arr,int N){
    int least=0;
    for(int i=0;i<N;i++){
        least=i;
        for(int j=i;j<N;j++){
            if(arr[j] < arr[least]){
                least=j;
            }
        }
        int dummy=arr[i];
        arr[i]=arr[least];
        arr[least]=dummy;        
    }
}

int main(){    
    Array<5> array;
    int* arr = array.getArray();
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
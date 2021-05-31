#include <iostream>
#include "array.h"
using namespace std;

void BubbleSort(int* arr, int N){
    for(int i=N-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int dummy = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=dummy;
            }
        }
    }
}

int main(){
    Array<5> array;
    int* arr = array.getArray();
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
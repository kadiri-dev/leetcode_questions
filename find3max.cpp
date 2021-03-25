#include <iostream>
using namespace std;
#define INT_MIN -2147483648


void findtop3(int* arr,int n){
    int one ,two,three;
    int max=INT_MIN;
    if(n<3)return;
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            one=i;
            max=arr[i];
        }
    }
    max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max < arr[i] && i != one){
            two=i;
            max=arr[i];
        }
    }
    max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max < arr[i] && i != one && i != two){
            three=i;
            max=arr[i];
        }
    }
    cout<<arr[one]<<" "<<arr[two]<<" "<<arr[three]<<endl;
}

int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    findtop3(arr,n);
}
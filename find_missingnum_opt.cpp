#include <iostream>
using namespace std;


int findMissingNumber(int* arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return ((n*(n+1)/2) - sum);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findMissingNumber(arr,n)<<endl;
}
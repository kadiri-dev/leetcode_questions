using namespace std;
#include <bits/stdc++.h> 
#include <iostream>



void print_dup(int* arr,int n){
    int slow_pointer=0;
    int fast_pointer=1;
    while(slow_pointer<n && fast_pointer<n){
        if(arr[slow_pointer] == arr[fast_pointer]){
            cout<<arr[fast_pointer]<<endl;
            slow_pointer=fast_pointer;
            fast_pointer++;
        }
        else{
            slow_pointer=fast_pointer;
            fast_pointer++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    print_dup(arr,n);
    return 0;
}
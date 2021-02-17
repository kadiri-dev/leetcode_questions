#include <iostream>
using namespace std;

int main(){
    int size,target;
    cout<<"Enter the size of the array:"<<endl;
    cin >> size;
    int arr[size];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the target"<<endl;
    cin>>target;
    int j=0;
    int k=size-1;
    while(j!=k){
        if(arr[j]+arr[k]<target){
            j++;
        }
        else if(arr[j]+arr[k]>target){
            k--;
        }
        else{
            cout << j << " "<< k << endl;
            break;
        }
    }
    
    
    return 0;
}
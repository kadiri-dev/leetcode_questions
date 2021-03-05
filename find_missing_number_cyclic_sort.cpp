/*
We are given an array containing ‘n’ distinct numbers taken from the range 0 to ‘n’. Since the array has only ‘n’ numbers out of the total ‘n+1’ numbers, find the missing number.
Input: [4, 0, 3, 1]
Output: 2
*/

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;



int findMissingNumber(int *arr,int n){

    vector<int> vec;
    for(int i=0;i<n;i++){
        vec.push_back(arr[i]);
    }
    for(int i=0;i<=n;i++){
        if(find(vec.begin(),vec.end(),i) == vec.end()){
            return i;
        }
    }
    return 0;

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
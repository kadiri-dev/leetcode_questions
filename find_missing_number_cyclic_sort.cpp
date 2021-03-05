/*
We are given an array containing ‘n’ distinct numbers taken from the range 0 to ‘n’. Since the array has only ‘n’ numbers out of the total ‘n+1’ numbers, find the missing number.
Input: [4, 0, 3, 1]
Output: 2
*/

#include <iostream>
#include <map> 
#include <algorithm>
using namespace std;



int findMissingNumber(int *arr,int n){

    map<int,int> vec;
    for(int i=0;i<n;i++){
        vec.insert(pair<int,int>(arr[i],1));
    }
    for(int i=0;i<=n;i++){
        if(!vec[i]){
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
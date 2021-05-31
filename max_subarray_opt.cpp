#include <iostream>
#include <vector>
using namespace std;


int findMax(vector<int> arr){
    int sum,maxSum;
    int prevMax,i=0;
    if(arr.size()==1){
        return arr[0];
    }
    else{
        while(i<arr.size()){
            if(prevMax > prevMax+arr[i]){
                maxSum=prevMax;
            }
            else{
                
            }
            i++;
        }
    }
}
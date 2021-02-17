#include "stdio.h"
#include <string.h>
#include <stdlib.h>


    int* maxSubArray(int arr[],int len, int S,int outLength){
        int window_start=0;
        int window_size=0;
        int currSum=arr[0];
        int maxLength;
        
        while(window_start+window_size < len){            
            if(currSum < S){
                window_size++;
                currSum+=arr[window_start+window_size];
            }
            else if(currSum > S){
                currSum-=arr[window_start];
                window_start++;
                window_size--;
            }
            else{
                if(maxLength<window_size){
                	maxLength=window_size;
                }
                currSum-=arr[window_start];
                window_start++;
                window_size--;
            }
        }
        int *outArr = (int*)malloc(sizeof(int)*(maxLength+1));
        outLength=maxLength+1;
        memcpy(outArr,arr+window_start,2*(maxLength+1));
        return outArr;
    }



int main(){
    int arr[] = {1,2,3,5,2,2,1};
    int S = 10;
    int outLength;
    int outArr[outLength];
    outArr=maxSubArray(arr,7,S,outLength);
    for(int i=0;i<outLength;i++){
    	printf("%d ",outArr[i]);
    }
    return 0;
}

#include <iostream>
#include <string>
#include <map>
#include <utility>
#define INT_MIN -2147483647
using namespace std;


int findProduct(int* arr,int n){
	int product=1;
	int high=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]!=0)
			product*=arr[i];
		if(arr[i] > high && arr[i] < 0){
			high=arr[i];
		}
		
	}
	return product<0?product/high:product;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<findProduct(arr,n)<<endl;
}
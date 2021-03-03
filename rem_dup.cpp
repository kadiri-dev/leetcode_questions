#include <iostream>
using namespace std;

void replace(int *arr,int j,int len){
    int fin=arr[j];
    for(int i=j;i<len;i++){
    	arr[i]=arr[i+1]	;
    }
    arr[len-1]=fin;
}

int ret_nodup(int *arr,int length){
    int i;
    int j=i+1;
    int ret_len=length;
    while(i<length && j<length){
        if(arr[i]==arr[j]){
            replace(arr,j,length);
            ret_len--;
            //cout<<"j:"<<j<<endl;
/*            for(int t=0;t<length;t++){
            	cout<<arr[t]<<" ";
            }*/
            cout<<endl;
        }
        else if(arr[i]<arr[j]){
            i++;
            j=i+1;
        }
        else{
        	break;
        }
    }
    return ret_len;
}

int main(){
    int length;
    cout<<"ENter the length:"<<endl;
    cin>>length;
    int arr[length];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    int outLen = ret_nodup(arr,length);
    cout<<outLen<<endl;
	return 0;
}
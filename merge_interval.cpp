#include <iostream>
using namespace std;
 
 
 
int** findCommon(int **arr1,int **arr2,int n1, int n2, int &ret_size){
    int **arr3 = new int* [n1*n2];
    for(int i=0;i<n1*n2;i++){
        arr3[i] = new int[2];
    }
    
    int index=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i][0] <= arr2[j][0] && arr1[i][1] >= arr2[j][0] && arr1[i][1] <= arr2[j][1]){                
                arr3[index][0]=arr2[j][0];
                arr3[index][1]=arr1[i][1];                
                index++;
                break;
            }
            else if(arr1[i][0] >= arr2[j][0] && arr1[i][1] <= arr2[j][1]){                
                arr3[index][0]=arr1[i][0];
                arr3[index][1]=arr1[i][1];        
                index++;
                break;
                
            }
            else if(arr1[i][0] >= arr2[j][0] && arr1[i][0] <= arr2[j][1] && arr1[i][1] >= arr2[j][1]){                
                arr3[index][0]=arr1[i][0];
                arr3[index][1]=arr2[j][1];                
                index++;
                break;
            }
            else if(arr1[i][0] <= arr2[j][0] && arr1[i][1] >= arr2[j][1]){                
                arr3[index][0]=arr2[j][0];
                arr3[index][1]=arr2[j][1];                
                index++;
                break;
            }
            else{
                continue;
            }            
            
        }
        
    }
    ret_size=index;
    return arr3;
}
 

 void deleteMemory(int** arr1,int** arr2,int** arr3,int n1,int n2 ){

     for(int i=0;i<n1*n2;i++){
        delete [] arr3[i];
    }
    delete [] arr3;
    for(int i=0;i<n1;i++){
        delete [] arr1[i];
    }
    delete [] arr1;
    for(int i=0;i<n2;i++){
        delete [] arr2[i];
    }
    delete [] arr2;
 }
 
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int **arr1 = new int*[n1];
    int **arr2 = new int*[n2];
    for(int i=0;i<n1;i++){
        arr1[i] = new int[2];
    }
    for(int i=0;i<n2;i++){
        arr2[i] = new int[2];
    }
    
    for(int i=0;i<n1;i++){                        
        cin>>arr1[i][0];
        cin>>arr1[i][1];        
    }
    for(int i=0;i<n2;i++){                        
        cin>>arr2[i][0];
        cin>>arr2[i][1];        
    }
    int size;
    int**arr3 = findCommon(arr1 , arr2,n1,n2,size);
    for(int i=0;i<size;i++){
        cout<<arr3[i][0]<<" "<<arr3[i][1]<<endl;
    }

    deleteMemory(arr1,arr2,arr3,n1,n2);
    return 0;
}
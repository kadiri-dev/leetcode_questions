#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkUniq(vector<int> first,vector <vector<int>> second){
    if(count(second.begin(),second.end(),first)){
        return true;
    }
    return false;
}

vector<vector<int>> findTriplets(vector<int> arr,vector<vector<int>>& finArr){
    vector <int> outArr;    
    int len=arr.size();
    for(int i=0;i<len-2;i++){
        int target = -arr[i];
        int j=i+1;
        int k=len-1;
        while(j != k){
            if(arr[j]+arr[k]<target){
                j++;
            }
            else if(arr[j]+arr[k]>target){
                k--;
            }
            else{
                outArr.clear();
                outArr.push_back(i);
                outArr.push_back(j);
                outArr.push_back(k);
                if(checkUniq(outArr,finArr))
                    finArr.push_back(outArr);

            }
        }
    return finArr;
        
    }
}


int main(){
    vector <vector<int>> vec;
    vector<vector<int>>::iterator itr;
    vector<int> arr={-3, 0, 1, 2, -1, 1, -2};
    findTriplets(arr,vec);
    for(itr=vec.begin();itr!=vec.end();itr++){
        for(int i=0;i<(*itr).size();i++){
            cout<<*itr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
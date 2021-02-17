#include <iostream>
#include "string.h"
#include <map>
using namespace std;

/* Given a string, find the length of the longest substring in it with no more than K distinct characters.
    Input: String="araaci", K=2
    Output: 4
    Explanation: The longest substring with no more than '2' distinct characters is "araa".
*/

bool checkAndInsert(map<char,int>& myMap, char a, int K, int flag){
	if(!flag){
		cout<<"myMap.size():"<<myMap.size()<<"myMap[a]:"<<myMap[a]<<endl;
    	if(myMap.size()==K && myMap[a]==0){
    		cout<<"In interan if:"<<endl;
    		return false;
    	}
    	myMap.insert(pair<char,int>(a,++myMap[a]));
	}
	else{
		if(myMap[a]==0 || myMap[a]==1)
			myMap.erase(a);
		else
			myMap.insert(pair<char,int>(a,--myMap[a]));
			cout<<"In del:"<<a<<"myMap[a]:"<<myMap[a]<<endl;
	}
	return true;
}


int getMaxLength(string str, int K){
    int window_start=0,window_size=0,max_size=0;
    map<char,int> myMap;
    while(window_start + window_size <= str.size()){
        bool inserted = checkAndInsert(myMap,str[window_start+ window_size],K,0);
    	cout << "inserted:"<<inserted<<endl;
        if(inserted){
            window_size++;
        }
        else{
        	checkAndInsert(myMap,str[window_start],K,1);
            window_size--;
            window_start++;
            cout << "in else:"<<window_size<<endl;
        }
        if(max_size < window_size){
        	cout<<"str[window_start+ window_size]:"<<window_start+ window_size<<"window_size:"<<window_size<<endl;
            max_size = window_size;
        } 
    }
    return max_size;
}

int main(){
    string str;
    int K;
    cout <<"Enter the String"<<endl;
    cin >> str;
    cout<<"Enter K"<<endl;
    cin>>K;
    cout<<getMaxLength(str,K)<<endl;
    return 0;
}


#include <iostream>
#include <string>
#include <map>
using namespace std;


void findUniq(string &s){
	map<char,int> myMap;
	for(int i=0;i<s.size();i++){
		if(myMap[s[i]]){
			myMap[s[i]]+=1;
			s[i]='#';
		}
		else{
			myMap[s[i]]+=1;
		}
	}
	char first;
	bool found=false;
	for(int i=0;i<s.size();i++){
		if(!found && myMap[s[i]]==1){
			first=s[i];
			found=true;
		}
		if(myMap[s[i]]==1){
			s[i]=first;
		}
		
	}
	
}
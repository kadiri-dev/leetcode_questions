#include <iostream>
#include <string>
using namespace std;

int findBalance(string s){
	int openCounter=0,closeCounter=0;
    for(int i=0;i<s.size();i++){
    	if(s[i] == ')'){
    		closeCounter++;
    	}
    }
    
    for(int i=0;i<s.size();i++){
    	if(openCounter==closeCounter){
    			return i;
    	}
    	if(s[i]=='('){
    		openCounter++;			
    	}
    	else{
    		closeCounter--;
    	}
    }
    return -1;

}


int main(){
    string s("(((((((()())");
    cout<<findBalance(s)<<endl;
    return 0;
}

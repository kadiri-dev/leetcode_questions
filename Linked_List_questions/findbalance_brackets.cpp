#include <iostream>
#include <string>
using namespace std;

int findBalance(string s){

    for(int i=0;i<s.size();i++){
        int lcount=0,rcount=0;
        for(int j=0;j<=i;j++){
            if(s[j]=='('){
                lcount++;
            }
        }
        for(int k=i;k<s.size();k++){
            if(s[k]==')'){
                rcount++;
            }
        }
        if(lcount==rcount){
            return i;
        }
    }
    return -1;

}


int main(){
    string s("(())");
    cout<<findBalance(s)<<endl;
    return 0;
}

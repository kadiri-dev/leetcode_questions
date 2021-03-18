#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i=0;
        int it=0;
        bool first=true;
        while(it!=gas.size()){
            int val=0;                
            while(first || it != i ){                
                first=false;
                val+=gas[i]-cost[i];                
                cout<<"In neg it: "<<it<<"i: "<<i<<"val: "<<val<<endl;
                i++;
                if(i==gas.size())i=0;
                if(val<0){                                          
                    break;
                }      
            
            }
            if(val>=0 && it==i){
                return it;
            }
            it++;            
            i=it;            
            first=true;
        }
    return -1;

    }
};
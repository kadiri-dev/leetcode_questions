#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(vector<int> gas, vector<int> cost){
    int diff=0;
    int totalDiff=0;
    int index=0;
    for(int i=0;i<gas.size();i++){
        diff+=gas[i]-cost[i];
        totalDiff+=gas[i]-cost[i];
        if(diff<0){
            index=i+1;
            diff=0;
        }

    }
    return totalDiff<0?-1:index;
}
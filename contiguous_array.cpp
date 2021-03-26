#include <iostream>
#include <map>
#include <vector>
using namespace std;


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum=0;
        int maxCount=0;
        map<int,int> myMap;
        myMap.insert(pair<int,int>(0,0));        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
            sum+=nums[i];
            if(myMap.find(sum) == myMap.end()){                
                myMap.insert(pair<int,int>(sum,i+1));
            }
            else{                
                if(i - myMap[sum] > maxCount){
                    maxCount=i - myMap[sum];
                }
            }            
        }
        
        return maxCount>0?maxCount+1:0;
    }
};

int main(){
    Solution* sol = new Solution();
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(0);
    cout<<sol->findMaxLength(vec)<<endl;
    return 0;
}
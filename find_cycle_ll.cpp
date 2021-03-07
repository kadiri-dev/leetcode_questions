#include <iostream>
#include <map>
using namespace std;


 struct ListNode {
    int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };




class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int>  addresses;
        ListNode* ptr=head;        
        while(ptr != nullptr){
            if(addresses.find(ptr) == addresses.end()){
                addresses.insert(std::pair<ListNode*,int>(ptr,1));                
                ptr=ptr->next;                
            }
            else{
                return true;
            }
        }
        return false;
    }
};


int main(){
    Solution* sol = new Solution();
    ListNode* head;
    sol->hasCycle(head);
    return 0;
}
#include <iostream>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curPointer = head;
        ListNode* prevVal=nullptr;
        while(curPointer != nullptr){            
            ListNode* tmp= curPointer->next;
            curPointer->next=prevVal;
            prevVal=curPointer;
            curPointer=tmp;            
        }
        return prevVal;
        
    }
};

int main(){
    Solution* sol = new Solution();
    ListNode* ll1 = new ListNode(2);    
    ListNode* ll2 = new ListNode(4);    
    ListNode* ll3 = new ListNode(6);    
    ListNode* ll4 = new ListNode(8);    
    ListNode* ll5 = new ListNode(10);    
    ll1->next = ll2;
    ll2->next = ll3;
    ll3->next = ll4;
    ll4->next = ll5;    
    ListNode* list = sol->reverseList(ll1);
    while(list!=nullptr){
        cout<<list->val;
        list=list->next;
    }
    return 0;
}
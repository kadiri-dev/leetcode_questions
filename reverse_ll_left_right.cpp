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
    ListNode* reverseBetween(ListNode* head, int left, int right) {                
        ListNode* leftPtr=head;
        ListNode* rightPtr=head;
        ListNode* leftEnd=head;        
        for(int i=1;i<left;i++){                    
            leftEnd=leftPtr;
            leftPtr=leftPtr->next;            
        }          
        for(int i=left;i<right;i++){            
            rightPtr=rightPtr->next;
        }
        
        ListNode* curPtr=leftPtr;
        ListNode* prevPtr=rightPtr->next;        
        int count=left;        
        ListNode* store;
        while(count <= right && curPtr!=nullptr){            
            store=curPtr->next;            
            curPtr->next=prevPtr;                       
            prevPtr=curPtr;            
            curPtr=store;            
            count++;
        }        
        leftEnd->next=prevPtr;    
        return head;
    }
};
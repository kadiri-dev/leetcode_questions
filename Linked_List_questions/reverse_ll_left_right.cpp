#include <iostream>
#include "LinkedList.h"
using namespace std; 

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
        for(int i=1;i<right;i++){            
            rightPtr=rightPtr->next;
        }
        
        ListNode* curPtr=leftPtr;
        ListNode* prevPtr=rightPtr->next;        
        cout<<"leftEnd:"<<leftEnd->val<<endl;
        int count=left;        
        ListNode* store;
        while(count <= right && curPtr!=nullptr){            
            store=curPtr->next;            
            curPtr->next=prevPtr;                       
            prevPtr=curPtr;            
            curPtr=store;            
            count++;
        }        
        cout<<"PrevPtr: "<<prevPtr->val<<endl;
        leftEnd->next=prevPtr;    
        return head;
    }
};

int main(){
    int arr[6] = {1,2,3,4,5,6};
    Solution* sol = new Solution();
    convertFromArraytoLinkedList* con = new convertFromArraytoLinkedList();
    ListNode* l1 = con->convert(arr,6);
    ListNode * out = sol->reverseBetween(l1,2,4);
    ListNode* ptr=out;
    while(ptr != nullptr){
        ListNode* tmp=ptr;
        ptr=ptr->next;
        free(tmp);
    }

    return 0;
}
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
    ListNode* l1 = new ListNode(1);
    ListNode* l2 = new ListNode(2);
    ListNode* l3 = new ListNode(3);
    ListNode* l4 = new ListNode(4);
    ListNode* l5 = new ListNode(5);
    ListNode* l6 = new ListNode(6);
    l1->next=l2;
    l2->next=l3;
    l2->next=l3;
    l3->next=l4;
    l4->next=l5;
    l5->next=l6;
    Solution* sol = new Solution();
    ListNode * out = sol->reverseBetween(l1,2,4);
    ListNode* ptr=out;
    while(ptr != nullptr){
        ListNode* tmp=ptr;
        ptr=ptr->next;
        free(tmp);
    }

    return 0;
}
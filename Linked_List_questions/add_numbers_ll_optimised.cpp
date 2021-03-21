#include <iostream>
#include "LinkedList.h"
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum=0;
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        ListNode* ptr3=l1;
        ListNode* endPtr;
        ListNode* finPtr;
        bool join=false;
        while(ptr1!=nullptr || ptr2!=nullptr){
            int val1=ptr1==nullptr?0:ptr1->val;
            int val2=ptr2==nullptr?0:ptr2->val;
            int sum=carry+val1+val2;               
            if(sum>=10){
                ptr3->val=sum-10;
                carry=1;
            }
            else{
                ptr3->val=sum;
                carry=0;
            }
            finPtr=ptr3;
            if(ptr3->next==nullptr){                
                endPtr=ptr3;
                ptr3=l2;
                join=true;
            }
            else{
                ptr3=ptr3->next;
            }
            ptr1=(ptr1==nullptr?ptr1:ptr1->next);
            ptr2=(ptr2==nullptr?ptr2:ptr2->next);
        }
        
        if(join){
            endPtr->next=l2;
        }
        if(carry){
         ptr3->val=1;
         ptr3->next=nullptr;
        }
        else{
            finPtr->next=nullptr;
        }
        return l1;
    }
};
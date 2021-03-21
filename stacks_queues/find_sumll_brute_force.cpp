#include "LinkedList.h"
#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1=0,num2=0;
        int count=0;
        ListNode* initL1=l1;
        ListNode* initL2=l2;
        
        if(l1->next==nullptr){
            num1=l1->val;
        }
        else{
            while(l1 != nullptr){
                num1+=(l1->val)*pow(10,count);                
                l1=l1->next;
                count++;
            }
        }
        count=0;
        if(l2->next==nullptr){
            num2=l2->val;
        }
        else{
            while(l2 != nullptr){
                num2+=(l2->val)*pow(10,count);                
                l2=l2->next;
                count++;
            }
        }
        
        int sum=num1+num2;        
        ListNode* prev;
        ListNode* cur=initL1;        
        while(sum){
            cur->val=sum%10;
            prev=cur;            
            if(cur->next == nullptr){
                prev->next=initL2;
                cur=initL2;
            }
            else
                cur=cur->next;            
            sum=sum/10;
        }
        prev->next=nullptr;
        return initL1;
    }
};
#include <iostream>
#include "LinkedList.h"
using namespace std;
 
 
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
    int array[6] = {2,4,6,8,10};
    convertFromArraytoLinkedList* arr = new convertFromArraytoLinkedList();
    ListNode* head = arr->convert(array,6);
    ListNode* list = sol->reverseList(head);
    while(list!=nullptr){
        cout<<list->val;
        list=list->next;
    }
    return 0;
}
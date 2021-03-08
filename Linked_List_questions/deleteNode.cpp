#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {        
        ListNode* curPtr=node;
        ListNode* prevPtr;
        while(curPtr->next != nullptr){
            curPtr->val=curPtr->next->val;
            prevPtr=curPtr;
            curPtr=curPtr->next;
        }
        prevPtr->next=nullptr;
    }
};

int main(){
    int arr[4]={4,5,1,9};
    convertFromArraytoLinkedList* LL_array = new convertFromArraytoLinkedList();
    ListNode* head = LL_array->convert(arr,4);    
    ListNode* node = head->next;
    Solution* sol = new Solution();
    sol->deleteNode(node);
    node=head;
    while(node != nullptr){
        cout<<node->val<<endl;
        node=node->next;
    }
}
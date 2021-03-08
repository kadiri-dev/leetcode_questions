#include "LinkedList.h"
#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curPtr=head;
        int len=0;
        while(curPtr!=nullptr){
            curPtr=curPtr->next;
            len++;
        }      
        curPtr=head;
        int count=1;
        ListNode* ptr1=nullptr;
        ListNode* ptr2=nullptr;
        while(curPtr != nullptr){
            if(count==k){
                ptr1=curPtr;
            }
            if(count==len-k+1){
                ptr2=curPtr;
            }
            if(ptr1!=nullptr && ptr2!=nullptr)break;
            curPtr=curPtr->next;
            count++;
        }
        count=ptr1->val;
        ptr1->val=ptr2->val;
        ptr2->val=count;
        return head;
    }
};

int main(){
    int arr[5] = {1,2,3,4,5};
    int k=2;
    convertFromArraytoLinkedList* arr_LL = new convertFromArraytoLinkedList();
    ListNode* head = arr_LL->convert(arr,5);    
    Solution* sol = new Solution();
    sol->swapNodes(head,2);
    ListNode* ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->val<<endl;
        ptr=ptr->next;
    }
}
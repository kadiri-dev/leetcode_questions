#include "LinkedList.h"
#include <iostream>
using namespace std;


ListNode* rotateLL(ListNode* head,int k){
    ListNode* lastPtr=head;
    ListNode* firstPtr=head;
    while(lastPtr->next != nullptr ){
        k--;        
        lastPtr=lastPtr->next;
        if(k==0){
            firstPtr=lastPtr;
        }
    }
    lastPtr->next=head;
    head=firstPtr;
    return head;
}

int main(){
    convertFromArraytoLinkedList* con = new convertFromArraytoLinkedList();
    int arr[5]={1,2,3,4,5};
    ListNode* head = con->convert(arr,5);
    ListNode* ptr = rotateLL(head,4);
    while(ptr!=nullptr){
        cout<<ptr->val;
        ptr=ptr->next;
    }
    return 0;
}
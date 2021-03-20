#include "LinkedList.h"
#include <iostream>
using namespace std;


ListNode* findMiddle(ListNode* head){
    ListNode* fptr=head;
    ListNode* sptr=head;
    while( fptr != nullptr && fptr->next != nullptr){
        fptr = fptr->next->next;
        sptr=sptr->next;
    }
    return sptr;
}

int main(){
    convertFromArraytoLinkedList* con = new convertFromArraytoLinkedList();
    int arr[5]={1,2,3,4,5};
    ListNode* head = con->convert(arr,5);
    ListNode* ptr = findMiddle(head);
    cout<<ptr->val<<endl;
    return 0;
}
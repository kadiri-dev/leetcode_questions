
#include "LinkedList.h"

ListNode::ListNode() : val(0), next(nullptr) {}
ListNode::ListNode(int x) : val(x), next(nullptr) {}
ListNode::ListNode(int x, ListNode *next) : val(x), next(next) {}

ListNode * convertFromArraytoLinkedList::createNode(int val)
{
    ListNode *l1 = new ListNode(val);
    l1->next = nullptr;
    return l1;
}

ListNode * convertFromArraytoLinkedList::convert(int *arr, int n)
{
    ListNode *prevNode;
    ListNode *head;
    for (int i = 0; i < n; i++)
    {
        ListNode *l1 = createNode(arr[i]);
        if (i != 0)
        {
            prevNode->next = l1;
        }
        else
        {
            head = l1;
        }
        prevNode = l1;
    }
    return head;
}

#include <iostream>
#include <map>
#include "LinkedList.h"
#include <algorithm>
using namespace std;

ListNode *find0sum(ListNode *head)
{
    map<int, ListNode *> myMap;
    ListNode *ptr = head;
    int sum = 0;
    myMap[0] = nullptr;
    while (ptr != nullptr)
    {
        ptr = head;
        while (ptr != nullptr)
        {
            sum += ptr->val;
            if (myMap.find(sum) != myMap.end())
            {
                if (myMap[sum] != nullptr)
                {
                    myMap[sum]->next = ptr->next;
                    ptr = ptr->next;
                }
                else
                {
                    head = ptr->next;
                    ptr = head;
                }
                break;
            }
            myMap[sum] = ptr;
            ptr = ptr->next;
        }
        sum = 0;
        myMap.clear();
        myMap[0] = nullptr;
    }
    return head;
}

int main()
{
    int arr[5] = {1, 2, -3, 3, 1};
    convertFromArraytoLinkedList *array = new convertFromArraytoLinkedList();
    ListNode *head = array->convert(arr, 5);
    ListNode *node = find0sum(head);

    while (node != nullptr)
    {
        cout << node->val << endl;
        node = node->next;
    }
    return 0;
}
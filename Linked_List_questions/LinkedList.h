class ListNode{
    public:
        int val;
        ListNode *next;
        ListNode();
        ListNode(int x);
        ListNode(int x, ListNode* l);
};

class convertFromArraytoLinkedList{
    public:
      ListNode* createNode(int val);
      ListNode* convert(int* arr,int n);
};
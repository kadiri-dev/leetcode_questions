

class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};

class Solution {
public:
    Node* flatten(Node* head) {
        Node* ptr=head;
        while(ptr != nullptr){
            if(ptr->child != nullptr){
                Node* dummy = ptr->child;
                while(dummy->next != nullptr){
                    dummy=dummy->next;
                }
                dummy->next=ptr->next; 
                if(ptr->next!=nullptr){
                    ptr->next->prev=dummy;
                }
                    ptr->next=ptr->child;
                    ptr->child->prev=ptr;
                    ptr->child=nullptr;                
            }
            ptr=ptr->next;            
        }
        return head;
    }
};
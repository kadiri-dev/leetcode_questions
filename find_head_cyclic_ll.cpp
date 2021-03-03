#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int val;
    struct node* next;
};

struct node* findHead(struct node* head){
    vector<struct node*> addresses;
    struct node *node1=head;
    while(find(addresses.begin(),addresses.end(),node1) == addresses.end()){
        addresses.push_back(node1);
        node1 = node1->next;
    }
    return node1;
}

int main(){
    struct node* head = NULL;
    struct node* first = NULL;
    struct node* second = NULL;
    struct node* third = NULL;
    struct node* fourth = NULL;
    struct node* fifth = NULL;
    head = new node();
    first = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();
    
    head->val=1;
    head->next=first;
    first->val=2;
    first->next=second;
    second->val=3;
    second->next=third;
    third->val=4;
    third->next=fourth;
    fourth->val=5;
    fourth->next=fifth;
    fifth->val=6;
    fifth->next=second;
    struct node* node1 = findHead(head);
    cout<<node1->val<<endl;
    
    return 0;
}
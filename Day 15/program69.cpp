//Reverse Linked List - leetcode problem 206
#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = NULL;

        while(current != NULL){
            next = current -> next; // store the next node
            current -> next = prev; // reverse the current node's pointer
            prev = current; // move prev to the current node
            current = next; // move to the next node
        }
        return prev; // at the end, prev will be the new head of the reversed list
    }
};

int main(){
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = new ListNode(4);
    head -> next -> next -> next -> next = new ListNode(5);

    Solution s;
    ListNode* reversedHead = s.reverseList(head);

    // Print the reversed linked list
    ListNode* current = reversedHead;
    while(current != NULL){
        cout << current -> val << " ";
        current = current -> next;
    }
    cout << endl;

    return 0;
}
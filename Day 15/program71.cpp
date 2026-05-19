//Linked List Cycle II
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 #include<iostream>
 using namespace std;
 

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(NULL) {}
     ListNode(int x) : val(x), next(NULL) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution{
    public:
    ListNode* detectCycle(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(slow == fast){
                ListNode* entry = head;
                while(entry != slow){
                    entry = entry -> next;
                    slow = slow -> next;
                }
                return entry;
            }
        }
        return NULL;
    }
 };

 int main(){
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = head -> next; 

    Solution solution;
    ListNode* cycleStart = solution.detectCycle(head);
    if(cycleStart != NULL){
        cout << "Cycle starts at node with value: " << cycleStart -> val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    return 0;
 }
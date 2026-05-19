//palindrome-linked-list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
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
    bool isPalindrome(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* prev = NULL;
        ListNode* current = slow;
        ListNode* next = NULL;

        while(current != NULL){
            next = current -> next;
            current -> next = prev;
            prev = current;
            current = next;
        }

        ListNode* left = head;
        ListNode* right = prev;

        while(right != NULL){
            if(left -> val != right -> val){
                return false;
            }
            left = left -> next;
            right = right -> next;
        }
        return true;
    }
 };


 int main(){
    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(1);

    Solution solution;
    bool result = solution.isPalindrome(head);
    if(result){
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }
    return 0;
 }
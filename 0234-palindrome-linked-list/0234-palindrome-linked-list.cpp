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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> myStack;
        ListNode* current = head;
        //store all values of the linked list into a stack
        while(current){
            myStack.push(current->val);
            current = current->next;
        }
        current = head;
        //loop breaks either at the end of the list or if a value invlidates the list as a palindrome
        while(current && current->val == myStack.top()){
            myStack.pop();
            current = current->next;
        }
        //if current is null, then the previous check made it all the way through the list, confirming the list is a palindrome
        return current == nullptr;
    }
};
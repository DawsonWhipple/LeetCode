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
    ListNode* reverseList(ListNode* head) {
        //store the current node, start with head of list
        ListNode* current = head;
        //store the previous node, prev will be pointing backwards through the list
        ListNode* previous = nullptr;
        
        while(current){
            //swap the current node to be pointing to the previous node
            ListNode* next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }
        return previous;
    }
};
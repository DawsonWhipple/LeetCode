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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* dummy = l3;
        
        int carry = 0;
        int val1, val2, valSum;
        //continue until there are no more digits left in either list or the carry over
        while(l1 || l2 || carry){
            //checks if either list is empty, if so sets its value to 0
            l1 ? val1 = l1->val : val1 = 0; 
            l2 ? val2 = l2->val : val2 = 0; 
            
            //calucaltes the sum and if there is a carry over digit
            int valSum = val1 + val2 + carry;
            carry = valSum / 10;
            valSum = valSum % 10;
            
            //adds the sum to the new list
            ListNode* newNode = new ListNode(valSum);
            dummy->next = newNode;
            dummy = newNode;
            //increments to the next elements in each list if there are any
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        
        return l3->next;
    }
};
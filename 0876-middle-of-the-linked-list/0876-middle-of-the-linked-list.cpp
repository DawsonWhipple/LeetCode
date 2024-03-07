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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* list = head;
        //finds the total length of the list
        while(list->next){
            list = list->next;
            count++;
        }
        //calculates the middle point given the length of the list
        (count % 2) ? (count = count/2 + 1) : (count = count/2);
        //finds the middle point of the list
        for(int i = 0; i < count; i++){
            head = head->next;
        }
        return head;
    }
};
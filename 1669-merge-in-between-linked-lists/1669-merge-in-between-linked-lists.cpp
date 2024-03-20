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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* mergedList = list1;
        //find the difference between start and end nodes
        b -= a;
        //iterate through list1 until starting position is found
        while(a > 1){
            list1 = list1->next;
            a--;
        }
        //save the starting position of list1
        ListNode* temp = list1->next;
        //assign list1 to be list2, effectively removing the remainder of list1 from the list;
        list1->next = list2;
        //find the end of the remove section in the original list1
        while(b){
            temp = temp->next;
            b--;
        }
        //find the end of list2
        while(list2->next){
            list2 = list2->next;
        }
        //append the rest of list1 after the removed section to the end of list2
        list2->next = temp->next;
        //return the original head from list1
        return mergedList;
    }
};
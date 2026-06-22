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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int s = 0;
        while(temp != nullptr){
            s++;
            temp = temp->next;
        }
        
        if(n == s){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        s = s-n-1;
        temp = head;
        while(s-- && temp != nullptr){
            temp = temp->next;
        }
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};

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
    ListNode* removeElements(ListNode* head, int val) {

        // Remove matching nodes from the beginning
        while(head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Remove matching nodes after head
        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL) {

            if(temp->next->val == val) {

                ListNode* toDelete = temp->next;

                temp->next = toDelete->next;

                delete toDelete;

            } else {
                temp = temp->next;
            }
        }

        return head;
    }
};
/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param node: a list node in the list
     * @param x: An integer
     * @return: the inserted new list node
     */
    ListNode * insert(ListNode * node, int x) {
        // write your code here

        if (!node) {
            ListNode* head = new ListNode(x);
            head->next = head;
            return head;
        }
        ListNode* pre = node;
        ListNode* tempHead = node;
        ListNode* cur = node->next;

        while(cur!=tempHead){

            if(pre->val <= x && cur->val >=x){
                    break;
            }
            if (pre->val > cur->val && (pre->val <= x || cur->val >= x))
                break;

            pre =cur;
            cur = cur->next;
        }
        pre->next = new ListNode(x, cur);
        return tempHead;
    }
};

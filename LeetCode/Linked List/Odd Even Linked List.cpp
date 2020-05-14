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
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL)
            return head;


        ListNode* temp = head; //for odd numbersd
        ListNode* temp1 = head->next; // for even numbers
        ListNode* secondHead = temp1;

        while(temp1!=NULL && temp1->next!=NULL){
            cout<<temp->val<<" "<<temp1->val<<"\n";
            temp->next = temp->next->next;
            temp1->next = temp1->next->next;
            // if(temp->next==NULL||temp1->next==NULL)
            //     break;
            temp = temp->next;
            temp1 = temp1->next;
        }
        temp->next = secondHead;
        return head;
    }
};

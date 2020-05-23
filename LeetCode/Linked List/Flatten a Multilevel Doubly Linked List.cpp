/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {

//         Node* tempHead = head;
//         Node* temp = head;

//         while(temp->next!=NULL){


//         if(temp->child!=NULL){

//             Node* temp1 = temp->next;
//             temp->next = temp->child;
//             temp->child = NULL;
//             Node* temp2 = temp->next;
//             temp2->prev = temp;
//             Node* res = flatten(temp2);
//             res -> next = temp1;
//             temp1 -> prev = res;
//             temp = temp1;

//          }
//         else
//         {
//             temp = temp->next;
//         }


//         }

//         return temp;
//     }
// };

        Node *p = head, *nxt;

        while(p){
            if(p->child){
                nxt = p -> next;
                p->next = flatten(p->child);
                p->child = NULL;
                p->next->prev = p;
                while(p->next){
                    p = p->next;
                }
                p->next = nxt;
                if(nxt) nxt->prev = p;

            } else{
                p = p->next;
            }
        }

        return head;
    }
};

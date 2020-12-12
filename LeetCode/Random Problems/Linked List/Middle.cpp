
#include <iostream>
using namespace std;

/* Link list node */
struct Node
{
    int data;
    struct Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    /* Function to print linked list */
    Node* middle(Node *head)
    {
        if(head==nullptr ||head->next==nullptr){
            return head;
        }
        Node* slow = head;
        Node* fast = head;
        while(fast!=nullptr||fast->next!=nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast!=nullptr){
            slow = slow->next;
        }
        return slow;

    }

    void print()
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

/* Driver program to test above function*/
int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);
    ll.push(5);
    LinkedList res;
    cout << "Given linked list\n";
    ll.print();
    cout << "\n";
    cout<<ll.middle(ll.head);
    // res.print();
    return 0;
}
// Recursive C++ program to reverse 
// a linked list 
#include <iostream> 
using namespace std; 
  
/* Link list node */
struct Node { 
    int data; 
    struct Node* next; 
    Node(int data) 
    { 
        this->data = data; 
        next = NULL; 
    } 
}; 
  
struct LinkedList { 
    Node* head; 
    LinkedList() 
    { 
        head = NULL; 
    }

    /* Function to print linked list */
    Node* reverse(Node* head) 
    { 
        if (head == NULL || head->next == NULL) 
        {
            cout<<"Print"<<head->data<<"\n";
            return head;
        }
            
  
        /* reverse the rest list and put  
          the first element at the end */
        Node* rest = reverse(head->next);
        struct Node *temp = head;
        cout << "\n";
      

        head->next->next = head; 

        /* tricky step -- see the diagram */
        head->next = NULL;
        cout << "Printing the head value ";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        /* fix the head pointer */
        cout<<"\n";
        cout<<"Printing ";
        struct Node *temp1 = rest;
        while (temp1 != NULL)
        {
            cout << temp1->data << " ";
            temp1 = temp1->next;
        }
        cout<<"\n";
        return rest; 
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
        Node* temp = new Node(data); 
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

    cout << "Given linked list\n"; 
    ll.print(); 
    cout<<"\n";
    ll.head = ll.reverse(ll.head); 
  
    cout << "\nReversed Linked list \n"; 
    ll.print(); 
    return 0; 
} 
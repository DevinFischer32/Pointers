#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        /*
            Pointer gets set equal to NULL; This allows for the pointer to
            not be randomly assigned to another memory location or overrride a memory location
        */
        next = NULL;
    }
};

int main()
{
    // Single Linked List can only be accessed going forward so it important to know where the front(head of the train) is
    node *head = new node(20);
    node *node2 = new node(30);
    node *node3 = new node(40);

    head->next = node2;
    node2->next = node3;
    // Copy the head of the train and use it to move down the train
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}

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
    node *head = new node(20);

    return 0;
}

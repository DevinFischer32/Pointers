#pragma once
#include <iostream>

class StackLinkedList
{

private:
    struct node
    {
        int data;
        node *next;
        node(int x)
        {
            data = x;
            next = NULL;
        }
    };
    node *head;
    int count;

public:
    StackLinkedList()
    {
        head = NULL;
    }
    StackLinkedList(int data)
    {
        head = new node(data);
        count = 1;
    }
    ~StackLinkedList() {}

    void push(int data)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
        count++;
    }

    int pop()
    {
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            // create a temp pointer to the head
            node *temp = head;
            // move the head to the next node
            head = head->next;
            // get the data from the temp node
            int data = temp->data;
            // delete the temp node
            delete temp;
            // decrement the count
            count--;
            // return the data
            return data;
        }
    }
    int getCount()
    {
        return count;
    }
};

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class delMiddleNode
{
private:
    struct Node
    {
        int data;
        Node *next;
    };

    int length;

    Node *head;

public:
    delMiddleNode(int num);

    void displayList();

    void putData(int num);

    void delNode();
};

delMiddleNode::delMiddleNode(int num)
{
    head = new Node;

    head->data = num;
    head->next = NULL;

    length = 1;
}

void delMiddleNode ::displayList()
{
    Node *temp = head;

    cout << "Linked list: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void delMiddleNode ::putData(int num)
{
    Node *tempIns = new Node;

    tempIns->data = num;
    tempIns->next = NULL;

    Node *itr = head;

    while (itr->next)
    {
        itr = itr->next;
    }

    itr->next = tempIns;
}

void delMiddleNode ::delNode()
{
    Node *tortoise = head;
    Node *hare = head->next;

    while (hare->next->next)
    {
        tortoise = tortoise->next;
        hare = hare->next;
        if (hare->next == NULL)
            break;
        hare = hare->next;
        if (hare->next == NULL)
            break;
    }

    Node *temp = tortoise->next;

    tortoise->next = temp->next;

    temp->next = NULL;

    displayList();
}

int CtoI(char *c)
{
    return int(*c) - 48;
}

int main(int argc, char **argv)
{
    delMiddleNode d1(CtoI(argv[1]));

    for (int i = 2; i < argc; i++)
        d1.putData(CtoI(argv[i]));

    d1.displayList();

    d1.delNode();
}
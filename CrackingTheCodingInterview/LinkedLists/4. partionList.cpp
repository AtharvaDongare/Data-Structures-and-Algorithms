#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class partition
{
public:
    struct Node
    {
        int data;
        Node *next;
    };

    int parter;
    int length;
    Node *head;

    partition(int num);

    void displayList(Node *head);

    void putData(int num);

    void partAway(int x);
    // Solution 1 : Using two seperate linked lists to store the numbers which are higher than the given and lower than the given. And then appending the whole thing
    // complexity: time o(n) and space o(n)
    void addElem(Node *base, Node *elem);

    void partAway2(int x);
    // Solution 2: Append at the head and tail of a list instead of maintaining 2 lists:
    // If a value is bigger than 'x' then append it to the end of the list and if it is smaller then append it to the head of the list.
};

partition ::partition(int num)
{
    head = new Node;

    head->data = num;
    head->next = NULL;

    length = 1;
}

void partition ::displayList(Node *head)
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

void partition ::putData(int num)
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

void partition ::partAway(int x)
{
    Node *newList = new Node, *newList2 = new Node, *itr = head;

    newList->data = -1;
    newList->next = NULL;

    newList2->data = -1;
    newList2->next = NULL;

    while (itr)
    {
        Node *tempVar = new Node;
        if (itr->data >= x)
        {
            tempVar->data = itr->data;
            tempVar->next = NULL;
            addElem(newList, tempVar);
            itr = itr->next;
        }

        else
        {
            tempVar->data = itr->data;
            tempVar->next = NULL;
            addElem(newList2, tempVar);
            itr = itr->next;
        }
    }

    addElem(newList2, newList->next);

    head = newList2->next;

    displayList(head);
}

void partition ::addElem(Node *l1, Node *l2)
{
    Node *temp = l1;

    while (temp->next)
    {
        temp = temp->next;
    }

    temp->next = l2;
}

void partition ::partAway2(int x)
{
    Node *headNew = NULL, *tailNew = headNew, *itr = head;
    cout << "Iam in ! " << endl;
    while (itr)
    {
        if (itr->data >= x)
        {
            // append it to the tail of the element
            // make sure the tial of the list updated to the new appended node
            if (!headNew)
            {
                headNew = new Node;

                headNew->data = itr->data;
                headNew->next = NULL;
                tailNew = headNew;

                continue;
            }

            Node *temp = new Node;

            temp->data = itr->data;
            temp->next = headNew;

            headNew = temp;
        }
        else
        {
            // append it to the head of the element, how ?
            // create a new node then point it to the current head of hte list
            // make sure the currrent head of the node is updated to hold the value of this new node

            if (!headNew)
            {
                headNew = new Node;
                headNew->data = itr->data;
                headNew->next = NULL;
                tailNew = headNew;

                continue;
            }

            Node *temp = new Node;

            temp->data = itr->data;
            temp->next = NULL;

            tailNew->next = temp;
            tailNew = tailNew->next;
        }

        itr = itr->next;
    }

    displayList(headNew);
}

int CtoI(char *c)
{
    return int(*c) - 48;
}

int main(int argc, char *argv[])
{
    int x;

    class partition p1(CtoI(argv[1]));

    for (int i = 2; i < argc; i++)
        p1.putData(CtoI(argv[i]));

    cin >> x;

    p1.displayList(p1.head);

    p1.partAway2(x);
    // p1.partAway(x);

    // cout << "Displaying final list : " << endl;
    // p1.displayList(p1.head);
}
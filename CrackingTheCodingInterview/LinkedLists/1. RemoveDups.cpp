#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class RemoveDup
{
    struct Node
    {
        int data;
        Node *next;
    };

    Node *head;

    int len;

public:
    RemoveDup(int data);

    void putData(int data);

    void displayList();

    void bruteForce();
};

RemoveDup ::RemoveDup(int data)
{
    Node *firstNode = new Node;

    firstNode->data = data;
    firstNode->next = NULL;

    len = 1;
    head = firstNode;
}

void RemoveDup ::putData(int data)
{
    Node *temp = head;

    while (temp->next)
    {
        temp = temp->next;
    }

    Node *newNode = new Node;

    newNode->data = data;
    newNode->next = NULL;

    temp->next = newNode;
    len++;
}

void RemoveDup ::displayList()
{
    Node *temp = head;
    cout << "The length of the list is : " << len << endl;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void RemoveDup ::bruteForce()
{
    Node *first = head, *second = first->next;

    while (first->next && first)
    {
        second = first->next;
        while (second->next && second)
        {
            if (first->data == second->data)
            {

                

                len--;
                cout << "After Elemination " << endl;

                displayList();
            }

            second = second->next;
        }

        first = first->next;
    }

    displayList();
}

int convertCtoI(char input)
{
    return int(input) - 48;
}

int main(int argc, char *argv[])
{
    cout << convertCtoI(*argv[1]) << endl;

    RemoveDup r1(convertCtoI(*argv[1]));

    for (int i = 2; i < argc; i++)
        r1.putData(convertCtoI(*argv[i]));

    r1.displayList();

    r1.bruteForce();

    r1.displayList();
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class palindrome
{
private:
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
    };

    int length;
    Node *head;

public:
    palindrome(int elem);

    void displayList();

    void putData(int num);

    bool paliDLL();

    bool paliStack();
};

palindrome ::palindrome(int elem)
{
    Node *temp = new Node;

    temp->data = elem;
    temp->next = NULL;
    temp->prev = NULL;

    head = temp;

    length = 1;
}

void palindrome ::displayList()
{
    Node *temp = head;

    cout << "Linked List Length : " << length << endl;
    cout << "Linked list: ";
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void palindrome ::putData(int num)
{
    Node *tempIns = new Node;

    tempIns->data = num;
    tempIns->next = NULL;

    Node *itr = head;

    while (itr->next)
    {
        itr = itr->next;
    }

    tempIns->prev = itr;
    itr->next = tempIns;

    length++;
}

bool palindrome ::paliDLL()
{
    Node *itr = head;

    while (itr->next)
    {
        itr = itr->next;
    }

    while (itr && head)
    {
        if (itr->data != head->data)
        {
            return false;
        }

        if ((head->next == NULL && itr->prev != NULL) || (head->next != NULL && itr->prev == NULL))
        {
            return false;
        }

        itr = itr->prev;
        head = head->next;
    }

    return true;
}

bool paliStack()
{
    stack<int> s1;

    while
}

int CtoI(char *c)
{
    return (int(*c) - 48);
}

int main(int argc, char *argv[])
{
    palindrome p1(CtoI(argv[1]));

    for (int i = 2; i < argc; i++)
        p1.putData(CtoI(argv[i]));

    p1.displayList();

    cout << p1.paliDLL();
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class kthElement
{

private:
    struct Node
    {
        int data;
        Node *next;
    };

    Node *head;
    int length;

public:
    kthElement(int elem);

    void addElem(int elem);

    void displayList();

    void getKthElem(int k);

    int recurrKth(Node *temp, int k);
};

kthElement ::kthElement(int elem)
{
    head = new Node;

    head->data = elem;
    head->next = NULL;

    length = 1;
}

void kthElement ::addElem(int elem)
{
    Node *newTempNode = new Node;

    newTempNode->data = elem;
    newTempNode->next = NULL;

    Node *itr = head;

    while (itr->next)
    {
        itr = itr->next;
    }

    itr->next = newTempNode;
    length++;
}

void kthElement ::displayList()
{
    Node *itr = head;

    cout << "Linked list is:";
    while (itr)
    {
        cout << itr->data << " ";
        itr = itr->next;
    }

    cout << endl;
}

void kthElement::getKthElem(int elem)
{
    int elemOfInt = length - elem;

    Node *itr = head;

    for (int i = 1; i < elemOfInt; i++)
        itr = itr->next;

    cout << "Kth element from the last : " << itr->data << endl;
}

int kthElement::recurrKth(Node *head, int kth)
{
    
    if (head == NULL)
        return NULL;
    if (kth == 0)
        return head->data;
}

int CtoI(char c)
{
    return int(c) - 48;
}

int main(int argc, char **argv)
{
    kthElement k1(CtoI(*argv[1]));

    for (int i = 2; i < argc; i++)
        k1.addElem(CtoI(*argv[i]));

    k1.displayList();

    int kth;
    cout << "Kth element : ";
    cin >> kth;

    k1.getKthElem(kth);
}
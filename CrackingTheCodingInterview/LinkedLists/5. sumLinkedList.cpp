#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int CtoI(char *c)
{
    return int(*c) - 48;
}
class sumList
{
public:
    struct Node
    {
        int data;
        Node *next;
    };

    Node *head2;
    int len;
    int carry;
    Node *head1;
    Node *sum;

    sumList();
    void addToList(char Num[], Node *list);
    void displayList(Node *l1);
    void putData(int elem, Node *list);
    void sumOfList();
};

sumList ::sumList()
{
    head1 = NULL;
    head2 = NULL;
    sum = NULL;
}

void sumList ::displayList(Node *head)
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

void sumList ::putData(int num, Node *list)
{
    // We take in the list which needs to end in the
    Node *tempIns = new Node;

    tempIns->data = num;
    tempIns->next = NULL;
    if (list)
    {
        tempIns->next = list;
        list = tempIns;
    }
    else
    {
        list = tempIns;
    }
}

void sumList ::addToList(char Num[], Node *list)
{
    // We are going to take in the number
    // We will take the first digit in the number from the LHS and then insert it in the list
    // Afterr that we keep on inserting elements from the begining, instead of appending them at the end

    while (Num)
    {
        cout << Num << endl;
        putData(CtoI(Num), list);

        Num++;
    }

    displayList(list);
}

int main(int argc, char *argv[])
{

    sumList s1;

    cout << "The first number is: " << argv[1] << endl;
    // s1.addToList(argv[1], s1.head1);

    cout << "The second number is: " << argv[2] << endl;
    // s1.addToList(argv[2], s1.head2);
}
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *forward;
    struct node *backward;
};

void displayNodesBackward(struct node *tail)
{
    while (tail)
    {
        cout << tail->data << endl;
        tail = tail->backward;
    }
}

void displayNodesForward(struct node *head)
{
    while (head)
    {
        cout << head->data << endl;
        head = head->forward;
    }
}

struct node *createNode(int newData)
{
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));

    head->forward = NULL;
    head->data = newData;
    head->backward = NULL;

    return head;
}

void appendNode(struct node **tail, int newData)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node *));

    newNode->data = newData;
    newNode->forward = NULL;
    newNode->backward = *tail;

    (*tail)->forward = newNode;
    (*tail) = (*tail)->forward;
}

int main()
{
    struct node *head = NULL;
    struct node *tail = NULL;

    head = createNode(19);
    tail = head;

    for (int i = 0; i < 9; i++)
    {
        appendNode(&tail, i);
    }

    displayNodesForward(head);
    cout << endl
         << endl;
    displayNodesBackward(tail);

    cout << endl;

    displayNodesForward(head);
}
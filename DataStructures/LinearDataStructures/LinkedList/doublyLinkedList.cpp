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

int main()
{
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->forward = NULL;
    head->backward = NULL;

    struct node *first;
    struct node *second;
    struct node *third;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->backward = NULL;

    head->forward = first;
    first->backward = head;

    first->forward = second;
    first->data = 2;
    second->backward = first;

    second->forward = third;
    second->data = 3;
    third->backward = second;

    third->forward = NULL;
    third->data = 4;

    displayNodesForward(head);
    cout << endl;
    displayNodesBackward(third);
}
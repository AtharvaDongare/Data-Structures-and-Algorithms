#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *forward;
};

void displayNodes(struct node *head)
{
    struct node *currentNode = head;

    if (head == NULL)
    {
        cout << "The linked list is empty" << endl;
        return;
    }

    do
    {
        cout << currentNode->data << endl;
        currentNode = currentNode->forward;
    } while (currentNode != head);

    return;
}

struct node *createNode(int newData)
{
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->forward = head;
    head->data = newData;

    return head;
}

struct node *appendNode(struct node *head, int newData)
{
    struct node *currentNode = head;

    struct node *newNode = createNode(newData);
    newNode->forward = head;

    while (currentNode->forward != head)
    {
        currentNode = currentNode->forward;
    }

    currentNode->forward = newNode;
    return head;
}

struct node *deleteNode(struct node *head, int dataToDelete)
{
    struct node *currentNode = head;

    if (currentNode->data == dataToDelete)
        return NULL;

    while (currentNode->forward != head)
    {
        if (currentNode->data == dataToDelete)
        {
            currentNode->forward = currentNode->forward->forward;
            return head;
        }
    }

    cout << "Data was no where to be found " << endl;
    return head;
}

int main()
{
    struct node *head, *currentNode;

    head = createNode(69);

    for (int i = 0; i < 5; i++)
    {
        head = appendNode(head, i);
    }

    displayNodes(head);

    // head = deleteNode(head, 1);

    displayNodes(head);
}
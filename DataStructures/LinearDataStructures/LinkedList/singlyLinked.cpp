#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *forward;
};

void displayAllNodes(struct node *head)
{
    cout << "Displaying all the nodes" << endl;
    while (head)
    {
        cout << head->data << endl;
        head = head->forward;
    }

    return;
}

struct node *appendNode(struct node *head, int dataNew)
{
    struct node *newNode = NULL, *temp = head;

    cout << "Created the node with the listed data" << endl;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = dataNew;
    newNode->forward = NULL;

    cout << "Iterating the list to get at the very last of the list" << endl;
    while (temp->forward)
    {
        temp = temp->forward;
    }

    temp->forward = newNode;

    displayAllNodes(head);
    return head;
}

struct node *deleteNode(struct node *head, int dataDel)
{

    struct node *temp = head, *temp1;

    while (temp)
    {
        if (temp->data == dataDel)
        {
            return temp->forward;
        }

        if (temp->forward->data == dataDel)
        {
            // temp1 = temp->forward;
            // temp->forward = temp1->forward;
            // temp1->forward = NULL;
            // break;
            temp->forward = temp->forward->forward;
            break;
        }

        temp = temp->forward;
    }

    return head;
}

struct node *createNode(int newData)
{
    struct node *head = NULL;

    head = (struct node *)malloc(sizeof(struct node *));
    head->data = newData;
    head->forward = NULL;
}
int main()
{
    struct node *head = createNode(69);

    for (int i = 0; i < 10; i++)
    {
        head = appendNode(head, i);
    }

    displayAllNodes(head);

    head = appendNode(head, 69);

    head = deleteNode(head, 3);
    cout << "Displaying after the deletion" << endl;

    displayAllNodes(head);
}
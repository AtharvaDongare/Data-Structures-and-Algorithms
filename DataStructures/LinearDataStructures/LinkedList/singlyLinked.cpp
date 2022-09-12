#include <iostream>

using namespace std;

// Creating the blue print for the nodes in the linked list
struct node
{
    struct node *forward;
    int data;
};

struct node *addNodeToList(struct node *head, int data)
{
    cout << "test 0" << endl;
    struct node *newData;
    struct node *temp = head;

    newData->data = data;
    newData->forward = NULL;
    cout << "test test test" << endl;
    while (temp->forward)
    {
        cout << "test1" << endl;
        temp = temp->forward;
    }

    temp->forward = newData;

    return head;
}

struct node *createNode(int data)
{
    struct node *head;

    head->data = data;
    head->forward = NULL;

    return head;
}

void deleteData(struct node *head, int data, int loc = -1)
{
    if (head->data == data)
    {
        *head = *(head->forward);
        return;
    }

    struct node *temp = head;

    while (temp->forward)
    {
        if (temp->data == data)
        {
            *temp = *(temp->forward);
            cout << "Deletion completed !" << endl;
        }
    }

    cout << "The data was not found in the linked list" << endl;
}

void displayAllNodes(struct node *head)
{

    cout << "Displaying all the information listed in the linked list" << endl;

    while (head->forward)
    {
        cout << head->data << endl;
        head = head->forward;
    }

    return;
}

int main()
{
    cout << "Creating the list" << endl;

    struct node *head;

    head = createNode(4);
    cout << "test" << endl;
    head = addNodeToList(head, 5);
    head = addNodeToList(head, 6);
    head = addNodeToList(head, 7);
    head = addNodeToList(head, 8);

    displayAllNodes(head);

    deleteData(head, 7);

    displayAllNodes(head);
}
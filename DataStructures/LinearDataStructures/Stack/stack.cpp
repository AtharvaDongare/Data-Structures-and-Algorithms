#include <iostream>
using namespace std;

class Stack
{
private:
    int head;
    int capacity;
    int *array;

public:
    Stack();
    void createStack(int length);
    void pushElement(int ele);
    int topElement();
    int popElement();
    bool isEmpty();
    bool isFull();
};

// Defining the default constructors
Stack::Stack()
{
    head = -1;
    capacity = 0;
    *array = NULL;
}

// Defining the declared methods

void Stack::createStack(int length)
{
    array = (int *)malloc(sizeof(int) * length);
    capacity = length - 1;
    cout << "Stack has been created !" << endl;
}

void Stack::pushElement(int element)
{
    if (head == capacity)
    {
        cout << "Stack is full " << endl;
        return;
    }
    head += 1;
    array[head] = element;
    cout << "Element has been successfully inserted !" << endl;
}

int Stack::topElement()
{
    if (head == -1)
        return SIZE_MAX + 1;

    return array[head];
}

int Stack::popElement()
{
    if (head == -1)
        return SIZE_MAX + 1;
    head--;
    return array[head + 1];
}

bool Stack::isEmpty()
{
    if (head == -1)
        return true;
    return false;
}

bool Stack::isFull()
{
    if (head == capacity)
        return true;
    return false;
}

int main()
{
    Stack s1;

    cout << SIZE_MAX << endl;

    s1.createStack(5);

    s1.pushElement(1);
    s1.pushElement(2);
    s1.pushElement(3);
    s1.pushElement(4);
    s1.pushElement(5);

    cout << s1.isFull() << endl;
    cout << s1.topElement() << endl;

    cout << s1.popElement() << endl;
    cout << s1.popElement() << endl;
    cout << s1.popElement() << endl;
    cout << s1.popElement() << endl;
    cout << s1.popElement() << endl;
    cout << s1.popElement() << endl;

    cout << s1.isEmpty() << endl;
}
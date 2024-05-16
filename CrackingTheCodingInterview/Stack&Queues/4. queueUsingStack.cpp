#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// The basic algorithm of the process is very simple
// Every time we insert an element we put it on the first stack
// Every pop we have to carry out we copy the entire first stack on to the second stack
// And pop the top element from the second stack
// Every pop operation we have to do this operation
// Will need to look at a way to optimize it for consecutive pop operations maybe using a flag variable can be a good solution

class queueUsingStack
{
private:
    stack<int> s1;
    stack<int> s2;
    bool stackPushed;

public:
    queueUsingStack();

    void putStack(int elem);

    int popQueue();
};

queueUsingStack ::queueUsingStack()
{
    stackPushed = false;
    s1.push(NULL);
    s2.push(NULL);
}

void queueUsingStack ::putStack(int elem)
{
    if (stackPushed == false)
        while (s2.top() != NULL)
        {
            s1.push(s2.top());
            s2.pop();
        }

    s1.push(elem);
    stackPushed = true;
    cout << elem << " pushed on stack" << endl;
}

int queueUsingStack ::popQueue()
{

    if (stackPushed == false)
    {
        int temp = s2.top();
        s2.pop();
        return temp;
    }

    while (s1.top() != NULL)
    {
        s2.push(s1.top());
        s1.pop();
    }

    stackPushed == false;
    int temp = s2.top();
    s2.pop();
    return temp;
}

int CtoI(char *c)
{
    return int(*c - '0');
}

int main(int argc, char *argv[])
{
    queueUsingStack q1;

    for (int i = 1; i < argc; i++)
    {
        q1.putStack(CtoI(argv[i]));
    }

    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;
    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;
    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;
    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;

    q1.putStack(5);
    q1.putStack(4);
    q1.putStack(3);

    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;
    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;
    cout << "Popping the elements in the Queue : " << q1.popQueue() << endl;
}
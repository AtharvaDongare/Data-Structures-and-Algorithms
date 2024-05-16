#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class stack_
{
private:
    int arr[5];
    int min;
    int stackSize;

public:
    stack_();

    void put(int num);

    int pop();

    int viewTop();

    int returnMin();
};

stack_ ::stack_()
{
    cout << "constructor called " << endl;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = INT_MAX;
    }

    min = INT_MAX;
    stackSize = 0;
}

void stack_ ::put(int num)
{

    if (stackSize > 5)
    {
        cout << "Stack full cannot perform put operation anymore" << endl;
        return;
    }

    cout << "Stack Size : " << stackSize << endl;
    arr[stackSize] = num;
    stackSize++;
    if (num < min)
        min = num;
}

int stack_ ::pop()
{
    if (stackSize == 0)
    {
        cout << "Cannot perform pop operation stack empty" << endl;
        return INT_MAX;
    }

    stackSize--;
    int temp = INT_MAX;

    for (int i = 0; i < stackSize; i++)
    {

        if (temp < arr[i])
            temp = arr[i];
    }

    min = temp;

    return arr[stackSize + 1];
}

int stack_ ::viewTop()
{
    if (stackSize >= 0)
        return arr[stackSize];

    else
        return INT_MAX;
}

int stack_ ::returnMin()
{
    return min;
}

int CtoI(char *c)
{
    return int(*c) - 48;
}

int main(int argc, char *argv[])
{
    stack_ s1;

    for (int i = 1; i < argc; i++)
    {
        s1.put(CtoI(argv[i]));
    }

    cout << "The min is: " << s1.returnMin() << endl;
    cout << "Top element of the stack : " << s1.viewTop() << endl;
}
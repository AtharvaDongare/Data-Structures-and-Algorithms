#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// We create an array of pointers of struct elements with a fixed capacity
// We can keep on adding elements to the array so that we can put in more values to array as elements.
// How to make a dynamic array though ? -> we can use a doubly linked list or we can use a dynamic array which once reaching its full capacity goes into a malloc function and gets its length doubled

class platesStack
{
private:
    struct stack
    {
        int data[5];
        const int sizeMax = 5;
        int sizeCurr;
    };

    stack array[5];
    int sizeOfArr;
    int currSizeOfArr;

public:
    platesStack();

    void putStack(int elem);

    int popStack();

    int currStackNum();

    void checkArrSize();

    void insertStackElem();
};

platesStack ::platesStack()
{
    cout << "We have initiazled the class" << endl;
    sizeOfArr = 5;
    currSizeOfArr = 0;

    for (int i = 0; i < sizeOfArr; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i].data[j] = INT_MAX;
        }

        array[i].sizeCurr = 0;
    }
}

void platesStack ::putStack(int elem)
{
    cout << "Inserting the element in stack : " << currSizeOfArr << endl;

    if (currSizeOfArr == sizeOfArr && array[currSizeOfArr].sizeCurr == array[currSizeOfArr].sizeMax)
    {
        cout << "The stack of Plates is full cannot add in more elements" << endl;
        return;
    }

    if (array[currSizeOfArr].sizeCurr == array[currSizeOfArr].sizeMax)
    {
        cout << "Stack number : " << currSizeOfArr << " filled going to next stack" << endl;
        currSizeOfArr++;
    }

    array[currSizeOfArr].data[array[currSizeOfArr].sizeCurr] = elem;

    array[currSizeOfArr].sizeCurr++;
}

int platesStack ::popStack()
{

    if (currSizeOfArr == 0 && array[currSizeOfArr].sizeCurr == 0)
    {
        cout << "There are no elements to be popped" << endl;
        return int(INT_MIN);
    }

    if (array[currSizeOfArr].sizeCurr <= 0)
    {
        cout << "The following stack : " << currSizeOfArr << " is empty checking for the previous stack " << endl;
        currSizeOfArr--;
    }

    int reqData = array[currSizeOfArr].data[array[currSizeOfArr].sizeCurr];

    array[currSizeOfArr].sizeCurr--;

    cout << "Required Data from plate of stacks : " << reqData << endl;

    return int(reqData);
}

int platesStack ::currStackNum()
{
    cout << "The current stack number is : " << currSizeOfArr << endl;

    return int(currSizeOfArr);
}

int CtoI(char *c)
{
    return int(*c - '0');
}

int main(int argc, char *argv[])
{
    // cout << "Hello World !" << endl;

    platesStack p1;

    for (int i = 0; i < argc; i++)
    {
        p1.putStack(CtoI(argv[i]));
    }

    for (int i = 0; i < argc; i++)
    {
        p1.popStack();
    }

    cout << "Program Completed !!! " << endl;
}
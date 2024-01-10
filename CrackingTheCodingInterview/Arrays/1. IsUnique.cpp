#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Is Unique : Implement an algorithm to determine if a string has all unique characters.What if you cannot use additional data structures?

class isUnique
{
private:
    vector<int> vec1;
    int input;

public:
    int sortingArray();

    int usingHashMap();

    int usingSet();

    void inputElements();
};

void isUnique ::inputElements()
{
    while (cin >> input)
    {
        vec1.push_back(input);
    }
}
int isUnique ::sortingArray()
{

    this->inputElements();

    sort(vec1.begin(), vec1.end());

    cout << "Printing the sorted Array" << endl;
    for (auto i : vec1)
        cout << i << " ";

    cout << endl;

    for (int i = 0; i < vec1.size() - 1; i++)
    {
        if (vec1[i] == vec1[i + 1])
            return 1;
    }
    return 0;
}

int isUnique ::usingHashMap()
{
    this->inputElements();

    map<int, bool> unordMap;

    for (auto i : vec1)
    {
        if (unordMap.find(i) == unordMap.end())
            unordMap[i] = "True";
        else
            return 1;
    }

    return 0;
}

int isUnique ::usingSet()
{
    this->inputElements();

    set<int> s1;

    for (auto i : vec1)
    {
        if (s1.find(i) == s1.end())
            s1.insert(i);
        else
            return 1;
    }

    return 0;
}

int main()
{
    isUnique u1;

    if (u1.usingSet())
        cout << "There are repeating elements in the array" << endl;
    else
        cout << "There are no repeating elements in the array" << endl;
}
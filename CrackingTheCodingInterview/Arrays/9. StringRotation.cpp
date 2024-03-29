#include <iostream>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

bool isStringRotate(string _input, string _rotate)
{

    int sizeString = _input.size();
    string newString = _input;

    if (sizeString != _rotate.size())
        return false;

    if (_input == _rotate)
        return true;

    for (int i = 0; i < sizeString; i++)
    {
        char newVar = newString[sizeString - 1];
        newString = newVar + newString;
        newString.erase(sizeString);
        if (newString == _rotate)
            return true;
    }

    return false;
}

int main()
{
    string _input, _output;

    cin >> _input >> _output;

    if (isStringRotate(_input, _output))
        cout << "Is a rotation of each other " << endl;
    else
        cout << "Is not a rotation of each other" << endl;
}
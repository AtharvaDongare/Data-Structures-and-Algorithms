#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class palindromPermute
{
private:
    string _input;

public:
    bool hashmapCount();
};

bool palindromPermute ::hashmapCount()
{
    getline(cin, _input);

    for (auto &c : _input)
        c = tolower(c);

    map<char, int> map1;

    int singleChar = 0, totalChars = 0;

    for (auto i : _input)
    {
        if (i == char(32))
            continue;

        if (map1.find(i) == map1.end())
            map1[i] = 1;

        else
        {
            map1[i]++;
        }
    }

    for (auto j : map1)
    {
        cout << j.first << " " << j.second << endl;
        if (j.second % 2 == 1)
            singleChar++;

        totalChars += j.second;
    }

    if (singleChar > 1 && totalChars % 2 == 1)
        return false;

    if (singleChar >= 1 && totalChars % 2 == 0)
        return false;

    return true;
}

int main()
{
    cout << "Hello World" << endl;

    palindromPermute p1;

    if (p1.hashmapCount())
        cout << "palindrome";
    else
        cout << "not palindrome";
}
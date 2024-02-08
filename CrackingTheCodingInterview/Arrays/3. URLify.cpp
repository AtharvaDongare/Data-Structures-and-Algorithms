// 1.3 URLify : Write a method to replace all spaces in a string with '%20'.You may assume that the string has sufficient space at the end to hold the additional characters,
//     and that you are given the "true" length of the string.
//     EXAMPLE:
//     Input : "Mr John Smith" , 13
//     Output : "Mr%20John%20Smith"

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class urlify
{
private:
    string _input;
    int countSpace;

public:
    string bruteForce();

    void getInput();
};

void urlify::getInput()
{
    getline(cin, _input);

    countSpace = 0;
    for (auto i : _input)
        if (i == char(32))
            countSpace++;
}

string urlify::bruteForce()
{
    string _output;

    this->getInput();

    for (auto i : _input)
    {
        if (i == char(32))
        {
            _output += "%20";
            continue;
        }
        else
        {
            _output += i;
        }
    }
    return _output;
}

int main()
{
    cout << "Hello WOrld" << endl;
    urlify url1;
    string s1 = url1.bruteForce();

    cout << s1 << endl;
}
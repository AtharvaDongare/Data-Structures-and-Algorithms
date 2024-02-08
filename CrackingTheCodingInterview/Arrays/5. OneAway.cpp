#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class oneAway
{
private:
    string inputOne, inputTwo;

public:
    bool bruteForce();
};

bool oneAway ::bruteForce()
{
    cin >> inputOne >> inputTwo;

    int issues = 0;

    if (inputOne.size() > inputTwo.size())
    {
        map<char, int> map1;
        for (auto i : inputOne)
        {
            if (map1.find(i) == map1.end())
                map1[i] = 1;
            else
                map1[i]++;
        }

        for (auto j : inputTwo)
        {
            if (map1.find(j) == map1.end())
                issues++;

            else
            {
                map1[j]--;
            }
        }

        for (auto k : map1)
            cout << k.first << " " << k.second << endl;

        cout << "Issues : " << issues << endl;

        int temp = 0;
        for (auto i : map1)
        {
            temp += abs(i.second);
        }

        cout << temp << endl;

        // issues += temp;
    }

    if (inputTwo.size() > inputOne.size())
    {
        map<char, int> map2;

        for (auto i : inputTwo)
        {
            if (map2.find(i) == map2.end())
                map2[i] = 1;
            else
                map2[i]++;
        }

        for (auto j : inputOne)
        {
            if (map2.find(j) == map2.end())
                issues++;
            else
                map2[j]--;
        }

        for (auto k : map2)
            cout << k.first << " " << k.second << endl;

        int temp = 0;
        cout << "Issues : " << issues << endl;

        for (auto i : map2)
        {
            temp += abs(i.second);
        }

        cout << temp << endl;

        // issues += temp;
    }

    if (inputOne.size() == inputTwo.size())
    {
        for (int i = 0; i < inputOne.size(); i++)
        {
            if (inputOne[i] != inputTwo[i])
                issues++;
        }
    }

    cout << "Issues : " << issues;

    if (issues == 0)
        return true;

    else
        return false;
}

int main()
{
    cout << "Hello World" << endl;

    oneAway _away;

    bool ans = _away.bruteForce();

    if (ans)
        cout << "One Away" << endl;

    else
        cout << "Not One away" << endl;
}
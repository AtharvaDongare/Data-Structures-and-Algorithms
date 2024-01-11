#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 1.2 Check Permutation : Given two strings, write a method to decide if one is a permutation of the othe

class CheckPermutation
{
private:
    string a, b;

public:
    // bool bruteForce ();

    void inputString();

    bool usingHashMap();

    bool sortingString();
};

void CheckPermutation::inputString()
{
    cin >> a >> b;

    cout << "Both of the strings are \n"
         << a << "\n"
         << b << endl;
}

bool CheckPermutation ::usingHashMap()
{
    this->inputString();
    map<char, int> umap1, umap2;

    if (a.length() != b.length())
        return false;

    for (auto i : a)
        if (umap1.find(i) == umap1.end())
            umap1[i] = 0;
        else
            umap1[i]++;

    for (auto j : b)
        if (umap2.find(j) == umap2.end())
            umap2[j] = 0;
        else
            umap2[j]++;

    for (auto k : a)
        if (umap1[k] != umap2[k])
            return false;

    return true;
}

bool CheckPermutation ::sortingString()
{
    this->inputString();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        return true;

    return false;
}

int main()
{
    CheckPermutation c1;

    if (c1.usingHashMap())
        cout << "The string are permutations of each other" << endl;
    else
        cout << "The strings are not permutations of each other" << endl;
}
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // cout << "hello word";

    string c1 = "atharva";

    int strSize = c1.size();

    for (int i = 0; i < strSize; i++)
    {
        char newVar = c1[strSize - 1];
        c1 = newVar + c1;
        c1.erase(strSize);
        cout << c1 << endl;
    }
}
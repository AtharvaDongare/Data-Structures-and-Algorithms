#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class StringComp
{
private:
    string _input;

public:
    void compress();
};

void StringComp ::compress()
{
    cin >> _input;
    int countChar = 1;
    string _output;

    for (int i = 0; i < _input.size() - 1; i++)
    {
        cout << _input[i] << " " << _input[i + 1] << endl;
        if (_input[i] == _input[i + 1])
        {
            countChar++;
        }

        else
        {
            _output += _input[i];
            cout << countChar << endl;
            if (countChar > 1)
                _output += char(countChar);
            countChar = 1;
        }
    }

    cout << _output << endl;
}

int main()
{
    cout << "Hello World" << endl;

    StringComp s1;
    s1.compress();
}
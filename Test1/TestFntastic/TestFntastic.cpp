// TestFntastic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <string>
#include <map>

using namespace std;

bool CharCheck(string str, int lenstr, int charind)
{
    int curchar = str.find(str[charind]);
    int result = str.find(str[charind], curchar + 1);

    if (result!= string::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str;
    cout << "Write string to converting:";
    getline (cin, str);
    transform(str.begin(), str.end(), str.begin(), tolower);
    map<char, bool> convert;

    for (int i = 0; i < str.length(); i++)
    {
        convert[str[i]] = CharCheck(str, str.length(), i);

        if (convert[str[i]] == true)
            cout << ")";
        else
            cout << "(";
    };
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

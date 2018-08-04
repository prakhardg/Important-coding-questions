#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s("abcbcglglbcglllbcglcbcgl");
    int count = 0;
    size_t nPos = s.find("bcgl", 0); // first occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("bcgl", nPos + 1);
    }

    cout << count;
};

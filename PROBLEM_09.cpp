#include<bits/stdc++.h>
using namespace std;

string reverseString(string s, int left, int right)
{
    if (left >= right)
    {
        return s;
    }
    swap(s[left], s[right]);
    return reverseString(s, left + 1, right - 1);
}

int main()
{
    string str;
    cin>>str;

    str = reverseString(str, 0, str.length() - 1);

    cout << str << endl;

    return 0;
}
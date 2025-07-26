#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int left, int right)
{
    if (left >= right)
    {
        return true;
    }
    if (s[left] != s[right])
    {
        return false;
    }
    return isPalindrome(s, left + 1, right - 1);
}

int main()
{
    string str;
    cin>>str;

    if (isPalindrome(str, 0, str.length() - 1))
    {
        cout << "Palindrome" << endl;
    }

    else
    {
        cout << "Not palindrome" << endl;
    }

    return 0;
}
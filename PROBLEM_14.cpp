//14
#include <iostream>
using namespace std;

int findmax(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }
    int mx = findmax(a, n - 1);
    return (a[n - 1] > mx) ? a[n - 1] : mx;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = findmax(a, n);
    cout << mx << endl;

    return 0;
}
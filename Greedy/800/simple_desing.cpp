#include <iostream>

using namespace std;

int digitsum(int n)
{
    int sum = 0, rem = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x;
        cin >> k;
        int y = 0;
        int digsum = 0;

        while (digitsum(x) % k != 0)
        {
            x++;
        }
        cout << x << endl;
    }
}
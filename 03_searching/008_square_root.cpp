#include <iostream>
using namespace std;
int sqroot(int x)
{
    int low = 0, high = x;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int msq = mid * mid;
        if (msq == x)
            return mid;
        else if (msq > x)
            high = mid - 1;
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    int x;
    cin >> x;
    int ans = sqroot(x);
    cout << ans;
    return 0;
}
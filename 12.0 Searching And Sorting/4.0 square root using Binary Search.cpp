#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int mySqrt(int x)
{
    int ans;
    if (x < 2)
        return x;
    int s = 0, e = x;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid == x / mid)
        {
            ans = mid;
            break;
        }
        else if (mid < x / mid)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n, d;
    cin >> n >> d;
    int ans = mySqrt(n);
    double step = 0.1;
    double finalans = ans;

    for(int i = 0; i<d; i++){
        for(double j = finalans; j*j<=n; j+=step){
            finalans = j;
        }
        step/=10;
    }
    cout<<"ans = : "<<finalans;
    return 0;
}
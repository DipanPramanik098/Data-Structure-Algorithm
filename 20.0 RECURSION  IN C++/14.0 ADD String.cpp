#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void addRE(string&num1, int p1, string&num2, int p2, int carry, string&ans)
{
    // base case
    if(p1<0 && p2<0){
        if(carry!=0){
            ans.push_back(carry+'0');
        }
        return;
    }
    // solve
    int n1 = (p1>=0 ? num1[p1] : '0') -'0';
    int n2 = (p2>=0 ? num2[p2] : '0') -'0';
    int csum = n1+n2+carry;
    int digit = csum%10;
    carry = csum/10;
    ans.push_back(digit+'0');

    // Recursion
    addRE(num1,p1-1,num2,p2-1,carry,ans);

}
int main(){
    string s1;
    string s2;

    cin >> s1 >> s2;
    string ans = "";
    addRE(s1,s1.size()-1, s2, s2.size()-1,0,ans);
    reverse(ans.begin(), ans.end());
    cout<<s1<<" "<<s2<<endl;
    cout << ans << endl;
    return 0;
}
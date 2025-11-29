#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    string sub1, sub2;
    string ans = s;

    for (int i = 0; i<n-1; i++){
        sub1.push_back(s[i]);
        sub2 = s.substr(i+1, n-i);
        sort(sub1.begin(), sub1.end());
        sort(sub2.begin(), sub2.end());

        ans = min(ans, sub1+sub2);
    }
    cout << ans;
}
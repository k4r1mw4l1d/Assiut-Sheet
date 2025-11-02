#include <iostream>
using namespace std;

int main(){
    long long T;
    cin >> T;
    while(T--){
        string s, t;
        cin >> s >> t;
        int s_n = s.size();
        int t_n = t.size();
        int n = max(s_n, t_n);

        for (int i = 0; i < n; i++) {
            if (i < s_n) cout << s[i];
            if (i < t_n) cout << t[i];
        }
        cout << endl;
    }
}
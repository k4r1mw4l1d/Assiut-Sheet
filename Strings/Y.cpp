#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    vector<long long> cost(26);
    for (int i = 0; i < 26; i++) cin >> cost[i];

    auto C = [&](char c) { return cost[c - 'a']; };

    for (int i = 0; i < n; ) {
        if (s[i] != '?') {
            i++;
            continue;
        }

        int start = i;
        while (i < n && s[i] == '?') i++;
        int end = i - 1; // block is start..end

        char left = (start == 0 ? '?' : s[start - 1]);
        char right = (end == n - 1 ? '?' : s[end + 1]);

        long long bestCost = LLONG_MAX;
        char bestChar = 'a';

        for (char c = 'a'; c <= 'z'; c++) {
            long long curr = 0;

            if (left != '?') curr += llabs(C(left) - C(c));
            if (right != '?') curr += llabs(C(c) - C(right));

            if (curr < bestCost || (curr == bestCost && c < bestChar)) {
                bestCost = curr;
                bestChar = c;
            }
        }

        for (int j = start; j <= end; j++) s[j] = bestChar;
    }

    long long total = 0;
    for (int i = 0; i < n - 1; i++) {
        total += llabs(C(s[i]) - C(s[i + 1]));
    }

    cout << total << "\n" << s << "\n";
}
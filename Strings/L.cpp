#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    string s;
    cin >> s;

    while (Q--) {
        string command;
        cin >> command;

        if (command == "pop_back") {
            if (!s.empty()) s.pop_back();
        } 
        else if (command == "front") {
            if (!s.empty()) cout << s.front() << endl;
        } 
        else if (command == "back") {
            if (!s.empty()) cout << s.back() << endl;
        } 
        else if (command == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= (int)s.size())
                sort(s.begin() + l - 1, s.begin() + r);
        } 
        else if (command == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= (int)s.size())
                reverse(s.begin() + l - 1, s.begin() + r);
        } 
        else if (command == "print") {
            int pos;
            cin >> pos;
            if (pos >= 1 && pos <= (int)s.size())
                cout << s[pos - 1] << endl;
        } 
        else if (command == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r) swap(l, r);
            if (l >= 1 && r <= (int)s.size())
                cout << s.substr(l - 1, r - l + 1) << endl;
        } 
        else if (command == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}
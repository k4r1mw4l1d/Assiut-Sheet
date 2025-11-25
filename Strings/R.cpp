#include <iostream>
#include <deque>
using namespace std;

int main(){
    long long n;
    string s;
    cin >> n >> s;
    long long sum = 0;
    
    deque<char> dq;
    for (char c : s){
        dq.push_back(c);
    }
    
    while (!dq.empty()){
        char curr = dq.front();
        dq.pop_front();
        
        if (curr == 'V'){
            sum += 5;
        } else if (curr == 'W'){
            sum += 2;
        } else if (curr == 'X'){
            if (!dq.empty()){
                dq.pop_front();
            }
        } else if (curr == 'Y'){
            if (!dq.empty()){
                char next = dq.front();
                dq.pop_front();
                dq.push_back(next);
            }
        } else if (curr == 'Z'){
            if (!dq.empty()){
                char next = dq.front();
                if (next == 'V'){
                    sum /= 5;
                    dq.pop_front();
                } else if (next == 'W'){
                    sum /= 2;
                    dq.pop_front();
                }
            }
        }
    }
    
    cout << sum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int org_num = num;
    int rev_num = 0;
    while (num>0){
        rev_num = rev_num*10 + num%10;
        num /= 10;
    }
    if (rev_num == org_num){
        cout << rev_num << endl;
        cout << "YES" << endl;
    } else {
        cout << rev_num << endl;
        cout << "NO" << endl;
    }
}
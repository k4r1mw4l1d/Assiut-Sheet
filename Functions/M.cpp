#include <iostream>
#include <set>
using namespace std;

int numberDistinct(int n, int arr[]){
    set<int> answer;
    for (int i = 0; i<n; i++){
        answer.insert(arr[i]);    
    }
    return answer.size();
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << numberDistinct(n, arr) << "\n";
}
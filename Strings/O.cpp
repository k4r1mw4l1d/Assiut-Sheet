#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    
    int count[26] = {0};
    
    char c;
    for (int i = 0; i < n; i++){
        scanf(" %c", &c);
        count[c - 'a']++;
    }
    
    for (int i = 0; i < 26; i++){
        for (int j = 0; j < count[i]; j++){
            putchar('a' + i);
        }
    }
    putchar('\n');
    
    return 0;
}
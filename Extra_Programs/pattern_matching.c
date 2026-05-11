#include <stdio.h>
#include <string.h>

int main() {
    char str[100], pattern[100];
    printf("Enter the string: ");
    scanf("%s", str);
    printf("Enter the pattern: ");
    scanf("%s", pattern);
    
    int str_len = strlen(str);
    int pat_len = strlen(pattern);
    
    for (int i = 0; i <= str_len - pat_len; i++) {
        int j;
        for ( j = 0; j < pat_len; j++) {
            if (str[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == pat_len) {
            printf("Pattern found at index %d\n", i);
        }
    }
    
    return 0;
}
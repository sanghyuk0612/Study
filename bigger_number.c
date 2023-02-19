#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int len;
    int k = 5;
    char a[] = "4177252841";
    
    int b, c;
    int answer;
    
    
    while (k != 0) {
        len = strlen(a);
        int f_answer = 0;
        for (int i = 0; i + 1 < len; i++) {
            b = a[i] - 48;
            c = a[i + 1] - 48;
            if (b < c) {
                a[i] = '0';
                k--;
                break;
            }
            if (i + 2 == len) {
                a[i + 1] = '0';
                k--;
            }
        }
        for (int i = 0; i < len; i++) {
            if (a[i] == '0') {
                
                continue;
            }
            else {
                b = a[i] - '0';
                f_answer = f_answer * 10 + b;
            }
        }
        _itoa(f_answer, a, 10);
        answer = atoi(f_answer);
        
    }
    
    printf("%s",answer);
}
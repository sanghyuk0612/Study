#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int a, int b, int c, int d) {
    int answer = 0;
    int tmp;
    for (int i = 0 ;i<4; i++){
        if (a>b){
            tmp = a;
            a = b;
            b =tmp;
        }
        if ( b>c){
            tmp = b;
            b = c;
            c =tmp;
        }
        if (c>d){
            tmp = c;
            c = d;
            d =tmp;
        }
        
    }
        
    if(a==b && b==c && c==d)
        answer = 1111*a;
    else if(a==b &&b==c)
        answer = (10*a+d)*(10*a+d);
    else if((b==c&& c==d))
        answer = (10*b+a)*(10*b+a);
    else if(a!=b && b!=c && c!=d)
        answer = a;
    else if (a==b&& c==d)
        answer = (a+d)*(d-a);
    else 
    {
        if( a==b)
            answer = c*d;
        else if( b==c)
            answer = a*d;
        else
            answer = a*b;
    }
    
    return answer;
}
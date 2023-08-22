#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*prices_len);
    //메모리 동적할당
    int* a = prices;                                                 
    //a에 prices대입
    for (int i=0; i < prices_len ; i++){
        //배열 길이만큼 반복
        int cnt = 0;
        // cnt에 0대입
        for(int j = i+1; j<prices_len ; j++){
            //j에 i+1만큼 넣고 배열의 길이보다 작을때까지 돔
            cnt++;
            //cnt에 1 더함
            if (a[i]>a[j]){
                break;
                //만약 a[i]가 a[j] 보다 크면, 즉 주식가격이 떨어지면 루프 빠져나감.
            }
        }
        answer[i] = cnt; 
        // answer[i]에 cnt 대입
    }
    return answer;
    //answer 반환
}

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int real_answer[2] = { 0,0 };
    int answer = 0;
    for (int i = 0; i < sizes_rows; i++) {
        for (int j = 0; j < 2; j++) {
            int tmp = 0;
            if (sizes[i][0] < sizes[i][1]) {
                tmp = sizes[i][0];
                sizes[i][0] = sizes[i][1];
                sizes[i][1] = tmp;
            }
            if (real_answer[0] < sizes[i][0]) {
                real_answer[0] = sizes[i][0];
            }
            if (real_answer[1] < sizes[i][1]) {
                real_answer[1] = sizes[i][1];
            }

        }
    }
    answer = real_answer[0] * real_answer[1];
    return answer;
}

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <array>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0; //답 
    int time = 0;   //시간계산
    stack<int> remain;  //남아있는 버스변수
    int sum=0;      //다리위에 올라가있는 버스무게 변수
    int *bridge =new int[bridge_length]; //다리 정의
    int check =truck_weights.size();     //전체 트럭의 수 변수
    int finish = 0;                      //목적지에 도착한 트럭 수
    for (int i = 0;i < bridge_length;i++) {
        bridge[i] = 0;
    }
    reverse(truck_weights.begin(), truck_weights.end());
    for (int i = 0;i < truck_weights.size();i++) {
        remain.push(truck_weights[i]);
    }
    while (check!= finish) { //모든 트럭이 도착지에 도달할때까지 while문
        for (int i = bridge_length-1;i-1 >=0;i--) {   //다리를 한칸씩 당김
            if (i == bridge_length - 1) {             //for문의 첫번째 경우에서
                if (bridge[i] != 0) {                 //다리의 마지막에 트럭이 있을 경우
                    sum -= bridge[i];                 //sum에서 마지막에 있는 트럭을 빼줌
                    finish++;                         //도착한 트럭의 수를 하나 늘림
                }
            }
            bridge[i] = bridge[i - 1];                //다리 위에 있는 트럭을 한칸 씩 당김
        }
        if (remain.empty()||sum + remain.top() > weight) {  //stack이 비어있지 않고 허용 무게보다 무거울 경우
            time++;                                         //시간추가해줌
            bridge[0] = 0;                                  //처음에 0을 삽입
            continue;
        }
        bridge[0] = remain.top();                           //그게아닐경우 0에 위치에 다음 차량을 넣음
        sum += bridge[0];                                   //총 무게를 더함
        remain.pop();                                       //stack에서 pop을 해줌
        time++;                                             //시간을 더해줌
    }
    answer = time;    //그렇게 해서 while문을 빠져나왔을 경우 time이 답임
    return answer;
}

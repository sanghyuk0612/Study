def solution(operations):
    answer = []
    i=0
    while i<len(operations):
        if operations[i][0] == "I": #첫글자가 I인지확인
            j = 2
            string = ''
            while j<len(operations[i]):
                string += operations[i][j] #string에 숫자 넣기
                j +=1
            answer.append(int(string))
        else:
            if len(answer)==0:
                pass
            elif operations[i][2] == "-":
                answer.remove(min(answer))
            else:
                answer.remove(max(answer))
        i+=1
    if len(answer)==0:
        answer = [0,0]
    else:
        answer = [max(answer),min(answer)]
    return answer
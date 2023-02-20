from ast import Break
from sys import breakpointhook

number = "54321"
k = 2
number = list(number) 
while (k != 0 ):
    i=0
        
    if(len(number) ==1):
        break
    while (i<len(number)):
        if (i==len(number)-k):
            number = number[:i]
            k=0
            break
            
        if (number[i]<number[i+1]):
            k -=1
            break
        if (i+2==len(number)):
           number.pop(i+1)
           k-=1
        i+=1
answer = ''.join(number)
print(answer)

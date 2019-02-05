test=int(input())
while test:
    answer=[]
    segments=int(input())
    weights=list(map(int,input().split()))
    counter=0
    for i in range(0,len(weights)):
        answer.append(weights[i]+counter)
        counter+=1
    print(max(answer))
    test=test-1
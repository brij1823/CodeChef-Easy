test=int(input())
while test:
    n=int(input())
    cost=list(map(int,input().split()))
    cost.sort(reverse=True)
    answer=0
    counter=0
    while(counter<n):
        if(counter+1<n):
         answer=answer+cost[counter]+cost[counter+1]
        else:
         answer = answer + cost[counter]

        counter=counter+4
    print(answer)
    test=test-1
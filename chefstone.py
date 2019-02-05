test=int(input())
while test:
    n,k=input().split()
    n=int(n)
    k=int(k)
    weight=list(map(int,input().split()))
    profit=list(map(int,input().split()))
    answer=[]
    for i in range(0,n):
        temp=profit[i]/weight[i]
        answer.append(temp)
    max_value=max(answer)
    index=answer.index(max_value)
    my_answer=profit[index]*(k//weight[index])
    print(my_answer)
    test=test-1
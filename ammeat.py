test=int(input())
while test:
    n,m=input().split()
    n=int(n)
    m=int(m)
    meat=list(map(int,input().split()))
    meat.sort(reverse=True)
    answer=0
    for i in range(0,n):
        if(meat[i]<=m):
            m=m-meat[i]
            answer=answer+1
        if(m==0):
            break
    if(answer==0):
        print(-1)
    else:
        print(answer)
    test=test-1
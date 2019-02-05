test=int(input())
while test:
    soldiers=int(input())
    attack=list(map(int,input().split()))
    defence=list(map(int,input().split()))
    copy_defence=defence.copy()
    copy_defence.sort(reverse=True)
    flag=0
    answer=0
    for i in range(0,soldiers):
        index=defence.index(copy_defence[i])
        copy_defence[i]=-1
        print(defence)
        print(copy_defence)
        prev=index-1
        next=(index+1)%soldiers
        if(prev<0):prev=soldiers-1
        if((attack[next]+attack[prev])<defence[index]):
           flag=1
           answer=defence[index]
           break
    if(flag==0):
        print(-1)
    else:
        print(answer)
    test=test-1
test=int(input())
while test:
    n=int(input())
    building=str(input())
    answer=0
    if(building[0]=='0' and building[1]=='0'):
        answer=answer+1
    if(building[n-1]=='0' and building[n-2]=='0'):
        answer=answer+1

    for i in range(1,n-1):
        if(building[i]=='0' and building[i-1] =='0' and building[i+1]=='0' ):
            answer=answer+1
    print(answer)
    test=test-1
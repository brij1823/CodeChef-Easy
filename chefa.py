test=int(input())
while test:
    n=int(input())
    piles=list(map(int,input().split()))
    piles.sort(reverse=True)
    sum=0
    for i in range(0,n,2):
        sum=sum+piles[i]
    print(sum)

    test=test-1
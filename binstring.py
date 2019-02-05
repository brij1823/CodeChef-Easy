def gcd (a,b):
    if (b == 0):
        return a
    else:
         return gcd (b, a % b)
test=int(input())
while(test):
    n=int(input())
    A=list(map(int,input().split()))
    res = A[0]
    for c in A[1::]:
        res = gcd(res, c)
    print(res)
    test=test-1

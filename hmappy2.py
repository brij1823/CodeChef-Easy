from math import gcd
test=int(input())
while test:
    n,a,b,k=input().split()
    n=int(n)
    a = int(a)
    b = int(b)
    k = int(k)
    arr=[]
    arr.append(a)
    arr.append(b)
    lcm = arr[0]

    for i in arr[1:]:
        lcm = lcm * i / gcd(lcm, i)
    cmp=n//a+n//b-2*n//lcm
    if(k<=cmp):
        print("Win")
    else:
        print("Lose")
    test=test-1
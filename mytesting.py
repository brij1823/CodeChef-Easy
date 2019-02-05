from fractions import gcd
test=int(input())
while(test):
    a,b=input().split()
    a=int(a)
    b=int(b)
    print(gcd(a,b))
    test=test-1

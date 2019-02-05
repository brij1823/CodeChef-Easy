test=int(input())
ans="zyxwvutsrqponmlkjihgfedcba"
aans="abcdefghijklmnopqrstuvwxyz"
while test:
    temp=""
    user=int(input())
    add=user//26
    user=user%26
    for i in range(user+add,-1,-1):
        temp=temp+aans[i]
    for i in range(0,add):
        temp=temp+ans
    print(temp)
    test=test-1

    
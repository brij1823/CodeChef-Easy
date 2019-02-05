n=int(input())
numbers=list(map(int,input().split(' ')))
my=[]
counter=0
max=0
for i in range(0,n):
    if(numbers[i]==0):
        if(counter>max):
            max=counter
        counter=0
    else:
        counter=counter+1

if(counter>max):
    print(counter)
else:
    print(max)

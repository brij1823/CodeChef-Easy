test=int(input())
while(test):
    bit,a,b=input().split()
    name="0"+bit+"b"
    a=format(int(a), name)
    b=format(int(b),name)
    count_a=a.count('1')
    count_b=b.count('1')
    sum=count_a+count_b
    s = ''
    bit=int(bit)
    if(sum>bit):
        sum=bit-(sum-bit)
        for i in range(0,sum):
            s=s+'1'
        for i in range(sum,bit):
            s=s+'0'
    else:
        for i in range(0,sum):
            s=s+'1'
        for i in range(sum,bit):
            s=s+'0'
    print(int(s, 2))


    test=test-1
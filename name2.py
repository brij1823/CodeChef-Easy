def is_subseq(x, y):
    it = iter(y)
    return all(any(c == ch for c in it) for ch in x)
test=int(input())
while test:
    str1,str2=input().split()
    if(is_subseq(str1, str2) or is_subseq(str2, str1)):
            print("YES")
    else:
            print("NO")
    test=test-1

test=int(input())
while(test):
    total,selected=input().split()
    total=int(total)
    selected=int(selected)
    weights=list(map(int,input().split()))
    weights=sorted(weights)
    summation=sum(weights)
    child=[]
    stepchild=[]
    for i in range(0,selected):
        child.append(weights[i])
        stepchild.append(weights[total-i-1])
    print(max(abs(sum(child)-(summation-sum(child))),abs(sum(stepchild)-(summation-sum(stepchild)))))
    test=test-1
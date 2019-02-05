test=int(input())
while test:
    city=int(input())
    population=list(map(int,input().split()))
    population=sorted(population)
    summation=(sum(population)-population[0])*population[0]
    print(summation)
    test=test-1
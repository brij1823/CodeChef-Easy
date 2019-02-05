test=int(input())
while test:
    unlucky=input()
    count_four=unlucky.count('4')
    count_seven=unlucky.count('7')
    print(len(unlucky)-(count_four+count_seven))
    test=test-1
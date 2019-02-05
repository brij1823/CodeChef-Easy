test=int(input())
while test:
    feedback=input()
    if(feedback.find("101")!=-1 or feedback.find("010")!=-1):
        print("Good")
    else:
        print("Bad")

    test=test-1
test=int(input())
while test:
    equation=input()
    length=len(equation)
    num=[]
    flag=0
    operator=0
    sums=0
    negate=0
    rhs=[]
    if(equation[0]=='-'):
        negate=1
    for i in equation:

        if(operator==3):
            rhs.append(i)

        elif(i=='+'):
            if(flag==0):
                flag=1

                if(negate==1):
                    num.remove('-')
                    term = ''.join(num)

                    num = []
                    term = int(term)

                    sums=sums-term
                    negate=0
                else:
                    term = ''.join(num)

                    num = []
                    term = int(term)

                    sums = sums + term

                operator=1
            else:

                term = ''.join(num)
                num = []
                if (operator == 1):
                    term = int(term)
                    sums = sums + term
                    operator = 1
                else:
                    term = int(term)
                    sums = sums - term
                    operator = 1

        elif (i == '-' and negate==0):
            if (flag == 0):
                flag = 1
                if (negate == 1):
                    num.remove('-')

                    term = ''.join(num)
                    num = []
                    term = int(term)

                    sums = sums - term
                    negate=0
                else:

                    term = ''.join(num)
                    num = []
                    term = int(term)

                    sums = sums + term

                operator = 2
            else:

                term = ''.join(num)

                num = []
                if(operator==1):
                    term = int(term)
                    sums = sums + term
                    operator = 2
                else:
                    term = int(term)
                    sums = sums - term
                    operator = 2
        elif(i=='='):
            term = ''.join(num)
            num = []
            if (operator == 1):
                term = int(term)
                sums = sums + term
                operator = 3
            else:
                term = int(term)
                sums = sums - term
                operator = 3

        else:
            num.append(i)
            negate=0
    lhs = ''.join(rhs)
    lhs=int(lhs)
    if(lhs==sums):
        print("Valid Equation")
    else:
        print("Invalid Equation")

    test=test-1

test=int(input())
while test:
    one_name=list(input())
    two_name=list(input())
    length1=len(one_name)
    length2=len(two_name)
    answer=0
    if(length1>length2):
        for i in range(0,length2):
         if(two_name[i]!='0'):
            if(two_name[i] in one_name):
                count_one=one_name.count(two_name[i])
                count_two=two_name.count(two_name[i])
                answer=answer+min(count_one,count_two)
                temp_two=''.join(two_name)
                temp_two=temp_two.replace(two_name[i],'0')
                two_name=list(temp_two)
                #one_name.remove(two_name[i])
                #two_name.remove(two_name[i])

    else:
        for i in range(0,length1):
         if (one_name[i] != '0'):
            if(one_name[i] in two_name):
                count_one=one_name.count(one_name[i])
                count_two=two_name.count(one_name[i])
                answer=answer+min(count_one,count_two)
                temp_one = ''.join(one_name)
                temp_one = temp_one.replace(one_name[i], '0')
                one_name = list(temp_one)

                #one_name.remove(two_name[i])
                #two_name.remove(two_name[i])
                length1=len(one_name)
    print(answer)
    test=test-1
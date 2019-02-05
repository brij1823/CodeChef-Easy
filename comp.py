test=int(input())
while(test):
    total,selected=input().split(" ")
    total=int(total)
    selected=int(selected)
    names=[]
    age=[]
    for i in range(0,total):
        naam,umar=input().split(" ")
        names.append(naam)
        umar=int(umar)
        age.append(umar)

    beg=0
    ending=total
    final_names=[]
    final_ages=[]
    counter=0
    while(beg<=ending and counter<selected):

        if(age[beg]!=age[ending-1]):
            if(age[beg]<age[ending-1]):
                final_ages.append(age[beg])
                final_names.append(names[beg])
                beg=beg+1
                counter=counter+1
            else:
                final_ages.append(age[ending-1])
                final_names.append(names[ending-1])
                ending=ending-1
                counter = counter + 1
        elif(names[beg]!=names[ending-1]):
            len1=len(names[beg])
            len2=len(names[ending-1])
            if(len1<=len2):
                for i in range(0,len1):
                    if(ord(names[beg][i])!=ord(names[ending-1][i])):
                        if(ord(names[beg][i])<ord(names[ending-1][i])):
                            final_names.append(names[beg])
                            final_ages.append(age[beg])
                            beg=beg+1
                            counter = counter + 1
                        else:
                            final_names.append(names[ending-1])
                            final_ages.append(age[ending-1])
                            ending = ending - 1
                            counter = counter + 1
            else:
                for i in range(0,len2):
                    if(ord(names[beg][i])!=ord(names[ending-1][i])):
                        if(ord(names[beg][i])<ord(names[ending-1][i])):
                            final_names.append(names[beg])
                            final_ages.append(age[beg])
                            beg=beg+1
                            counter = counter + 1
                        else:
                            final_names.append(names[ending-1])
                            final_ages.append(age[ending-1])
                            ending = ending - 1
                            counter = counter + 1
        else:
            final_names.append(names[beg])
            final_ages.append(age[beg])
            beg = beg + 1
            counter = counter + 1





    #Display
    myanswer=[]
    counter=0
    beg=0
    ending=len(final_names)
    while (beg <= ending and counter < selected):

        if (final_ages[beg] != final_ages[ending - 1]):
            if (final_ages[beg] < final_ages[ending - 1]):
                print(names.index(final_names[beg]),end=' ')
                myanswer.append(names.index(final_names[beg]))
                beg = beg + 1
                counter = counter + 1
            else:
                print(names.index(final_names[ending-1]),end=' ')
                myanswer.append(names.index(final_names[ending-1]))
                ending = ending - 1
                counter = counter + 1
        elif (final_names[beg] != final_names[ending - 1]):
            len1 = len(final_names[beg])
            len2 = len(final_names[ending - 1])
            if (len1 <= len2):
                for i in range(0, len1):
                    if (ord(final_names[beg][i]) != ord(final_names[ending - 1][i])):
                        if (ord(final_names[beg][i]) < ord(final_names[ending-1][i])):
                            print(names.index(final_names[beg]),end=' ')
                            myanswer.append(names.index(final_names[beg]))
                            beg = beg + 1
                            counter = counter + 1
                        else:
                            print(names.index(final_names[ending-1]),end=' ')
                            myanswer.append(names.index(final_names[ending-1]))
                            ending = ending - 1
                            counter = counter + 1
            else:
                for i in range(0, len2):
                    if (ord(final_names[beg][i]) != ord(final_names[ending - 1][i])):
                        if (ord(final_names[beg][i]) < ord(final_names[ending - 1][i])):
                            print(names.index(final_names[beg]),end=' ')
                            myanswer.append(names.index(final_names[beg]))
                            beg = beg + 1
                            counter = counter + 1
                        else:
                            print(names.index(final_names[ending-1]),end=' ')
                            myanswer.append(names.index(final_names[ending-1]))
                            ending = ending - 1
                            counter = counter + 1
        else:
            print(names.index(final_names[beg]),end=' ')
            myanswer.append(names.index(final_names[beg]))
            index=names.index(final_names[beg])
            names[index]=''

            beg = beg + 1
            counter = counter + 1
    print()
    test=test-1
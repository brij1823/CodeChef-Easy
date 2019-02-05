terminator=True
while(terminator):
    sequence=input()
    if(sequence!='0'):
        length=len(sequence)
        n=int(input())
        counter=n
        pending=[]
        removal=[]
        answer=0.
        sequence=list(sequence)
        for i in range(0,length):
            if(sequence[i] in pending):
                 counter+=1
                 pending.remove(sequence[i])
            elif(counter!=0):
                counter-=1
                pending.append(sequence[i])
            elif(sequence[i] not in removal):
                 answer=answer+1
                 removal.append(sequence[i])
            elif(sequence[i] in removal):
                removal.remove(sequence[i])
        print(answer)        
    else:
        terminator=False
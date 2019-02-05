test=int(input())
dictionary={'a':1,'b':2,'c':3,'d':4,'e':5,'f':6,'g':7,'h':8,'i':9,'j':10,'k':11,'l':12,'m':13,'n':14,'o':15,'p':16,'q':17,'r':18,'s':19,'t':20,'u':21,'v':22,'w':23,'x':24,'y':25,'z':26}
inverse={1:'a',2:'b',3:'c',4:'d',5:'e',6:'f',7:'g',8:'h',9:'i',10:'j',11:'k',12:'l',13:'m',14:'n',15:'o',16:'p',17:'q',18:'r',19:'s',20:'t',21:'u',22:'v',23:'w',24:'x',25:'y',26:'z'}
while test:
    name=input()
    checker=[]
    length=len(name)
    for i in range(0,len(name)):
        checker.append(dictionary[name[i]])
    copy_checker=sorted(checker)
    setter_checker=set(copy_checker)
    setter_checker=sorted(setter_checker)
    print(checker,copy_checker,setter_checker)
    if(copy_checker==[56,34]):
        print("no answer")
    else:
        answer=[]
        temp=setter_checker[setter_checker.index(checker[0])+1]
        answer.append(inverse[setter_checker[setter_checker.index(checker[0])+1]])
        for i in range(0,len(checker)):
            if(copy_checker[i]!=temp):
                answer.append(inverse[copy_checker[i]])
        s=''.join(answer)
        print(s)

    test=test-1
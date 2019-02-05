n,k=input().split()
n=int(n)
k=int(k)
flag=0
lucky=[]
for i in range(0,n):
    temp=input()
    lucky.append(temp)
for i in range(0,k):
     flag=0
     checker=input()
     if(len(checker)>=47):
         print("Good")
     else:
         for j in range(0,len(lucky)):
             if(lucky[j] in checker):
                 flag=1
                 print("Good")
                 break
         if(flag==0):
             print("Bad")
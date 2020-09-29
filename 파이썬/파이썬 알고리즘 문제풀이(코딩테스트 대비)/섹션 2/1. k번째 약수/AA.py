import sys

#sys.stdin=open("input.txt", "rt")

n, k =map(int, input().split()) #띄어쓰기로 구분해서 읽기 ! 

arr=[]

for x in range(1,n+1):
        if(n%x ==0):
            arr.append(x)
            
if (k>len(arr)):
    print("-1")
    
else:
    print(arr[k-1])

#2차원 리스트 생성과 접근

 # 2*3 인 2차원 리스트 선언 
 
a=[[0]*2 for _ in range(3)] 

#변수 접근법

a[0][1]=1
a[1][1]=2

#2차원 리스트 표처럼 출력하기!

for x in a:
    print(x)

for x in a:
    for y in x:
        print(y, end=" ")
    print()

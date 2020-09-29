#함수만들기

#선언 방법 ! 출력값/ 함수명/ 인자 -> 파이썬은 항상 main 위에 선언해야한다! 

"""
#출력!

def add(a,b):
    c=a+b
    print(c)
    
#값을 리턴 !

def add(a,b):
    c=a+b
    return c
    
#파이썬은 동시의 두개의 값을  리턴할 수 있다! 결과값은 튜플 !

def add(a,b):
    c=a+b
    d=a-b
    return c, d

"""
def isprime(x):
    for i in range(2,x):
        if x%i==0:
            return False
    return True

a=[12,13,7,9,19]

for x in a:
    if isprime(x):
        print(x, end=" ")
        




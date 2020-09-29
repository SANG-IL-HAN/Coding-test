"""
조건문

x=15

if x>=10:
    if x%2==1:
        print("10이상의 홀수")
        
x=9

if x>0:
    if x<10:
        print("10작자")
        
x=7

if x>0 or x<10 :
    print("10작자")

x=7

if 0<x<10 :
    print("10작자")
    
x=-3

if x >0:
    print("양수")
else:
    print("음수")
    
x=80

if x>=90:
    print("A")
if x>=80:
    print("B")
if x>=70:
    print("C")
else:
        print("FAIL")
"""
"""
#반복문

a=range(1,11)

print(list(a))

for i in range(10,0, -1):
    print(i)

i=10

while i >0:
    print(i)
    i=i-1

i=1

while True:
    print(i)
    if i==10:
        break
    i+=1
  
for i in range(1,11):
    if i%2==0:
        continue
    print(i)

for i in range(1,11):
    print(i)
    if i>15:
        break
else:
    print(11)

N=int(input("숫자를 입력해 주세요"))

for i in range(1,N+1):
    if i%2==1:
        print(i)

A=0

for i in range(1,N+1):
    A=A+i
    if N%i==0:
        print(i, "은(는) 약수입니다")
    if i==N:
        print(A)

for i in range(5):
    print("i: ", i, sep=" ",end=" ")
    print()
    for j in range(i+1):
        print("*", end=" ")
    print()

for i in range(5):
    for j in range(5-i):
        print("*", end=" ")
    print()
"""
# 문자열 함수 실습 ! !
msg="it is time to start"

txt=msg.upper() #대문자화
txt2=msg.lower()#소문자화 
print(msg.upper())
print(msg.lower())
print(txt)
print(txt.find(' '))
print(txt.count("T"))
print(txt[ : 2]) #해당 인덱스 전까지 뽑아내서 출력해 버리기
print(txt[3 : 5])
print(len(txt))

"""
#x 가 대문자 
for x in txt: 
    if x.isupper(): 
        print(x, end=" ")
print()

for i in txt2:
    if i.isalpha():
        print(i,end=" ")
"""

tmp="AZ"
tmp=70
print(chr(tmp))
#print("아스키 넘버 출력 " , ord(x)) # 아스키 넘버 출력 


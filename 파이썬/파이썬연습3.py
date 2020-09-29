a=[23, 12, 36, 61, 19]
"""
print(a[:3])
print(a[1:4])
print(len(a))

for i in range(len(a)):
    print(a[i], end=" " )
print()

#a의 리스트를 0번부터 끝까지 접근

for x in a:
    print(x, end=" ")
print()

for x in a:
    if x%2 ==1 : 
        print(x, end=" ")
print()

#인덱스 번호까지 접근하고 싶을때
a.sort()
for x in enumerate(a):
        print(x)
"""
"""
출력 예시

해당 인덱스 번호와 벨류값을 대입해서 pair 만들어준다 ! 

(0, 23)
(1, 12)
(2, 36)
(3, 53)
(4, 19)

"""
#대괄호 리스트 소괄호 튜플

b=(1,2,3,4,5)
print(b)

#튜플과 리스트의 차이는 ? 새로운 값을 할당 할때 에러가 난다 ! (튜플은 절대 변경이 불가능)

for x in enumerate(a):
    print(x[0],x[1])
print()

for idx,val in enumerate(a):
    print(idx,val)
print()

#a 라는 리스트를 하나씩 하나씩 접근 (x에는 하나씩 값이 바뀌면서 들어감 !)

if all(60>x for x in a): #all은 모든 조건이 참 일때만 참이다 
    print("YES")
else:
    print("NO")

print("---구분선----")

if any(11>x for x in a): #any는  모든 조건이 한번이라도 참 일때 참이다 
    print("YES")
else:
    print("NO")





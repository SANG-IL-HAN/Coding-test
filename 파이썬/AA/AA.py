import sys
#sys.stdin=open("input.txt", "rt")

n, k= map(int, input().split())
a=list(map(int,input().split()))

#중복제거 set() 은 중복이 없다/순서가 없다 는 특징을 지니고 있는 자료형이다 .
#바꾸기 위해서는 list()함수에 넣어서 변환 해야한다.

"""
♣ Set 자료형의 내부 함수

출처: https://yeolco.tistory.com/87 [열코의 프로그래밍 일기]

set1 = set([1, 2, 3])

add() : set1.add(4) # {1, 2, 3, 4} 출력

update() :  set1.update([4, 5, 6]) # {1, 2, 3, 4, 5, 6} 출력

remove() : set1.remove(3) # {1, 2} 출력

clear() : set1.clear() # set() 출력(빈 집합)

union() : set3 = set1.union(set2) # {1, 2, 3, 4, 5} 출력, set1 | set2 과 같음

intersection() : set1.intersection(set2).intersection(set3) # {2} 출력, set1 & set2 & set3 과 같음

difference() : set3 = set1.difference(set2) # {1} 출력, set1 - set2와 같음

"""
res=set()

for x in range(n):
        for y in range(x+1,n):
                for z in range(y+1,n):
                        res.add(a[x]+a[y]+a[z])
                        
res=list(res)
res.sort(reverse=True)

print(res[k-1])


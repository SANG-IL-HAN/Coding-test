#람다 함수

"""
def plus_one(x):
    return x+1

print(plus_one(1))

#람다 함수 사용 이유 
plus_two=lambda x: x+2

print(plus_two(1))

"""
#map 함수 -> map(함수명,자료형)
def plus_one(x):
    return x+1

a=[1,2,3]
print(list(map(plus_one,a)))
print(list(map(lambda x : x+1 ,a)))

#모든 변수가 해당 함수의 영향을 받을 수 있다. ! 

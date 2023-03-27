import sys

A = list()
B = list()
cnt = int(input())

for i in range(0, cnt):
    # sys.stdin.readline(): 속도 향상
    a, b = map(int, sys.stdin.readline().split())
    A.append(a)
    B.append(b)

for i in range(0, cnt):
    print(f"Case #{i+1}: {A[i]} + {B[i]} = {A[i]+B[i]}")

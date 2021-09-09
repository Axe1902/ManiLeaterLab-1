import random

def vector(array, sd, st):
    summa = 0
    for i in range(st):
        for j in range(sd):
            summa += array[i][j]
            if j == sd-1:
                print("Сумма элементов %d-ой строки"%(i+1), summa)

print("Введите минимальный элемент массива:", end=" ")
minimum = int(input())
print("Введите максимальный элемент массива:", end=" ")
maximum = int(input())
print("Введите колличество строк:", end=" ")
line = int(input())
print("Введите колличество столбцов:", end=" ")
column = int(input())

masiv = [[random.randint(minimum, maximum) for j in range(column)] for i in range(line)]

for i in masiv: print(i)

vector(masiv, column, line)
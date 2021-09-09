import random

array = [random.randint(1, 10) for i in range(10)]
top = array[0]
bottom = array[0]

for i in range(10):
    if (array[i] > top):
        top = array[i]

    elif (array[i] < bottom):
        bottom = array[i]

print(array)
print(top - bottom)
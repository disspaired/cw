name = input("Введите ваше имя: ")
age = int(input("Введите ваш возраст: "))
print(f"Привет, {name}! Тебе {age} лет.")

num1 = float(input("Введите первое число: "))
num2 = float(input("Введите второе число: "))
num3 = float(input("Введите третье число: "))
total = num1 + num2 + num3
print(f"Сумма чисел: {total}")

number = int(input("Введите число: "))
if number % 2 == 0:
    print("Число чётное")
else:
    print("Число нечётное")

num1 = float(input("Введите первое число: "))
num2 = float(input("Введите второе число: "))

if num1 > num2:
    print(f"Большее число: {num1}")
elif num2 > num1:
    print(f"Большее число: {num2}")
else:
    print("Числа равны")

age = int(input("Введите ваш возраст: "))
if age >= 18:
    print("Вы можете получить водительские права")
else:
    print("Вы ещё не можете получить водительские права")

n = int(input("Введите число N: "))
for i in range(1, n + 1):
    print(i)

word = input("Введите слово: ")
for letter in word:
    print(letter)

n = int(input("Введите число N: "))
total = 0
for i in range(1, n + 1):
    total += i
print(f"Сумма чисел от 1 до {n}: {total}")

total = 0
while True:
    number = float(input("Введите число (отрицательное для завершения): "))
    if number < 0:
        break
    total += number
print(f"Сумма положительных чисел: {total}")

number = int(input("Введите число для таблицы умножения: "))
i = 1
while i <= 10:
    print(f"{number} × {i} = {number * i}")
    i += 1


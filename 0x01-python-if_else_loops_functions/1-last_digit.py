#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    last_digit = number % -10
else:
    last_digit = number % 10
print('Last digit of', end=' ')
if last_digit > 5:
    print(number, 'is', last_digit, 'and is greater than 5')
elif last_digit == 0:
    print(number, 'is', last_digit, 'and is 0')
else:
    print(number, 'is', last_digit, 'and is less than 6 and not 0')

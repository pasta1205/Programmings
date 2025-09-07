num = abs(int(input('Enter a no.: ')))
digit = 1
while(num>9):
    num //= 10
    digit += 1
print(digit)
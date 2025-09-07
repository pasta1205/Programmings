n= int(input('Enter a no.:'))
fact=1
for i in range(n,0,-1):
    fact *= i
print('Factorial of the entered no. is:',fact)
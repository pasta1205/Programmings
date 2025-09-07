n= int(input('Enter a No.: '))
for i in range(n+1):
    for j in range(n-i):
        print(' ', end=' ')
    for k in range(i):
        print('*', end=' ')
    print('\n')
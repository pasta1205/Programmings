num = int(input('Enter a Real no.: '))
absNum = abs(num)
rev = 0
while(absNum>0):
    n= absNum % 10
    rev = rev * 10 + n
    absNum //= 10
if(num<0):
    rev = -rev
if(num==rev):
    print('Palindrome!!')
else:
    print('Not Palindrome!!')
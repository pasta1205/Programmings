word= str(input('Enter a word:'))
maxlength=0
while(word!='-1'):
    count = 0
    for l in word:
        count += 1
    if (count>maxlength):
        maxlength= count
    word= str(input('Enter a word:'))
print(maxlength)
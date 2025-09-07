alpha= 'abcdefghijklmnopqrstuvwxyz'
s= 'pasta'
t= ''
i=0
t= t+ (alpha[(((alpha.index(s[i]))+1)%26)])
t= t+ (alpha[(((alpha.index(s[i+1]))+1)%26)])
t= t+ (alpha[(((alpha.index(s[i+2]))+1)%26)])
t= t+ (alpha[(((alpha.index(s[i+3]))+1)%26)])
t= t+ (alpha[(((alpha.index(s[i+4]))+1)%26)])
print(t)
# def swap_first_and_last_chars(s):
#     if len(s) < 2:
#         return s
#     return s[-1] + s[1:-1] + s[0]

# p= 'world'
# print(swap_first_and_last_chars(p))

# def add_first_three_items_to_the_last(l):
#     l1= l[:3]
#     r= l + l1
#     return r

# f= [1,4,4,78,97,12]
# print(add_first_three_items_to_the_last(f))


# l= [1,2,4,2,6,45]
# s= {1,45,4,2}
# flag= True
# for e in s:
#     if (e not in l):
#         flag= False
# print(flag)


# def swap_except_middle_three(s):
#     i=len(s)//2
#     return s[i+2:len(s)+1]+s[i-1:i+2]+ s[:i-1]

# a= 'aeroplane'
# print(swap_except_middle_three(a))

# def interleave_lists(l1, l2, l3):
#     addl=[]
#     for i in range(len(l1)):
#         addl.append(l1[i])
#         addl.append(l2[i])
#         addl.append(l3[i])
#     return addl

# s= [1,3,5]
# t= ['a','b','c']
# u= [(1,1),(2,2),(3,3)]

# print(interleave_lists(s,t,u))
   
# def is_all_same_word_twice(l):
#     part= l.split('-')
#     flag = False
#     if (part[0]==part[1]):
#         flag=True
#     else:
#         flag=False
#     return flag

# for string in strings:
#     parts = string.split('-')
#     if len(parts) != 2 or parts[0] != parts[1]:
#         return False
# return True

# Function to capitalize the whole text


def capitalize_text(text):
    return text.upper()

# Example usage
text = input("Enter your text: ")
capitalized_text = capitalize_text(text)
print("Capitalized Text:\n", capitalized_text)

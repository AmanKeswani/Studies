st=input()
u=l=a=d=0
for i in range(len(st)):
    if (st[i].isupper()):
        u=u+1
    if (st[i].islower()):
        l=l+1
    if (st[i].isalpha()):
        a=a+1
    if (st[i].isdigit()):
        d=d+1
print('No. of uppercase letters',u)
print('No. of lowercase letters',l)
print('No. of alphabets',a)
print('No. of digits',d)

#this program is used to sort out all the upper case, lower case characters, all the alphabets and digits in the entered string

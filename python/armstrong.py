num = int(input("Enter a number:"))
res = 0
temp =num

while temp>0:
    digit = temp%10
    res += digit**3
    temp//=10
    if(num<=0):
        break
if num == res:
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")

num = int(input("Enter the limit"))
num1, num2 = 0,1
print("Fibonacci series :-",num1,num2)
for i in range(2, num):
    num3=num1+num2
    num1=num2
    num2=num3
    print(num3)

print("Enter 1- Addition \n 2- Subtraction \n 3- Multiplication \n 4- Division \n 5- Find the Remainder")
user = int(input())
no1 = int(input("Enter the first number - "))
no2 = int(input("Enter the second number - "))
result = 0
def add():
    result = no1+no2
    return result
def subtract():
    result = no1-no2
    return result
def multiply():
    result = no1*no2
    return result
def divide():
    result = no1/no2
    return result
def remainder():
    result = no1%no2
    return result

if user==1:
    print("The sum of the two numbers is : ", add())
elif user==2:
    print("The number after subtraction is : ", subtract())
elif user==3:
    print("The product of the two numbers is : ", multiply())
elif user==4:
    print("The number after division is : ", divide())
elif user==5:
    print("The remainder is : ", remainder())
else:
    print("Invalid Input.")



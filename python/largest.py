a = int(input("Enter the first number"))
b = int(input("Enter the second number"))
c = int(input("Enter the third number"))

if ( a==b and b==c and c==a):
    print("All numbers are equal")
elif( a>b and a>c):
    print("a is the largest number: ",a )
elif( b>a and b>c):
    print("b is the largest number")
elif( c>a and c>b):
    print("c is the largest number")
else:
    print("Ehhhh idk")

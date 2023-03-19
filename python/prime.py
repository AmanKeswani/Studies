num = int(input("Enter a number: "))
conf=False
if(num==1):
    print("It is not a prime number")
else:
    for i in range(2,num):
        if num%i==0:
            conf=True
            break
    if conf==True:
        print("It is not a prime number")
    else:
        print("It is a prime number")
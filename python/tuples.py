#creating an mepty tuple
emp_tup = ()
print("Empty tuple:", emp_tup)

#Creatig tuple having integers
in_tup =(4,5,43,69,420)
print("Tuple with integers:", in_tup)

#Creating a tuple having objects of different data types
mix_tup = (4, "Python", 8.9)
print("Tuple with different data types:", mix_tup)

#create a nested tuple
nest_tup = ("Python", {4:5,6:9,8:3},{5,3,5,6})
print("A nested tuple:", nest_tup)

#displaying the tuple
#you can create tuple without parenthesis too
tul = 4,5,6
print(tul)

#Checking the data type of object tul
print(type(tul))

#Trying to modify tul
try:
    tul[1]=69
except:
    print(TypeError)

#A tuple has to have a comma after it's value...even in 1 value tuples
single_tuple = ("Tuple")
print(type(single_tuple))

#The right way to do the above

single_tuple = ("Tuple",)
print(type(single_tuple))

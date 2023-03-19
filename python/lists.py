#lists practical

thislist = ["apple", "banana", "cherry"]
print(len(thislist))

#lists can have different data types

list1= ["abc", 34, True, 40, "Male"]

#lists are defined as objects with the data type 'list':<class 'list'>

mylist= ["apple", "banana", "cherry"]
print(type(mylist))

#It is also possible to use the list() constructor when creating a new list 
thislist= list(("Apple", "Banana", "cherry"))
print(thislist)

#List items are indexed and you can access them by referring to the index number:
thislist=["apple", "banana", "cherry"]
print(thislist[1])

#Negative indexing means start from the end
#-1 refers to the last item, -2 refers to the second last item etc.

thislist=["apple","banana","cherry"]
print(thislist[-1])

#You can specify a range of indexes by specifying where to start and where to end the range, it will return a new list

thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5])

#by leaving out the start value the range will start at the first item:

thislist = ["apple","banana", "cherry","orange","kiwi", "melon", "mango"]
print(thislist[:4])

thislist = ["apple","banana", "cherry","orange","kiwi", "melon", "mango"]
print(thislist[-4:1])

#To determine if a specified item is present in a list use the in keyword:

thislist = ["apple", "banana", "cherry"]
if "apple" in thislist:
    print("Apple list bhitare achi")  
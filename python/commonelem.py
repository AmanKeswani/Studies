def commem(list1,list2):
    set1=set(list1)
    set2=set(list2)

    if(set1 & set2):
        print("The common elements are:", set1 & set2)
    else:
        print("No common elements")


list1 = []
list2 = []
print("input 4 numbers each for two lists")
for i in range(0, 4):
	ele = int(input())
	list1.append(ele)
for i in range(0, 4):
	elem = int(input())
	list2.append(elem)

commem(list1,list2)
def pushitem(a, val):
  a.append(val)
  print("Element Pushed!")
def popitem(a):
  val=a.pop()
  print("Element Popped!")
  print("Popped Item -->", val)
def peek(a):
  index= len(a)-1
  print("Element Peeked!")
  print("Peeked Element=",a[index])
def display(a):
  for i in range(len(a)-1,-1,-1):
    print(a[i])

#__Main__
a = []
while True:
  Choice = int(input("1 - Push \n 2 - Pop \n 3 - Peek \n 4 - Display \n 5 - Exit \n Enter : "))
  if Choice == 1:
    val = int(input("Enter no. to Push"))
    pushitem(a, val)
  elif Choice == 2:
    if len(a)==0:
      print("Empty Stack")
    else:
      popitem(a)
  elif Choice == 3:
    if len(a) == 0:
      print("Empty stack")
    else:
      peek(a)
  elif Choice == 4:
    if len(a)==0:
      print("Empty stack")
    else:
      display(a)
  else:
    break
  

#This is a program which checks if a word is palindrome or not
#A palindrome word/phrase/sequence is something that reads the same backwards as forwards
#Example :- malayalam; which is the same if you read it backwards


print("Enter a word to check if it is palindrome or not \n It should either be in upper case in it's entirity or in lower case")
st=input()
st2=st[::-1]
if(st==st2):
    print('Palindrome')
else:
    print('Not Palindrome')

import string
import random
if __name__ == "__main__":
    str1 = string.ascii_lowercase
    str2 = string.ascii_uppercase
    str3 = string.digits
    leng = int(input("Enter password length\n"))
    wordleng = []
    wordleng.extend(list(str2))
    wordleng.extend(list(str3))
    wordleng.extend(list(str1))
    random.shuffle(wordleng)
    print("Your password is:")
    print("".join(wordleng[0:leng]))
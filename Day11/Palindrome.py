

def palindrome(s):
    start = 0
    last = len(s)-1
    mid = (start+last)/2
    flag = 0

    while(start<=mid):
        if(s[start]==s[last]):
            start = start+1
            last = last-1
        else:
            flag =1
            break

    if flag == 0:
        return True
    else:
        return False

s = input("Enter a string : ")
print(palindrome(s))

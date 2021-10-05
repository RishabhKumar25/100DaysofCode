#python program to swap two elements in list

def swapFunc(num,pos1,pos2):
    temp = num[pos1]
    num[pos1]=num[pos2]
    num[pos2]=temp
    return num


num = [10,20,30,40]
pos1 = input("Enter First Position")
pos2 = input("Enter Second Position")

pos1 = int(pos1)
pos2 = int(pos2)

print(swapFunc(num,pos1,pos2))
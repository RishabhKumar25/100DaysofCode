#python program to intechange first and last element in a list

def func(l1):
    s = l[0]
    l1[0] = l[-1]
    l1[-1] = s
    print("List After Interchanging :")

    # for x in l:
    #     print(x)
    print(l)


l = ["Karn","Subham","Hardik","Rishabh"]
print("List Before Intechanging : \n")
# for i in l:
#     print(i)
print(l)
func(l)
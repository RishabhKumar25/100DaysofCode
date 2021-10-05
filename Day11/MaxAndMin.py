

def maximum(num1,num2):
    if num1>num2 : return num1
    else : return num2


def minimum(num1,num2):
    if num1<num2 : return num1
    else : return num2

x = input("Enter first number")
y = input("Enter second number")

x = int(x)
y = int(y)

print("Maximum of two numbers : ",maximum(x,y))
print("Minimum of two numbers : ",minimum(x,y))


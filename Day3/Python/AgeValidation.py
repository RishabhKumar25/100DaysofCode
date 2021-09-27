age = input("Enter Your Age : ")
if int(age)>=18:
    print("Eligible to Vote")
else:
    print("Wait for",int(age)-18,"More Years to Vote")
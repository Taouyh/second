balance = eval(input("Please input the balance: "))
annualInterstProfix = eval(input("Please input the profix: "))
if (balance < 0):
    print("Your balabce is not legal.")
else:
    interest = balance * annualInterstProfix
    print("Your interest is :",interest)

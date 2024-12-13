try:
    income = float(input("Enter your annual income here: "))
    if 10000>=income>=0:
        print("Your income is not taxed at " + "{:.2f}".format(income))
    elif income>10000:    
        print("Your income after tax is " + "{:.2f}".format(income-income*.2))
    elif income<0:
        print("Oof. You're in debt.")
except ValueError:
    print("That's not a number.")
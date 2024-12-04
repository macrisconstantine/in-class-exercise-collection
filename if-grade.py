while True:
    try:
        score = float(input("\nEnter a GPA from 0.0 to 4.0: "))
        if 4.0>=score > 3.75:
            print("CONGRATS")
        elif 3.5<=score<=3.75:
            print("GREAT")
        elif 3.0<=score<3.5:
            print("VERY GOOD")
        elif 2.5<=score<=3.0:
            print("GOOD")
        elif 0<=score<2.5:
            print("YOU CAN DO BETTER")
        else:
            print("Not a valid GPA number.")
    except ValueError:
        print("Invalid Input")
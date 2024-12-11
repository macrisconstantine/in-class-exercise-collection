
name = input("Enter your name: ")
char = ("_" * (len(name)-2))
print(name.replace(name[1:-1], char))
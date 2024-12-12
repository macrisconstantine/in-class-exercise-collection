
def findLongestLine():
    file = open("test.txt","r")
    max_string = ""
    for line in file:
        if len(line)>len(max_string):
            max_string = line
    print("the longest line is with %d chars is %s" %( len(max_string), max_string ))
    """
    words = file.readlines()
    max_char = 0
    for i in range(1,len(words)):
        if len(words[i])>len(words[max_char]):
            max_char = i
    print("the longest line is with %d chars is %s" %( len(words[max_char]), words[max_char] ))
    """
    file.close()

findLongestLine()

def separateSmallFromLarge(L,x):
    """
    this puts all numbers smaller than x to the front of the list and all those bigger than x to the back
    """
    L1=[]
    L2=[]
    for num in L:
        if num<x:
            L1.append(num)
        elif num>x:
            L2.append(num)
    return L1+L2

L=[1, 50, 0, 43, 24, 13, 47, 38, 6]
x=25
print(separateSmallFromLarge(L,x))
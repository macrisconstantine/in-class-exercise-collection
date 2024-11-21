def print_ceasar_cypher(message,shift_value):
    shift_value = shift_value % 26
    message = message.upper()
    for c in message:
        i = ord(c)+shift_value
        if i>ord('Z'):
            i-=26
        print(chr(i),end='')
    print()

print_ceasar_cypher("Hello",3)
print_ceasar_cypher("Zoo",3)

print_ceasar_cypher("KHOOR",-3)
print_ceasar_cypher("CRR",-3)



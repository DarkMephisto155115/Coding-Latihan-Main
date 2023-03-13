# str initialization
char = input("Masukkan input: ")
increment = int(input("Masukkan Increment: "))
char_2 = char
# converting char into int
i = ord(char[0])

# we can add any number if we want
# incrementing
i += increment

# casting the resultant int to char
# we will get 'u'
char = chr(i)

print(f"Alphabet after {char_2} is {char}")

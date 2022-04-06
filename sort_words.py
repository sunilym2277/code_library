print("Enter a string with multiple words")
my_str=input()

words = my_str.split()
words.sort()

print("The sorted words are:")
for word in words:
   print(word)

str1 = "Hello"  # "Hello" is interned
str2 = "Hello"  # Reuses the interned "Hello"

print(str1 is str2)  # True (both variables reference the same interned "Hello")

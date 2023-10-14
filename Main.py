str = "Hello, Hello, World!"
target = 'l'
replacement = 'X'

modified_str = ''.join([c if c != target else replacement for c in str])

print("Modified string:", modified_str)

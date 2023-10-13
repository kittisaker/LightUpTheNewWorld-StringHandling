str = "Hello, World!"
prefix = "Hello"
suffix = "World!"

hasPrefix = str.startswith(prefix)
hasSuffix = str.endswith(suffix)

if hasPrefix:
    print("String has the prefix.")
else:
    print("String does not have the prefix.")

if hasSuffix:
    print("String has the suffix.")
else:
    print("String does not have the suffix.")

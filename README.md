# LightUpTheNewWorld-StringHandling : chapter 4 String Searching Methods

## 1. Searching for a Character or Substring
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    string substring = "World";

    size_t found = str.find(substring);

    if (found != string::npos) {
        cout << "Substring found at position: " << found << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World!";
        String substring = "World";

        int found = str.indexOf(substring);

        if (found != -1) {
            System.out.println("Substring found at position: " + found);
        } else {
            System.out.println("Substring not found.");
        }
    }
}
```

```typescript
let str: string = "Hello, World!";
let substring: string = "World";

let found: number = str.indexOf(substring);

if (found !== -1) {
    console.log(`Substring found at position: ${found}`);
} else {
    console.log("Substring not found.");
}
```

```python
str = "Hello, World!"
substring = "World"

if substring in str:
    position = str.find(substring)
    print(f"Substring found at position: {position}")
else:
    print("Substring not found.")
```

## 2. Searching for the Last Occurrence
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World! Hello!";
    string substring = "Hello";

    size_t found = str.rfind(substring);

    if (found != string::npos) {
        cout << "Last occurrence found at position: " << found << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World! Hello!";
        String substring = "Hello";

        int found = str.lastIndexOf(substring);

        if (found != -1) {
            System.out.println("Last occurrence found at position: " + found);
        } else {
            System.out.println("Substring not found.");
        }
    }
}
```

```typescript
let str: string = "Hello, World! Hello!";
let substring: string = "Hello";

let found: number = str.lastIndexOf(substring);

if (found !== -1) {
    console.log(`Last occurrence found at position: ${found}`);
} else {
    console.log("Substring not found.");
}
```

```python
str = "Hello, World! Hello!"
substring = "Hello"

found = str.rfind(substring)

if found != -1:
    print(f"Last occurrence found at position: {found}")
else:
    print("Substring not found.")
```

## 3. Checking If a String Contains a Sequence
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    string sequence = "World";

    if (str.find(sequence) != string::npos) {
        cout << "String contains the sequence." << endl;
    } else {
        cout << "String does not contain the sequence." << endl;
    }

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World!";
        String sequence = "World";

        if (str.contains(sequence)) {
            System.out.println("String contains the sequence.");
        } else {
            System.out.println("String does not contain the sequence.");
        }
    }
}
```

```typescript
let str: string = "Hello, World!";
let sequence: string = "World";

if (str.includes(sequence)) {
    console.log("String contains the sequence.");
} else {
    console.log("String does not contain the sequence.");
}
```

```python
str = "Hello, World!"
sequence = "World"

if sequence in str:
    print("String contains the sequence.")
else:
    print("String does not contain the sequence.")
```

## 4. Checking Prefix and Suffix
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    string prefix = "Hello";
    string suffix = "World!";

    bool hasPrefix = str.compare(0, prefix.length(), prefix) == 0;
    bool hasSuffix = str.compare(str.length() - suffix.length(), suffix.length(), suffix) == 0;

    if (hasPrefix) {
        cout << "String has the prefix." << endl;
    } else {
        cout << "String does not have the prefix." << endl;
    }

    if (hasSuffix) {
        cout << "String has the suffix." << endl;
    } else {
        cout << "String does not have the suffix." << endl;
    }

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World!";
        String prefix = "Hello";
        String suffix = "World!";

        boolean hasPrefix = str.startsWith(prefix);
        boolean hasSuffix = str.endsWith(suffix);

        if (hasPrefix) {
            System.out.println("String has the prefix.");
        } else {
            System.out.println("String does not have the prefix.");
        }

        if (hasSuffix) {
            System.out.println("String has the suffix.");
        } else {
            System.out.println("String does not have the suffix.");
        }
    }
}
```

```typescript
let str: string = "Hello, World!";
let prefix: string = "Hello";
let suffix: string = "World!";

let hasPrefix: boolean = str.startsWith(prefix);
let hasSuffix: boolean = str.endsWith(suffix);

if (hasPrefix) {
    console.log("String has the prefix.");
} else {
    console.log("String does not have the prefix.");
}

if (hasSuffix) {
    console.log("String has the suffix.");
} else {
    console.log("String does not have the suffix.");
}
```

```python
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
```

## 5. Matching Regular Expressions
```cpp
#include <iostream>
#include <regex>
#include <string>

int main() {
    std::string text = "The quick brown fox jumps over the lazy dog.";
    std::regex pattern("quick.*dog");

    if (std::regex_search(text, pattern)) {
        std::cout << "Pattern found in the text." << std::endl;
    } else {
        std::cout << "Pattern not found in the text." << std::endl;
    }

    return 0;
}
```

```java
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class RegexMatchExample {
    public static void main(String[] args) {
        String text = "The quick brown fox jumps over the lazy dog.";
        String pattern = "quick.*dog";

        Pattern regex = Pattern.compile(pattern);
        Matcher matcher = regex.matcher(text);

        if (matcher.find()) {
            System.out.println("Pattern found in the text.");
        } else {
            System.out.println("Pattern not found in the text.");
        }
    }
}
```

```typescript
let text: string = "The quick brown fox jumps over the lazy dog.";
let pattern: string = "quick.*dog";

let regex: RegExp = new RegExp(pattern);

if (regex.test(text)) {
    console.log("Pattern found in the text.");
} else {
    console.log("Pattern not found in the text.");
}
```

```python
import re

text = "The quick brown fox jumps over the lazy dog."
pattern = r"quick.*dog"

if re.search(pattern, text):
    print("Pattern found in the text.")
else:
    print("Pattern not found in the text.")
```

---
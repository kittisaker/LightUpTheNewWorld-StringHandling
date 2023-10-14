# LightUpTheNewWorld-StringHandling : chapter 5 String Modifying Methods with Examples

## 1. concat(String str)
See chapter-3

## 2. replace string
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World! Hello!";
    string target = "Hello";
    string replacement = "Hi";

    size_t pos = str.find(target);
    while (pos != string::npos) {
        str.replace(pos, target.length(), replacement);
        pos = str.find(target, pos + replacement.length());
    }

    cout << str << endl; // Output: "Hi, World! Hi!"
    
    return 0;
}

```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World! Hello!";
        String target = "Hello";
        String replacement = "Hi";

        String result = str.replace(target, replacement);

        System.out.println(result); // Output: "Hi, World! Hi!"
    }
}
```

```Typescript
let str: string = "Hello, World! Hello!";
let target: string = "Hello";
let replacement: string = "Hi";

let result: string = str.replace(new RegExp(target, 'g'), replacement); // 'g' : global" flag

console.log(result); // Output: "Hi, World! Hi!"
```

```python
str = "Hello, World! Hello!"
target = "Hello"
replacement = "Hi"

result = str.replace(target, replacement)

print(result)  # Output: "Hi, World! Hi!"
```

## 3. substring
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    // Extract a substring from index 7 to the end
    string substring = str.substr(7);

    cout << substring << endl; // Output: "World!"
    
    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World!";
        
        // Extract a substring from index 7 to the end
        String substring = str.substring(7);

        System.out.println(substring); // Output: "World!"
    }
}
```

```typescript
let str: string = "Hello, World!";

// Extract a substring from index 7 to the end
let substring: string = str.slice(7);

console.log(substring); // Output: "World!"
```

```python
str = "Hello, World!"

# Extract a substring from index 7 to the end
substring = str[7:]

print(substring)  # Output: "World!"
```

## 4. Lower case and Upper case
```java
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str = "Hello, World!";

    // Convert to lowercase
    for (char &c : str) {
        c = tolower(c);
    }

    cout << "Lowercase: " << str << endl;

    // Convert to uppercase
    for (char &c : str) {
        c = toupper(c);
    }

    cout << "Uppercase: " << str << endl;

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, World!";

        // Convert to lowercase
        String lowercase = str.toLowerCase();
        System.out.println("Lowercase: " + lowercase);

        // Convert to uppercase
        String uppercase = str.toUpperCase();
        System.out.println("Uppercase: " + uppercase);
    }
}
```

```Typescript
let str: string = "Hello, World!";

// Convert to lowercase
let lowercase: string = str.toLowerCase();
console.log("Lowercase: " + lowercase);

// Convert to uppercase
let uppercase: string = str.toUpperCase();
console.log("Uppercase: " + uppercase);
```

```python
str = "Hello, World!"

# Convert to lowercase
lowercase = str.lower()
print("Lowercase:", lowercase)

# Convert to uppercase
uppercase = str.upper()
print("Uppercase:", uppercase)
```

## 5. Trim String
```cpp
#include <iostream>
#include <string>
using namespace std;

string trim(const string& str) {
    size_t first = str.find_first_not_of(" \t\n\r");
    size_t last = str.find_last_not_of(" \t\n\r");
    
    if (first == string::npos) {
        return "";
    }

    return str.substr(first, (last - first + 1));
}

int main() {
    string str = "  Hello, World!  ";

    string trimmed = trim(str);

    cout << "Trimmed: \"" << trimmed << "\"" << endl;

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "  Hello, World!  ";
        
        String trimmed = str.trim();
        
        System.out.println("Trimmed: \"" + trimmed + "\"");
    }
}
```

```typescript
let str: string = "  Hello, World!  ";

let trimmed: string = str.trim();

console.log("Trimmed: \"" + trimmed + "\"");
```

```python
str = "  Hello, World!  "

trimmed = str.strip()

print("Trimmed: \"" + trimmed + "\"")
```

## 6. Split String
```cpp
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str = "apple,banana,cherry";
    vector<string> tokens;
    istringstream ss(str);
    string token;

    while (getline(ss, token, ',')) {
        tokens.push_back(token);
    }

    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}
```

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str = "apple,banana,cherry";
    vector<string> tokens;
    size_t start = 0;
    size_t end = 0;

    while ((end = str.find(",", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    for (const string& t : tokens) {
        cout << t << endl;
    }

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "apple,banana,cherry";
        String[] tokens = str.split(",");

        for (String token : tokens) {
            System.out.println(token);
        }
    }
}
```

```typescript
let str: string = "apple,banana,cherry";
let tokens: string[] = str.split(",");

for (let token of tokens) {
    console.log(token);
}
```

```python
str = "apple,banana,cherry"
tokens = str.split(",")

for token in tokens:
    print(token)
```

## 7. Replace All Char

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, Hello, World!";
    char target = 'l';
    char replacement = 'X';

    for (char &c : str) {
        if (c == target) {
            c = replacement;
        }
    }

    cout << "Modified string: " << str << endl; // Modified string: HeXXo, HeXXo, WorXd!

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str = "Hello, Hello, World!";
        char target = 'l';
        char replacement = 'X';

        String modifiedStr = str.replaceAll(String.valueOf(target), String.valueOf(replacement));

        System.out.println("Modified string: " + modifiedStr);   // Modified string: HeXXo, HeXXo, WorXd!
    }
}
```

```typescript
let str: string = "Hello, Hello, World!";
let target: string = 'l';
let replacement: string = 'X';

let parts: string[] = str.split(target);
let modifiedStr: string = parts.join(replacement);

console.log("Modified string: " + modifiedStr);     // Modified string: HeXXo, HeXXo, WorXd!
```

```python
str = "Hello, Hello, World!"
target = 'l'
replacement = 'X'

modified_str = ''.join([c if c != target else replacement for c in str])

print("Modified string:", modified_str)
```

## 8. Join String

```cpp
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World";
    
    stringstream ss;
    ss << str1 << "-" << str2;
    
    string joined = ss.str();

    cout << joined << endl; // Output: "Hello-World"

    return 0;
}
```

```java
public class JoinStringWithHyphenExample {
    public static void main(String[] args) {
        String str1 = "Hello";
        String str2 = "World";
        String joined = String.join("-", str1, str2);

        System.out.println(joined); // Output: "Hello-World"
    }
}
```

```typescript
let str1: string = "Hello";
let str2: string = "World";
let joined: string = [str1, str2].join("-");

console.log(joined); // Output: "Hello-World"
```

```python
str1 = "Hello"
str2 = "World"
joined = "-".join([str1, str2])

print(joined)  # Output: "Hello-World"
```

---
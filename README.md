# LightUpTheNewWorld-StringHandling : chapter 3 String Special Operations

## 1. String Literals
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    const char* cppStringLiteral = "Hello, C++!"; // C++ string literal
    string cppString = "Hello, C++!"; // C++ string object

    cout << cppStringLiteral << endl;
    cout << cppString << endl;

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String javaStringLiteral = "Hello, Java!"; // Java string literal

        System.out.println(javaStringLiteral);
    }
}
```

```typescript
let typeScriptStringLiteral: string = "Hello, TypeScript!"; // TypeScript string literal

console.log(typeScriptStringLiteral);
```

```python
python_string_literal = "Hello, Python!"  # Python string literal

print(python_string_literal)
```

## 2. String Concatenation
```cpp
#include <iostream>
#include <string>
using namespace  std;

int main() {
    string str1 = "Hello, ";
    string str2 = "C++!";
    
    // Using the + operator
    std::string result = str1 + str2;
    
    // Using the += operator
    str1 += str2;
    
    cout << result << endl;  // Output: "Hello, C++!"
    cout << str1 << endl;    // Output: "Hello, C++!"
    
    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        String str1 = "Hello, ";
        String str2 = "Java!";
        
        // Using the + operator
        String result = str1 + str2;
        
        // Using the concat method
        String result2 = str1.concat(str2);
        
        System.out.println(result);  // Output: "Hello, Java!"
        System.out.println(result2); // Output: "Hello, Java!"
    }
}
```

```typescript
let str1: string = "Hello, ";
let str2: string = "TypeScript!";

// Using the + operator
let result: string = str1 + str2;

console.log(result); // Output: "Hello, TypeScript!"
```

```python
str1 = "Hello, "
str2 = "Python!"

# Using the + operator
result = str1 + str2

print(result)  # Output: "Hello, Python!"
```

## 3. String Concatenation with Other Data Types
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number = 42;
    string str = "The answer is: " + to_string(number);

    cout << str << endl;  // Output: "The answer is: 42"

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        int number = 42;
        String result = "The answer is: " + number;

        System.out.println(result);  // Output: "The answer is: 42"
    }
}
```

```typescript
let number: number = 42;
let result: string = `The answer is: ${number}`;

console.log(result); // Output: "The answer is: 42"
```

```python
number = 42
result = f"The answer is: {number}"

print(result)  # Output: "The answer is: 42"
```

---
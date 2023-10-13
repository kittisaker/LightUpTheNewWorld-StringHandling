# LightUpTheNewWorld-StringHandling : chapter 1 String Buffer

## C++ (Using std::stringstream)
In C++, you can use std::stringstream to build and manipulate strings efficiently.
```cpp
#include <iostream>
#include <sstream>
using namespace std;

int main(){
    stringstream ss;
    ss << "Hello";
    ss << " ";
    ss << "World";
    
    string result = ss.str();

    cout << result << endl; // Output: "Hello World"

    return 0;
}
```

## Java (Using StringBuffer and StringBuilder)
In Java, you can use StringBuffer for thread-safe operations and StringBuilder for non-thread-safe operations.

### Using StringBuffer:
```java
public class Main {
    public static void main(String[] args) {
        StringBuffer stringBuffer = new StringBuffer("Hello");
        stringBuffer.append(" ");
        stringBuffer.append("World");

        String result = stringBuffer.toString();
        System.out.println(result); // Output: "Hello World"
    }
}
```

### Using StringBuilder
```java
public class Main {
    public static void main(String[] args) {
        StringBuilder stringBuilder = new StringBuilder("Hello");
        stringBuilder.append(" ");
        stringBuilder.append("World");

        String result = stringBuilder.toString();
        System.out.println(result);     // Output: "Hello World"
    }
}
```

## TypeScript and Python (Using Arrays)
In TypeScript and Python, strings are immutable by default. You can work with arrays to simulate string building operations.

### TypeScript
```typescript
let mutableString: string[] = ['Hello'];
mutableString.push(' ');
mutableString.push('World');

const result = mutableString.join("");
console.log(result); // Output: "Hello World"
```

### Python
```python
mutable_string = ['Hello']
mutable_string.append(' ')
mutable_string.append('World');

result = ''.join(mutable_string)
print(result); # Output: "Hello World"
```

---
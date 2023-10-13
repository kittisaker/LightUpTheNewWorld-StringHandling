let mutableString: string[] = ['Hello'];
mutableString.push(' ');
mutableString.push('World');

const result = mutableString.join("");
console.log(result); // Output: "Hello World"

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

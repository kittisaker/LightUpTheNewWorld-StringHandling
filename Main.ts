let str: string = "Hello, Hello, World!";
let target: string = 'l';
let replacement: string = 'X';

let parts: string[] = str.split(target);
let modifiedStr: string = parts.join(replacement);

console.log("Modified string: " + modifiedStr);     // Modified string: HeXXo, HeXXo, WorXd!

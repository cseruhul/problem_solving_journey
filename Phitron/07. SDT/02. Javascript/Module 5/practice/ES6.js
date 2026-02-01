// Template Literals in ES6
// let arr = ['Ruhul', 'Amin', 'Roni', 'Younus', 'Rakib'];
// let i = 0;
// while (true) {
//     if (i >= arr.length) break;
//     console.log(`Welcome Mr. ${arr[i]}`);
//     i++;
// }

// Spread Operator in ES6

let number1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let number2 = [11, 12, 13, 14, 15, 16, 17, 18, 19, 20];

// console.log(Math.max());
console.log(Math.max(...number1, ...number2));

// const obj = {
//     name: "Ruhul Amin",
//     age: 32,
//     address: "Kushtia"
// }

// const { name, age, address } = obj;

// // console.log(name, age, address);
// console.log(name);
// console.log(age);
// console.log(address);


const arr = ['Ruhul Amin', 32, 'Kushtia'];
const [name, age, address] = arr;

console.log(name, age, address);
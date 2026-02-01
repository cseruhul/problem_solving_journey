var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
var ans = numbers[0];


numbers.forEach(element => {
    if (element > ans) {
        ans = element;
    }
});

console.log(`The greatest number of this array is: ${ans}.`);
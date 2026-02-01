var arr = [5, 12, 1, 19, 8, 3, 16, 7, 2, 20, 4, 10, 6, 17, 14, 13, 18, 15, 11, 9];

console.log("Array before sorting: ");
console.log(...arr);

const bubbleSort = () => {
    for (let i = 0; i < arr.length; i++) {
        for (let j = 1; j < arr.length; j++) {
            if (arr[j] < arr[j - 1]) {
                const temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

bubbleSort();
console.log("Array after sorting: ");
console.log(...arr);

// for (const item of arr) {
//     console.log(item);
// }
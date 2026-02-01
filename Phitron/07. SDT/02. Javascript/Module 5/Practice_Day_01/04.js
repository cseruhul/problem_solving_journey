const year = 2026;


if ((year % 100 != 0 && year % 4 == 0) || (year % 400 === 0)) {
    console.log(`${year} is a LeapYear.`);
} else {
    console.log(`${year} is not a LeapYear.`);
}
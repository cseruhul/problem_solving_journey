var result = 80;

if (result >= 0 && result <= 39) {
    console.log("You got F.");
}
else if (result >= 40 && result <= 49) {
    console.log("You got C.");
}
else if (result >= 50 && result <= 59) {
    console.log("You got B.");
}
else if (result >= 60 && result <= 69) {
    console.log("You got A-.");
}
else if (result >= 70 && result <= 79) {
    console.log("You got A.");
}
else if (result >= 80 && result <= 100) {
    console.log("You got A+.");
}
else {
    console.log("Invalid Input.");
}


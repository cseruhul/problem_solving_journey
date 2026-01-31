const target = document.getElementsByClassName('box');

console.log(target);

for (let i = 0; i < target.length; i++) {
    const element = target[i];
    element.style.backgroundColor = "green";
    if (element.innerText == 'Box-05') {
        element.style.backgroundColor = "red";
        element.style.color = "white";
        element.style.fontWeight = 'bold';
        element.style.fontSize = '30px';
    }
    console.log(element);
}
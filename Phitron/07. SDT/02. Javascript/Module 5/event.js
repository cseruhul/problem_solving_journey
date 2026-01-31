document.getElementById("handleAdd").addEventListener('click', (e) => {
    // console.log("Hello Boxx");
    const inputVal = document.getElementById("SearchBox").value;
    // console.log(inputVal);
    // alert("Bokacoda " + inputVal);

    const contianer = document.getElementById("comment-container");
    const p = document.createElement('p');
    // contianer.innerText = inputVal;
    p.classList.add('Child');
    p.innerText = `Hello Mr. ${inputVal}`;
    console.log(p);
    contianer.appendChild(p);

    const allComment = document.getElementsByClassName('Child');

    // console.log(allComment);
    for (const element of allComment) {
        element.addEventListener('click', (e) => {
            // console.log(e.target.parentNode);
            e.target.parentNode.removeChild(element);
        });
    }

});

// const handleSearch = (e) => {
//     console.log("Helo Clickk.");
// }
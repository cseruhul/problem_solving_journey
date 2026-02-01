const row = document.getElementById("row");
const drinkName = document.getElementById("drinkName");
const cartItemDiv = document.getElementById("cartItemDiv");
const modalId = document.getElementById("modalId");

const modalTitle = document.getElementById("modalTitle");
const modalImageID = document.getElementById('modalImageID');
const modalCategory = document.getElementById('modalCategory');
const modalAlcoholic = document.getElementById('modalAlcoholic');
const modalDetails = document.getElementById("modalDetails");

const count = document.getElementById("totalCartCount");


fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?f=a`)
    .then(response => response.json())
    .then(data => {
        const allDrinks = data.drinks ? data.drinks.length : 0;

        if (allDrinks != 0) {
            data.drinks.forEach(element => {
                const details = `${element.strInstructions} ${element.strInstructionsES} ${element.strInstructionsDE} ${element.strInstructionsFR} ${element.strInstructionsIT}`;
                // console.log(details);
                const div = document.createElement('div');
                div.classList.add("col-4");

                div.innerHTML = `
                    <div class="card mb-3">
                        <img src="${element.strDrinkThumb}" class="card-img-top" alt="...">
                        <div class="card-body text-center">
                            <h5 class="card-title">${element.strDrink}</h5>
                            <h6 class="card-title">Category: ${element.strCategory}</h6>
                            <p class="card-text">${details.slice(0, 15)}</p>
                            <button class="btn btn-success" onclick="addToCartFunction('${element.strDrinkThumb}','${element.strDrink}')">Add to Cart</button>
                            <button type="button" id="modalButton" class="btn btn-success" data-bs-toggle="modal" onclick="showModal('${element.strDrink}','${element.strDrinkThumb}','${element.strCategory}','${element.strAlcoholic}','${element.strInstructions}')" data-bs-target="#modalId">
                            Details
                            </button>
                        </div>
                    </div> 
                `
                row.appendChild(div);
            });
        }

    });



document.getElementById("searchButton").addEventListener("click", (e) => {
    const keyWord = drinkName.value;

    fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?s=${keyWord}`)
        .then(response => response.json())
        .then(data => {
            const allDrinks = data.drinks ? data.drinks.length : 0;

            row.innerHTML = '';
            if (allDrinks === 0) {
                const div = document.createElement('div');
                div.classList.add("container");

                div.innerHTML = `<h2>${keyWord} Not Found</h2>`
                row.appendChild(div);

            } else {
                data.drinks.forEach(element => {
                    const details = `${element.strInstructions} ${element.strInstructionsES} ${element.strInstructionsDE} ${element.strInstructionsFR} ${element.strInstructionsIT}`;

                    const div = document.createElement('div');
                    div.classList.add("col-4");

                    div.innerHTML = `
                    <div class="card mb-3">
                        <img src="${element.strDrinkThumb}" class="card-img-top" alt="...">
                        <div class="card-body text-center">
                            <h5 class="card-title">${element.strDrink}</h5>
                            <h6 class="card-title">Category: ${element.strCategory}</h6>
                            <p class="card-text">${details.slice(0, 15)}</p>
                            <button class="btn btn-success" onclick="addToCartFunction('${element.strDrinkThumb}','${element.strDrink}')">Add to Cart</button>
                            <button type="button" id="modalButton" class="btn btn-success" data-bs-toggle="modal" onclick="showModal('${element.strDrink}','${element.strDrinkThumb}','${element.strCategory}','${element.strAlcoholic}','${element.strInstructions}')" data-bs-target="#modalId">
                            Details
                            </button>
                        </div>
                    </div> 
                `
                    row.appendChild(div);
                });
            }
        });


});


const addToCartFunction = (imgUrl, name) => {
    if (parseInt(count.innerText) < 7) {
        let countVal = parseInt(count.innerText) + 1;
        count.innerText = countVal;

        const div = document.createElement('div');
        div.classList.add('row');

        div.innerHTML = `
            <div class="col-4">
                <p class="h5">0${countVal}.</p>
            </div>
            <div class="col-4">
                <img src="${imgUrl}" class="img-fluid img-size rounded-circle" alt="">
            </div>
            <div class="col-4">
                <p class="h5">${name}</p>
            </div>
            <hr >
        `
        cartItemDiv.appendChild(div);

    } else {
        alert("You reached max");
    }


}

const showModal = (dName, dUrl, dCategory, dAlco, dDetails) => {
    modalTitle.innerText = dName;
    modalImageID.innerHTML = `<img src="${dUrl}" class="img-fluid img-thumbnail modal-image" alt="">`;
    modalCategory.innerText = `Category: ${dCategory}`;
    modalAlcoholic.innerText = `Alcoholic: ${dAlco}`;
    modalDetails.innerText = dDetails;
};
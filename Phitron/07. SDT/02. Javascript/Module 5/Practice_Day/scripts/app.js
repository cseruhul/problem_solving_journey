const keyWord = document.getElementById("foodItemName");
const row = document.getElementById("row");
const noItemFound = document.getElementById("noItemFound");
const detailsCard = document.getElementById("detailsCard");


document.getElementById("searchButton").addEventListener('click', (e) => {
    const searchKeyword = keyWord.value;

    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${searchKeyword}`)
        .then(resource => resource.json())
        .then(data => {

            const isData = data.meals ? data.meals.length : 0;
            console.log(isData);

            row.innerHTML = '';
            noItemFound.innerHTML = '';
            if (isData === 0) {
                noItemFound.innerText = "No item Found";
            } else {
                noItemFound.innerText = `${isData} items Found`;

                data.meals.forEach(element => {
                    const div = document.createElement("div");
                    div.classList.add("card", "col-3", "m-2", "cardWidth");

                    div.innerHTML = `
                    <img src="${element.strMealThumb}" class="card-img-top p-2" alt="...">
                    <div class="card-body">
                        <h5 class="card-title">${element.strMeal}</h5>
                    </div>
                `;
                    row.appendChild(div);
                    div.addEventListener('click', (e) => {
                        const div = document.createElement("div");
                        div.classList.add("card", "col-3", "m-2", "cardWidth");

                        div.innerHTML =
                            `
                        <img src="${element.strMealThumb}" class="card-img-top p-2" alt="...">
                        <div class="card-body">
                            <h5 class="card-title">${element.strMeal}</h5>
                            <h6 class="card-title">Ingredients</h6>
                            <ul>
                                <li>${element.strIngredient1}</li>
                                <li>${element.strIngredient2}</li>
                                <li>${element.strIngredient3}</li>
                                <li>${element.strIngredient4}</li>
                                <li>${element.strIngredient5}</li>
                            </ul>
                        </div>
                        `
                        detailsCard.innerHTML = "";
                        detailsCard.appendChild(div);

                    })
                });
            }

        });

});
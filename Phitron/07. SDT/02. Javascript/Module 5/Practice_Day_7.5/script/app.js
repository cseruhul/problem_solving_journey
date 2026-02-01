const dataCard = document.getElementById("outputSection");
const foundItem = document.getElementById("foundItem");
const detailsCard = document.getElementById("detailsCard");

document.getElementById("searchBtn").addEventListener('click', (e) => {
    const searchItem = document.getElementById("searchBox").value;

    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${searchItem}`)
        .then(resource => resource.json())
        .then(data => {
            const count = data.meals ? data.meals.length : 0;
            dataCard.innerHTML = "";
            foundItem.innerText = count;

            if (count === 0) {
                const div = document.createElement("div");
                div.classList.add("bodyCard");
                detailsCard.innerHTML = "";
                div.innerHTML = `
                        <h2 class="title-not-found">No Item Found.</h2>
                    `
                dataCard.appendChild(div);
            } else {
                data.meals.forEach(element => {
                    const div = document.createElement("div");
                    div.classList.add("bodyCard");

                    div.innerHTML = `
                        <img src="${element.strMealThumb}" alt="Food Item">
                        <h2 class="title">${element.strMeal}</h2>
                    `
                    dataCard.appendChild(div);

                    div.addEventListener('click', (e) => {
                        const div = document.createElement("div");
                        div.className = 'card';

                        div.innerHTML = `
                        <img src="${element.strMealThumb}" alt="burger">
                        <h2 class="title">${element.strMeal}</h2>
                        <h3>Ingradiendt</h3>
                        <ul>
                            <li>${element.strIngredient1}</li>
                            <li>${element.strIngredient2}</li>
                            <li>${element.strIngredient3}</li>
                            <li>${element.strIngredient4}</li>
                            <li>${element.strIngredient5}</li>
                            <li>${element.strIngredient6}</li>
                        </ul>
                        `
                        detailsCard.innerHTML = "";
                        detailsCard.appendChild(div);
                    });
                });
            }

        });

});
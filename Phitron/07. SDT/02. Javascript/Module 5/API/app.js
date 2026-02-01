// const myModal = document.getElementById('myModal')
// const myInput = document.getElementById('myInput')

// myModal.addEventListener('shown.bs.modal', () => {
//   myInput.focus()
// });



fetch('https://fakestoreapi.com/products')
    .then(response => response.json())
    .then(data => {
        displayData(data);
    });

const parentDiv = document.getElementById("products");
const totalProduct = document.getElementById("totalProduct");
const cartBody = document.getElementById("cartBody");
const cartTotal = document.getElementById("proPrice");

const myModal = document.getElementById("myModal");

let total_count = 0;
const allPrice = [];

const displayData = (products) => {

    products.forEach(element => {

        const div = document.createElement('div');
        div.classList.add('card', 'my-3', 'mx-3');
        div.style.width = "18rem";

        div.innerHTML = `
            <img src="${element.image}" class="card-img-top" alt="...">
            <div class="card-body">
                <h5 class="card-title">${element.title.slice(0, 10)}</h5>
                <h5 class="card-title">Price: <span id="productPrice">${element.price}</span> BDT</h5>
                <p class="card-text">${element.description.slice(0, 50)}</p>
                <button class="btn btn-success" data-bs-toggle="modal" data-bs-target="#myModal" onclick="productPage('${element.id}')">Details</button>
                <button class="btn btn-success" onclick="addToCartFunction('${element.title.slice(0, 10)}','${element.price}')">Add to cart</button>
            </div>
        
        `
        parentDiv.appendChild(div);
        // console.log(element);
    });
}


const addToCartFunction = (title, price) => {
    // console.log(title, price);
    allPrice.push(parseFloat(price));

    total_count = parseInt(totalProduct.textContent);
    total_count += 1;
    totalProduct.textContent = total_count;
    console.log(total_count);
    const div = document.createElement('div');
    div.classList.add('row');

    div.innerHTML = `
    <div class="col-8">
        <p id="productTitle">${title}</p>
    </div>
    <div id="proPrice" class="col-4">
        <p>${price}</p>
    </div>
    `

    cartBody.appendChild(div);
    calculatePrice(allPrice);
}

const calculatePrice = (allPrice) => {
    let sum = 0;

    for (const p of allPrice) {
        sum += p;
    }
    cartTotal.textContent = sum.toFixed(2);
    // console.log(sum.toFixed(2));
}

const productPage = (element_id) => {
    fetch(`https://fakestoreapi.com/products/${element_id}`)
        .then(res => res.json())
        .then(data => {

            myModal.innerHTML = `
                <div class="modal-dialog">
                    <div class="modal-content">
                        <div class="modal-header">
                            <h5 class="modal-title">${data.title}</h5>
                            <button type="button" class="btn-close" data-bs-dismiss="modal"></button>
                        </div>

                        <div class="modal-body text-center">
                            <img src="${data.image}" class="img-fluid" style="max-height:200px">
                            <p class="mt-3">Price: ${data.price} BDT</p>
                            <p>${data.description}</p>
                        </div>

                        <div class="modal-footer">
                            <button type="button"
                                    class="btn btn-secondary"
                                    data-bs-dismiss="modal">
                                Close
                            </button>
                        </div>
                    </div>
                </div>
            `;

            const modal = new bootstrap.Modal(myModal);
            modal.show(); // 🔥 THIS LINE IS KEY
        });
};

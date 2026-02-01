
function monthlySavings(allPayments, livingCost) {
    if (typeof allPayments === 'object') {
        let sum = 0;
        let totalTax = 0;
        for (const element of allPayments) {
            sum += element;

            if (element >= 3000) {
                totalTax += element * 0.2;
            }
        }

        // console.log(`Savings = ${totalSacings}\nTotal earning = ${sum}`);
        if (sum - totalTax >= livingCost) {
            return (sum - totalTax) - livingCost;
        } else {
            return "earn more";
        }

    } else {
        return "invalid input";
    }
}


console.log(monthlySavings([1000, 2000, 3000], 5400));
console.log(monthlySavings([1000, 2000, 2500], 5000));
console.log(monthlySavings([900, 2700, 3400], 10000));
console.log(monthlySavings(100, [900, 2700, 3400]));
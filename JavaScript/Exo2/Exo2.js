let a = parseInt(prompt("Saisir le premier nombre !"));
let b = parseInt(prompt("Saisir la deuxieme nombre !"));

let som, diff, prod, quot;

som = a + b;
diff = a - b;
prod = a * b;
quot = a / b;

console.log(`La somme entre ${a} et ${b} est : ${som}`);
console.log(`La difference entre ${a} et ${b} est : ${diff}`);
console.log(`Le produit entre ${a} et ${b} est : ${prod}`);
console.log(`Le quotient entre ${a} et ${b} est : ${quot}`);

alert(`Resultats :\n
    Somme : ${som} \n
    Difference : ${diff} \n
    Produit : ${prod} \n
    Quotient : ${quot}`);
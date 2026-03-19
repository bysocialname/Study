let value = parseInt(prompt("Saisir le nombre d'element du tableau"));

let tableau = [];

for(let i = 0; i < value; i++){
    tableau[i] = parseInt(prompt(`Saisir le ${i+1}er nombre du tableau`));
}
let max, min, moy;
let pair = [];

function trouverMax(){

    max = tableau[1];

    for(let i = 0; i < tableau.length; i++){

        if(max < tableau[i]){
            max = tableau[i];
        }
    }
    return max;
}

function trouverMin(){

    min = tableau[1];

    for(let i = 0; i < tableau.length; i++){
        if(min > tableau[i]){
            min = tableau[i];
        }
    }
    return min;
}

function moyenne(){

    let som = 0;
    let cnt = 0;

    for(let i = 0; i < tableau.length; i++){
        som = som + tableau[i];
        cnt += 1;
    }
    moy = som/cnt;
    return moy.toFixed(2);
}

function filtrerPairs(){

    let j = -1;
    for(let i = 0; i < tableau.length; i++){
        if(tableau[i] % 2 == 0){
            j++;
            pair[j] = tableau[i];
        }
    }
    return pair;
}

alert(`Resultats : \n
    Maximum : ${trouverMax(max)} \n
    Minimum : ${trouverMin(min)} \n
    Moyenne : ${moyenne(moy)} \n
    Tableau Pair : ${filtrerPairs(pair)}`);
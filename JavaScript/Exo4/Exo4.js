let poids = parseInt(prompt("Quel est votre poids actuel en kg?"));
let taille = parseInt(prompt("Quel est votre taille actuelle en cm?"));

let value = confirm("Voulez-vous continuer ?");

function IMC(poids, taille) {

    if(poids <= 0 || taille <= 0){
        return "Valeur invalides";
    }

    let imc = (poids / ((taille * taille) / 10000));
    let categorie;

    if(imc < 18.5){
        categorie = "Insuffisance ponderale";
    }
    else if(imc < 25){
        categorie = "Corpulence normale";
    }
    else if(imc < 30){
        categorie = "Surpoids";
    }
    else{
        categorie = "Obésité";
    }

    return (`Resultats : \n
        imc : ${imc.toFixed(2)} \n
        categorie : ${categorie}`
    );
}

value == true ? alert(IMC(poids, taille)) : alert("/403");
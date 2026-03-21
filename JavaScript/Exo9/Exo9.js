let quit = 0;

let tab = [];

let tab_ = [];

do{
    let request = prompt(`Menu \n
    Push - Lister - Resultats - Quitter \n
    Selectionner un option`);

    switch(request){

        case "Push" :
            let value = parseInt(prompt(`Saisir un element du tableau`));
            tab.push(value);
        break;

        case "Lister" :
            alert(tab);
            alert(pseudo());
        break;

        case "Resultats" :
            res = _objet(tab);
            _result(res);
        break;

        case "Quitter" :
            quit = 1;
        break;

        default :
            alert("Option invalide !");
        break;
    }
}
while(quit == 0);

function _objet(){

    let sum, counter, moy, min, max, med, std;

    sum = 0;
    min = tab[0];
    max = tab[0];
    counter = 0;

    for(let i = 0; i < tab.length; i++){
        sum += tab[i];
        counter += 1;
    }
    moy = sum / counter;

    for(let i = 1; i < tab.length; i++){
        if(max < tab[i]){
            max = tab[i];
        }
    }

    for(let i = 1; i < tab.length; i++){
        if(min > tab[i]){
            min = tab[i];
        }
    }

    if(counter % 2 == 0){
        med = (tab[(counter/2) -1] + tab[(counter/2)]) / 2;
    }
    else {
        med = tab[(counter - 1)/2];
    }

    let tab_square = pseudo();

    let sum_std = 0;

    for(let j = 0; j < tab_square.length; j++){
        sum_std += tab_square[j];
    }

    std = ((sum_std / counter) - (moy * moy)) ** 0.5;

    let result = {
        Somme : sum,
        Moyenne : moy.toFixed(2),
        Minimum : min,
        Maximum : max,
        Mediane : med,
        EcartType : std.toFixed(2)
    };

    return result;
}

function _result(result){

    return Object.entries(result).forEach(([cle, valeur]) => {
        alert(`${cle} : ${valeur}`);
    });
}

function pseudo(){

    tab_ = [tab.length];

    for(let j = 0; j < tab.length; j++){
        tab_[j] = tab[j] * tab[j];
    }

    return tab_;
}
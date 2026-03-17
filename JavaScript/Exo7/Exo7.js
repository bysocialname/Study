let quit = false;

do {
    let request = prompt(`Menu \n
        Saisir - Quitter \n
        Selectionner un option :`);

    switch(request){
        case "Saisir" :
            let n = prompt(`Entrer un nombre entier positif (n-iéme terme).`);
            alert(fibo_term(n));
        break;

        case "Quitter" :
            quit = true;
        break;
        
        default :
            alert(`Désolé, le remplissement du champ est obligatoire`);
    }
} while(quit == false);

function fibo_term(n) {
    if(n <= 1)
        return 0;
    if(n === 2)
        return 1;

    return fibo_term(n - 1) + fibo_term(n - 2);
}

function fibo(n){
    if(n <= 1)
        return 0;
    if(n === 2)
        return 1;

    
    return;
}


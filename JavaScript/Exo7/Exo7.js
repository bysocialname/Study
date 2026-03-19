let quit = false;

do {
    let request = prompt(`Menu \n
        Recursif - Iterative - Quitter \n
        Selectionner un option :`);

    switch(request){
        case "Recursif" :
            let n = prompt(`Entrer un nombre entier positif (n-iéme terme).`);
            alert(fibo_term(n));
        break;

        case "Iterative" :
            let m = prompt(`Entrer un nombre entier positif (n-iéme terme).`);
            alert(fibo(m));
        break;

        case "Quitter" :
            quit = true;
        break;
        
        default :
            alert(`Désolé, le remplissement du champ est obligatoire`);
    }
} while(quit == false);

function fibo_term(n) {
    if(n <= 0)
        return 0;
    if(n === 1)
        return 1;

    return fibo_term(n - 1) + fibo_term(n - 2);
}

function fibo(m){
    if(m <= 0)
        return 0;
    if(m === 1)
        return 1;

    let a = 1;
    let b = 1;

    let c;

    for(let i = 2; i < m; i++){

        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


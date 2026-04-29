let tab_car = [
    {nom: "Toyota", prix: 0, etat: true},
    {nom: "Honda", prix: 0, etat: true}
];

function voir(){

    alert(`La liste des voitures \n`);

    for(let i = 0; i < tab_car.length; i++){
        alert(`${tab_car[i].nom} a ${tab_car[i].prix}$`);
    }
}

function propose(nom1, prix1){

    let sms = '';

    let check = tab_car.find(t => t.nom.toLowerCase() === nom1.toLowerCase());

    if(check){

        if(check.prix < prix1){
            check.prix = prix1;
        }
    }
    sms = `Proposition accepte`;

    return sms;
}

function push(nom2){

    let sms = '';

    car = {nom: nom2, prix: 0, etat: true};

    tab_car[tab_car.length] = car;

    sms = `La voiture de la marque ${tab_car[tab_car.length - 1].nom} a ete ajoute`;

    return sms;
}

function sell_actuel(){

    alert(`Les voitures disponibles sont :\n`);
    tab_car.forEach(element => {
        if(element.etat == true){
            alert(`${element.nom}`);
        }
    })
}

function valide(){

    for(let i = 0; i < tab_car.length; i++){
        if(tab_car[i].etat == true && tab_car[i].prix > 0){
            alert(`${tab_car[i].nom} a ${tab_car[i].prix}$`);
        }
    }

    let valid = prompt(`Entrer le nom du voiture a valider \n`);
    let sms = '';
    let verify = tab_car.find(t => t.nom.toLowerCase() === valid.toLowerCase());

    if(verify){
        verify.etat = false;
        sms = `Commande valider pour ${verify.nom}`;
    }

    return sms;
}

let quit = false, quit_ = false;
let check_ = false, verify_ = false;

do{
    let code = prompt(`Entrer votre code d'acces \n`);

    if(code == "V12026"){
        check_ = true;
        // Compte client //
        do{
            let request = prompt(`Menu \n
                Voir - Proposer - Quitter\n
                Selectionnner un option`);

                switch(request){
                    case "Voir" :
                        voir();
                    break;

                    case "Proposer" :
                        let nom1 = prompt(`Entrer le nom de la voiture \n`);
                        let prix1 = prompt(`Proposer un prix \n`);
                        alert(propose(nom1,prix1));
                    break;

                    case "Quitter" :
                        quit = true;
                    break;

                    default :
                        alert(`Option Invalide...Recommencer !`);
                }
        }while(!quit);
    }
    else if(code == "AG2026"){
        verify = true;
        // Compte Agent //
        do{
            let request = prompt(`Menu \n
                Creer - Valider - Historique - Quitter\n
                Selectionnner un option`);

                switch(request){
                    case "Creer" :
                        let nom2 = prompt(`Entrer le nom de la voiture`);
                        alert(push(nom2));
                    break;

                    case "Valider" :
                        alert(valide());
                    break;

                    case "Historique" :
                        sell_actuel();
                    break;

                    case "Quitter" :
                        quit_ = true;
                    break;

                    default :
                        alert(`Option Invalide...Recommencer !`);
                }
        }while(!quit_);

    }
}while(!check_ || !verify_);
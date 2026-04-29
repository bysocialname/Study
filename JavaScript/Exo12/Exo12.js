let quit = false;

let tab_machine = [
    {proprietaire: "Mouhamed", salle: "Salle E1", adresse: "10.0.0.5", classe: "Classe A", getaway: "10.0.0.1", etat: true}
];

function ajout(proprietaire, salle, adresse, classe, getaway){

    let nouvelleMachine = {proprietaire, salle, adresse, classe, getaway, etat: true};
    tab_machine[tab_machine.length + 1] = nouvelleMachine;

    let sms = `La machine de ${nouvelleMachine.proprietaire} est ajouter dans la ${nouvelleMachine.salle}`;

    console.log(`machine ${tab_machine[0].proprietaire}`);
    return sms;
}

function supp(address){

    let sms = "";

    tab_machine.forEach(element => {

        if(element.adresse == address){
            element = 0;
            sms = `La machine avec l'adresse ${address} est supprime`;
        }
        else {
            sms = `La machine avec l'adresse ${address} n'est pas supprime`;
        }

    });

    return sms;
}

function list(tab_machine){

    tab_machine.forEach(element => {
        if(element.etat == true){
            alert(`Listes des machines \n
            Proprietaire : ${element.proprietaire} \n
            Salle : ${element.salle} \n
            Adresse : ${element.adresse} \n
            Classe : ${element.classe} \n
            Passerelle : ${element.getaway} \n
            Etat : Allumer`);
        }
        else {
            alert(`Listes des machines \n
            Proprietaire : ${element.proprietaire} \n
            Salle : ${element.salle} \n
            Adresse : ${element.adresse} \n
            Classe : ${element.classe} \n
            Passerelle : ${element.getaway} \n
            Etat : Eteint`);
        }
    });
    return 0;
}

do{
    let request = prompt(`Menu : \n
        Ajouter - Supprimer - Lister - Quitter \n
        Selectionner votre option`);

    switch(request){

        case "Ajouter" :
            let proprietaire = prompt("Quel est votre nom ?");
            let salle = prompt("Dans quel salle est votre machine ?");
            let adresse = prompt("Donner l'adresse Ip de votre machine format(X.X.X.X) ?");
            let classe = prompt("Dans quel classe d'adressage est votre adresse Ip ?");
            let getaway = prompt("Donner la passerelle ?");

            alert(ajout(proprietaire, salle, adresse, classe, getaway));
        break;

        case "Supprimer" :
            let address = prompt("Donner l'adresse du machine a supprimer ?");

            alert(supp(address));
        break;

        case "Lister" :
            list(tab_machine);
        break;

        case "Quitter" :
            quit = true;
        break;

        default :
            alert('Option invalide...Recommence !');
    }

}while(!quit);
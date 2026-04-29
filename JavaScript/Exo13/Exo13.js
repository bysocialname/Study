let tab_etudiant = [
    {nom: "Mouhamed", code: "1111"},
    {nom: "Ibrahima", code: "2222"},
    {nom: "Ismail", code: "3333"}
];

let tab_machine = [
    {address: "10.0.0.1", net: "10.0.0.0", code: "1111", salle: "Salle B"},
    {address: "12.23.34.5", net: "12.23.34.0", code: "1111", salle: "Salle A"},
    {address: "23.34.45.1", net: "23.34.45.0", code: "2222", salle: "Salle C"}
];

let quit = false;

function search(code_){

    let i = 0;

    while(tab_etudiant[i].code.toLowerCase() === code_.toLowerCase()){

        console.log(tab_etudiant[i].nom);

        for(let j = 0; j < tab_machine.length; j++){
            if(tab_machine[j].code.toLowerCase() === code_.toLowerCase()){
                alert(`L'etudiant ${tab_etudiant[i].nom} a la machine d'adresse IP : ${tab_machine[j].address}`);
            }
        }
        i++;
    }

    return 0;
}
do {
    let request = prompt(`Menu \n
        Recherche - Quitter \n
        Slectionner un option`);

    switch(request){

        case "Rechercher" :
            let code_ = prompt(`Quel est votre code permanent \n`);
            search(code_);
        break;

        case "Quitter" :
            quit = true;
        break;

        default :
            alert(`Option invalide...Recommence !`);
    }

}while(!quit);
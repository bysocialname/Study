let tab_book = [
    {titre : "Tiran", auteur : "Omar", annee : 2021, disponible : true},
    {titre : "Tout", auteur : "Ali", annee : 2023, disponible : true},
    {titre : "Merde", auteur : "Mood Boy", annee : 2005, disponible : false},
    {titre : "Life", auteur : "Mounir", annee : 2009, disponible : true}
];

let quit = false;

function book_push(titre, auteur, annee){
    let nouveauLivre = {titre, auteur, annee, disponible: true};
    tab_book.push(nouveauLivre);
    let sms = `${nouveauLivre.titre} a été ajouter avec succés.`;

    return sms;
}

function book_loan(nom){

    let livre = tab_book.find(l => l.titre.toLowerCase() === nom.toLowerCase());

    let sms = '';

    if(livre){
        if(livre.disponible){
            livre.disponible = false;
            sms = `Vous avez emprumter ${livre.titre}. Bonne lecture !`;
        }
        else{
            sms = `Désolé, ${livre.titre} n'est pas disponible.`;
        }
    }
    else{
        sms = `Le livre ${nom} est introuvable.`;
    }
    return sms;
}

function book_borrow(nom1){

    let livre = tab_book.find(t => t.titre.toLowerCase() === nom1.toLowerCase());

    let sms = '';

    if(livre){
        if(!livre.disponible){
            livre.disponible = true;
            sms = `${livre.titre} a été retourner avec succés. Merci !`;
        }
        else{
            sms = `${livre.titre} n'a pas été emprunter.`;
        }
    }
    else{
        sms = `Le livre ${nom1} est introuvable.`;
    }
    return sms; 
}

function book_search(nom2){

    let livre = tab_book.find(l => l.auteur.toLowerCase() === nom2.toLowerCase());

    let sms = '';

    if(livre){
        if(livre.disponible){
            sms = `Livre de ${livre.auteur} \n
                Titre : ${livre.titre} \n
                Année de sortie : ${livre.annee} \n
                Disponible`;
        }
        else{
            sms = `Livre de ${livre.auteur} \n
                Titre : ${livre.titre} \n
                Année de sortie : ${livre.annee} \n
                Pas disponible`;
        }
    }
    else{
        sms = `L'auteur ${nom2} est introuvable.`;
    }
    return sms;
}

function book_list(tab_book){

    return tab_book.forEach((element, index) => {
        alert(`Livre ${index + 1} : \n
            Titre : ${element.titre} \n
            Auteur : ${element.auteur} \n
            Année de sortie : ${element.annee} \n
            Disponobilité : ${element.disponible}`);
    });
}

do {
    let request = prompt(`Menu :\n
        Ajouter - Emprunter - Retourner - Rechercher - Lister - Quitter\n
        Selectionner un service`);

    switch (request) {
        case "Ajouter" :
            let titre = prompt("Quel est le titre du livre ?");
            let auteur = prompt(`Quel est l'auteur de ${titre} ?`);
            let annee = parseInt(prompt(`Quel est l'année de sortie de ${titre} ?`));
            alert(book_push(titre, auteur, annee));
        break;

        case "Emprunter" : 
            let nom = prompt("Quel livre voulez-vous emprunter ?");
            alert(book_loan(nom));
        break;

        case "Retourner" :
            let nom1 = prompt("Quel livre voulez-vous retourner ?");
            alert(book_borrow(nom1));
        break;

        case "Rechercher" :
            let nom2 = prompt("Quel est l'auteur du livre que vous recherchez ?");
            alert(book_search(nom2));
        break;

        case "Lister" :
            book_list(tab_book);
        break;

        case "Quitter" :
            quit = true;
        break;

        default :
            alert("Requéte Invalide !");
    }
}while(quit == false);
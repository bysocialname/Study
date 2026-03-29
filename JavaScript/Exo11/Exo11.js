let cohorteX = [
    {nom: "Mouhamed", date: "05/01/2005", lieu: "Kaolack"},
    {nom: "Camara", date: "29/12/2004", lieu: "Kaolack"}
];

let cohorteY = [
    {nom: "Mouhamed", date: "05/01/2005", lieu: "Kaolack"},
    {nom: "Diop", date: "28/02/2005", lieu: "Kaolack"}
];

function list(cohorteX, cohorteY){

    cohorteX.forEach((elemento) => {
        cohorteY.forEach((element) =>{
            let check1 = elemento.nom == element.nom ? true : false;
            let check2 = elemento.date == element.date ? true : false;
            let check3 = elemento.lieu == element.lieu ? true : false;

            if(check1 && check2 && check3){
                delete element.nom;
                delete element.date;
                delete element.lieu;
            }

        });
    });
    
    let classXY = [];
    let verify, verifY;

    cohorteX.forEach((element) => {
        verify = classXY.push(element);
    });

    cohorteY.forEach((element) => {
        verifY = classXY.push(element);
    });

    return classXY.forEach((element) => {
        if(element.nom != undefined)
            alert(`Etudiant \n
                ${element.nom} \n
                ${element.date} \n
                ${element.lieu}`);
    });

}

function cohX_push(nom, date, lieu){

    let student = {nom, date, lieu};
    let sms = '';

    if(cohorteX.push(student))
        sms = `L'etudiant ${student.nom} est transferer dans la cohorte X`;

    return sms;
}

function cohY_push(nom, date, lieu){

    let student = {nom, date, lieu};
    let sms = '';

    if(cohorteY.push(student))
        sms = `L'etudiant ${student.nom} est transferer dans la cohorte Y`;

    return sms;
}

let quit = 0;

do {
    let request = prompt(`Bienvenue dans Study \n
        Lister - Cohorte - Quitter \n
        Selectionner un option`);

    switch(request){

        case "Lister" :
            list(cohorteX, cohorteY);
        break;

        case "Cohorte" :

            let coh_ = prompt(`Menu \n
                cohorte X - cohorte Y \n
                Quel est votre cohorte ?`);

            switch(coh_){

                case "cohorte X" :
                    let nom = prompt(`Quel est votre nom ?`);
                    let date = prompt(`Quel est votre date de naissance (jj/mm/aaaa) ?`);
                    let lieu = prompt(`Quel est votre lieu de naissance ?`);

                    alert(cohX_push(nom, date, lieu));

                break;

                case "cohorte Y" :
                    let nom_ = prompt(`Quel est votre nom ?`);
                    let date_ = prompt(`Quel est votre date de naissance (jj/mm/aaaa) ?`);
                    let lieu_ = prompt(`Quel est votre lieu de naissance ?`);

                    alert(cohY_push(nom_, date_, lieu_));

                break;
            }
        break;

        case "Quitter" :
            quit = 1;
        break;

        default : alert(`Option invalide. Recommencez !`);
    }

}while(!quit);
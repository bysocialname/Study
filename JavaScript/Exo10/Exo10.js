let etudiant = [
    {nom: "Diop", notes: [12, 15, 10, 18]},
    {nom: "Sow", notes: [8, 14, 16, 12]},
    {nom: "Ndiaye", notes: [19, 17, 15, 20]}
];

let counter = 3.;

function study_push(nom, notes){

    let student = {nom, notes}

    let sms = '';

    if(etudiant.push(student)){
        sms = `L'etudiant ${nom} est transfere dans la classe`;
        counter += 1;
    }

    return sms;
}

function result(){

    let sum_moy = 0;

    let sms = '';

    let moy_max = [];

    etudiant.forEach((element, index) => {

        let somme = element.notes.reduce((accumulateur, valeur) => accumulateur + valeur, 0);
        element.moy = somme / 4.;
        sum_moy += element.moy;

        moy_max[index] = element.moy;

        sms += `${element.nom} \t ${element.moy} \n`;
    });
    let max = moy_max[0];

    let moy_gen = sum_moy / counter;
    sms += `La moyenne generale est : ${moy_gen.toFixed(2)} \n`;

    for(let i = 1; i < moy_max.length; i++){
        if(max < moy_max[i])
            max = moy_max[i];
    }

    etudiant.forEach((element) => {
        if(element.moy == max){
            sms += `Le meilleur de la classe est : ${element.nom} \n`;
        }
    });

    return sms;
}

function passed(){

    let pass = 'Les etudiants qui ont la moyenne sont : \n';

    etudiant.forEach((element) => {
        if(element.moy >= 10){
            pass += `${element.nom} \n`;
        }
    });

    return pass;
}

let quit = 0;

do{
    let request = prompt(`Menu \n
        Ajouter - Resultats - Moyenne - Quitter \n
        Selectionner un option`);

    switch(request){
        case "Ajouter" :
            let nom = prompt(`Quel est votre nom ?`);
            let notes = [];
            for(let i = 0; i < 4; i++){
                notes[i] = parseInt(prompt(`Saisir le ${i+1}er note`));
            }
            alert(study_push(nom, notes));
        break;

        case "Resultats" :
            alert(result());
        break;

        case "Moyenne" :
            alert(passed());

        break;

        case "Quitter" :
            quit = 1;
        break;

        default : alert(`Choix invalide, Recommencez !`);
    }
}
while(!quit);
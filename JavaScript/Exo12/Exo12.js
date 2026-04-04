class Personne {
    constructor(nom, age, ville){
        this.nom = nom;
        this.age = age;
        this.ville = ville;
    }

    sePresenter(){
        return `Je suis ${this.nom}, j'ai ${this.age} ans et j'habite à ${this.ville}`;
    }

    get anneeNaissance(){
        const anneeActuelle = new Date().getFullYear();
        return anneeActuelle - this.age;
    }

    set anneeNaissance(annee){
        this.age = new Date().getFullYear() - annee;
    }

    static comparerAges(p1, p2){
        return p1.age - p2.age;
    }
}
let nom = prompt(`Quel est votre nom ?`);
let age = prompt(`Quel age avez-vous ${nom} ?`);
let ville = prompt(`Oú habitez-vous ${nom}?`);

let etudiant = new Personne(nom, age, ville);

console.log(etudiant.sePresenter());
console.log("Année de naissance :", etudiant.anneeNaissance);
etudiant.anneeNaissance = 2000;
console.log("Nouvel age :", etudiant.age);
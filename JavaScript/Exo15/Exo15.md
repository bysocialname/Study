# Exercice 15 (Préparation EXAMEN)

## Questions :

1. Comment declarer et executer un fonction auto-invocante, Donner un exemple.
2. Quel est la porter d'un variable defini dans l'appel d'un fonction auto-invocante.
3. Peut-on utiliser un variable globale dans un fonction flechee.
4. Donner un exemple de gestionnaire d'evenement.
5. Comment changer la classe d'un element HTML en JavaScript, Donner un exemple.
6. Quel est la difference entre un tableau dynamique et un tableau statique, Donner un exemple de tableau de collection en JS.

## Réponses :

1. Comment declarer et executer un fonction auto-invocante, Donner un exemple.
```bash
(function (argument) {
    alert("Ceci est un fonction qui s'execute immediatement !");
})(valeur_argument);
```
2. Quel est la porter d'un variable defini dans l'appel d'un fonction auto-invocante.
```bash
(function (argument) {
    let variable_ = 0; // Variable de porté locale à cette fonction
    alert("Ceci est un fonction qui s'execute immediatement !");
})(valeur_argument);
```
3. Peut-on utiliser un variable globale dans un fonction flechée.
```bash
let a = 'Variable Globale'
const f = () => {
    console.log(`La variable a est un ${a}`);
};
f(); // La variable a est un Variable Globale
```
4. Donner un exemple de gestionnaire d'evenement.
```bash
<button id="myid"> Envoyer</button>
<script>
const bouton = document.getElementById("myid");
bouton.addEventListener("click", () => {
    alert(`Informations Transmise`);
});
</script>
```
5. Comment changer la classe d'un element HTML en JavaScript, Donner un exemple.
```bash
<p id="myid" class="bleu"> Bienvenue a l'Universite Alioune Diop de Bambey </p>
<script>
const element = document.getElementById("myid");
element.classList.replace("bleu", "marron");
</script>
```
6. Quel est la difference entre un tableau dynamique et un tableau statique, Donner un exemple de tableau de collection en JS.
```bash
(Difference) : Un tableau dynamique est un tableau de longueur variable alors qu'un tableau statique est un tableau de longueur fixe.

let collection_tab = [
{nom: "Meta", prenom: "Diop"},
{nom: "Mouha", prenom: "Sall"},
{nom: "Ibou", prenom: "Sy"}
];
```
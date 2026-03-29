## Manipulation de données étudiants

Soit le tableau suivant :

```bash
let etudiant = [
    {nom: "Diop", notes: [12, 15, 10, 18]},
    {nom: "Sow", notes: [8, 14, 16, 12]},
    {nom: "Ndiaye" notes: [19, 17, 15, 20]}
];
```

Calculez :

```bash
La moyenne de chaque étudiant
La moyenne générale de la classe
Le meilleur étudiant
Les étudiants ayant la moyenne (10)
```

### Algorithme

```bash
Pour calculer la moyenne de chaque étudiant.
    Calculer la somme des notes(qui est un tableau) et
    Connaitre le nombre de notes(c'est une valeur constante)
Pour calculer la moyenne générale de la classe
    Calculer la somme des moyénnes déjà calculer et
    Diviser la somme par le nombre d'étudiant(Le counter demarre a 3)
Pour connaitre le meilleur de la classe
    on cherche dans un tableau de notes le maximum
Pour connaitre les etudiants ayant la moyenne
    on cherche dans le tableau des notes les notes > 10
```
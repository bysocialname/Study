## Exercice 7

On cherche à effectuer un classement de trois nombres a, b, c, les valeurs une fois classée sont notées a', b', c' et vérifient

```bash
a' <= b' <= c'
```

En utilisant des fonctions min et max, cet exercice pourrait se résoudre de la façon suivante :

```bash
a' = min(a,b,c)
b' = a + b + c - min(a,b,c)
c' = max(a,b,c)
```

Mais ici, on ne souhaite pas utiliser de telles fonctions, et utiliser à la place des instructions de tests.

```bash
Combien y'a-t-il de classements possibles ?
Écrire un programme sans boucle ni variables intermediaires comportant un nombre de tests égal aux nombres de classements ?
```

On cherche maintenant à mettre des tests en commun.

```bash
Dessiner un arbre associé aux tests successifs qu'il faudra faire ?
Écrire le programme correspondant à l'arbre de décision
```

PS : Essayez de faire la premier version de l'exercice.
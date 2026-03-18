## Exercice 5

On cherche à implémenter un algorithme appelé multiplication à la russe. Observant que 

```bash
Si x est pair, x*y = (x/2)(2*y)
Si x est impair, x*y = (x - 1)y + y
```

Écrivez un programme permettant de faire la multiplications entre deux entiers. Pour cela vous pourrez utiliser la fonction modulo qui s'implémente pour les entiers positifs avec un pourcentage,

```bash
x est pair si x % 2 == 0
x est impair si x % 2 == 1
```
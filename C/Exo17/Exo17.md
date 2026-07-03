## Exercice 17

Apres avoir cree un type complexe qui est caracterise par son imaginaire et son reel,
ecrire un algorithme qui lit deux nombres complexes C1 et C2 et qui affiche ensuite
leur somme et leur produit.

```bash
C1 = a + ib et C2 = c + id avec a,b,c,d appartenant a R et i*i = (-1)
```

```bash
C1 + C2 = (a + ib) + (c + id) = (a + c) + (b + d)i
C1 * C2 = (a + ib) * (a + id) = (a*c - b*d) + (a*d + b*c)i
```
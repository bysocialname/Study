## Fusion de Tableaux

Créez une fonction qui fusionne deux tableaux d'objets en évitant les doublons (basé sur une clé commune).

### Algorithme

```bash
Nous nous baserons sur le concept de cohorte.
On aura deux cohorte X et Y et
une classe XY qui regroupe les deux cohortes.
La cohorte de base sera la cohorte X donc si
un etudiant fait partie de la cohorte X, il ne pourra pas rejoindre la cohorte Y.
En cas de doublons, on efface la presence de l'etudiant concerné dans la cohorte Y.
```

# TD/TP 2 Linux

## Exercice 1

Quelles sont les commandes (selon deux représentations décimales et caractères) pour lui donner les droits suivant (on suppose qu´après commande on remet le répertoire à 755) sur chacun de ces dossiers.

1. Énoncé
```bash
   | User      | Group     | Other
   | r | w | x | r | w | x | r | w | x
D1 |oui|oui|oui|oui|non|oui|non|non|oui
D2 |oui|non|oui|non|oui|non|non|non|oui
```
2. Réponse avec decimales
```bash
chmod 751 Dossier1
chmod 521 Dossier2
```
3. Réponse avec caractères
```bash
chmod u=rwx,g=rx,o=x Dossier1
chmod u=rx,g=w,o=x Dossier2
```
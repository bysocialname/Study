# TD/TP 1 Linux

## Exercice 3

Avec la commande sed :

1. Afficher que la 1ère ligne du fichier /etc/passwd.
```bash
sed -n '1p' /etc/passwd
```
2. Afficher de la ligne 5 a 7 du fichier /etc/passwd.
```bash
sed -n '5,7p' /etc/passwd
```
3. Afficher que les lignes non commentées dún fichier /etc/passwd.
```bash
sed -En '/^([^:]*:){4}:/p' /etc/passwd
```
4. Remplace le mot "root" par "ROOT" à la ligne 5.
```bash
sed '5s/root/ROOT/' /etc/passwd
```
5. Mettre tout le contenu du fichier /etc/passwd en majuscul.
```bash
sed 's/.*/\U&/' /etc/passwd
```
6. Mettre tout le contenu du fichier /etc/passwd en minuscule.
```bash
sed 's/.*/\L&/' /etc/passwd
```
7. Ajouter le mot "ok" devant chaque ligne du fichier /etc/passwd.
```bash
sed 'i "ok"' /etc/passwd
```
8. Ajouter le mot "ok" après chaque ligne du fichier /etc/passwd.
```bash
sed 'a "ok"' /etc/passwd
```
9. Ajouter le mot "ok" à la fin de la ou les lignes commençant par le mot "toto" du fichier /etc/passwd.
```bash
sed '/^toto/s/$/"ok"/' /etc/passwd
```
10. Ajouter le mot "ok" à la fin de la ou les lignes commençant par le mot "toto" et comprenant le mot "mimi".
```bash
sed '/^toto.*mimi/s/$/"ok"/' /etc/passwd
```
11. Suppression la ou les lignes commençant par le mot "toto".
```bash
sed '/^toto/d' /etc/passwd
```
12. Vider mais sans supprimer la ou les lignes contenant le mot "toto".
```bash
sed 's/toto//g' /etc/passwd
```
13. Ajouter la ligne "amrt:x:6:12:man:/var/cache/man:/bin/sh" avant la ligne 3 du fichier /etc/passwd.
```bash
sed '2i amrt:x:6:12:man:/var/cache/man:/bin/sh' /etc/passwd
```
14. Ajouter la ligne "amrt:x:6:12:man:/var/cache/man:/bin/sh" à la ligne 3 du fichier /etc/passwd.
```bash
sed '3i amrt:x:6:12:man:/var/cache/man:/bin/sh' /etc/passwd
```
15. Ajouter la ligne "amrt:x:6:12:man:/var/cache/man:/bin/sh" après la ligne 3 du fichier /etc/passwd.
```bash
sed '4i amrt:x:6:12:man:/var/cache/man:/bin/sh' /etc/passwd
```
# TD/TP 1 Linux

## Exercice 2

1. Cherchez dans toute l´arborescence les fichiers dont le nom se termine par .c redirigez les erreurs vers le fichier poubelle /dev/null.
```bash
find / -name "*.c" -print 2>> /dev/null
```
2. Chercherz dans toute l'arborescence les fichiers dont le nom commençant par X ou x. Redirigez les erreurs vers le fichier poubelle /dev/null.
```bash
grep -Er '^(X|x)' / 2>> /dev/null
```
3. Cherchez dans toute l'arborescence les fichiers dont les noms ne contiennent pas de chiffres, redirigez les erreurs vers le fichier poubelle /dev/null.
```bash
find / -type f ! -name '*[0-9]*'
```
4. Cherchez dans /user les fichiers dont la taille dépasse 1Mo (2000 blocs de 500Ko) et dont les droits sont fixés a 755 (-rwxr-xr-x).
```bash
find /usr -perm 755 -size 1M
```
5. Combien il y´a de fichiers dans toute l´arborescence vous appartenant et ayant les droits fixés à 666 (-rw-rw-rw-).
```bash
find /home/nom_utilisateur -perm 666 | wc -l
```
6. Trouver tous les fichiers core dans l´arborescence et supprimez-les aprés confirmation
```bash
find . -name "core*" -ok rm {} \
```
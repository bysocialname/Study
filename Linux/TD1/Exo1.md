# TD/TP 1 Linux

## Exercice 1

Déterminer les commandes permettant de réaliser les actions suivantes :

1. Quel est le systeme installé ?
```bash
uname -a / uname
```
2. Quelle est la distribution installée ?
```bash
grep "^ID=" /etc/os-release / uname -a
```
3. Quels sont les utilisateurs en cours du système ?
```bash
who
```
4. Ouvrir un nouveau terminal en utilisant un autre compte ?
```bash
su - nom_utilisateur
```
5. Lister le contenu du repertoire courante de maniere detaillé ?
```bash
ls -l
```
6. Lister le contenu du fichier passwd ?
```bash
cat /etc/passwd
```
7. Afficher les utilisteurs en majuscule par ordre alphabétique ?
```bash
cut -d : -f1 /etc/passwd | tr '[:lower:]' '[:upper:]' | sort
```
8. Créer un fichier Mon_fichier_1 dans le répertoire courant.
```bash
touch Mon_fichier_1
```
9. Créer un lien matériel ¨Mon_lien¨ équivalant à ¨Mon_fichier_1¨.
```bash
ln Mon_fichier_1 Mon_lien
```
10. Lister les deux fichiers ¨Mon_lien¨ et ¨Mon_fichier_1¨ en affichant leur numéro d´inode. Que remarquez-vous ?
```bash
ls -li (Resultat : les deux fichiers ont la même numero d´inode, donc il y´a un lien durs entre eux).
```
11. Supprimer ¨Mon_lien¨. ¨Mon_fichier_1¨ a-t-il disparu ?
```bash
rm Mon_lien (Mon_fichier_1 n´a pas disparu).
```
12. Sous votre répertoire de depart, créer un lien symbolique ¨Mon_nouveau_lien¨ sur ¨Mon_fichier_1¨.
```bash
ln -s Mon_fichier_1 Mon_nouveau_lien
```
13. Lister les deux fichiers ¨Mon_nouveau_lien¨ et ¨Mon_fichier_1¨. Que remarquez-vous ?
```bash
ls (Resultat : Le fichier Mon_nouveau_lien est en bleu alors que le fichier Mon_fichier_1 est en blanc).
```
14. Supprimer ¨MOn_fichier_1¨. ¨Mon_nouveau_lien¨ a-t-il disparu ?
```bash
rm Mon_fichier_1 (Resultat : Le fichier Mon_nouveau_lien est en rouge).
```
15. Combien de lignes comportent le fichier /etc/fstab ?
```bash
wc -l /etc/fstab
```
16. Afficher la liste des fichiers de /etc dont le nom commence par c ou r ?
```bash
grep -r '^[c|r]' /etc
grep -Er '^(c|r)' /etc
```
17. Afficher les 5 derniéres lignes du fichier /etc/passwd ?
```bash
tail -5 /etc/passwd
```
18. Numéroter les lignes du fichier /etc/passwd avant d´afficher page par page.
```bash
cat -n /etc/passwd | less
nl /etc/passwd | less
```
19. Afficher le type de fichier du répertoire /etc.
```bash
cd /etc ; file *
```
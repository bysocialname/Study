# TD/TP 2 Linux

## Exercice 2

1. Le fichier toto a les droits suivants : -rwxr--r--.
Modifiez-en les droits en un ligne de commande de sorte que le propriétaire n´ait plus que le droit de lecture.
```bash
chmod u-wx toto
```
2. Modifier les droits du fichier toto (-wxr--r--) de sorte que le groupe et les autres utilisateurs aient les mêmes droit que le propriétaire.
```bash
chmod g-r+wx,o-r+wx toto
```
3. Créer un répertoire /home/reparmt2 partagé par tous les membres du groupe armt2. Pourquoi cette tâche relève-t-elle des prérogatives de root.
```bash
(prérequis) sudo groupadd armt2
sudo mkdir /home/reparmt2 (création)
sudo chown :armt2 /home/reparmt2 (appartenance)
sudo chmod g+s /home/reparmt2 (partage)
```
Pourquoi ?
Pour des raisons de securité, seule root et le proprietaire permet de manipuler le répertoire /home/reparmt2 et les droits sur ce répertoire.
4. Modifier les droits sur le répertoire pour que seule les membres du groupe armt2 puissent y écrire et s´y déplacer.
```bash
sudo chmod 770 /home/reparmt2
```
5. Créer les utilisateurs lea et luc membres du groupe et joe extérieur au groupe.
```bash
for u in lea luc joe; do sudo useradd -m "$u"; done
for u in lea luc; do sudo usermod -aG armt2 "$u"; done
```
6. En tant que luc vous créez un fichier accessible en lecture seule dans le répertoire reparmt2.
```bash
sudo su - luc
touch /home/reparmt2/luc.txt
chmod 660 ~/reparmt2/luc.txt
exit
```
7. Vérifier que joe nepeut pas accéder aux fichier du groupe.
```bash
sudo su - joe
ls /home/reparmt2 (Permission non accordé)
```
8. Lea tente de supprimre ce fichier ou de le renommer, y parvient-elle ? Essayez !
```bash
sudo su - lea
ls /home/reparmt2 (luc.txt)
mv /home/reparmt2/luc.txt /home/reparmt2/lea.txt (renommé)
rm /home/reparmt2/lea.txt (supprimé)
ls /home/reparmt2 (rien)
```
9. N´esst-ce pas inquiétant ? Expliquez pourquoi cela est possible.
```bash
OUI, cela est possible du fait que luc a donné les droits ´rw´ au groupe armt2 dont fait partir lea.
```
10. Comment `root` va-t-il régler le probleme ?
Verifier que le probleme est réglé et protège le propriétaire des tentatives de suppression ou de changement de nom de ses fichiers par les autres membres du groupe.
```bash
sudo chmod +t /home/reparmt2
```

## Exercice 2

Cet exercice présente une session des quotas des utilisateurs. La gestion des quotas est un moyen efficace pour controler l´evolution de l´espace disque et de limiter son utilisation. les quotas contrôlent l´allocution de l´espace, par utilisateur (ou groupe d´utilisateur) et par système de fichiers. Pour cette session de travail, vous êtes l´administrateur root. Le caractère `#` représente l´invite de commande.

1. AAfficher la liste des systèmes de fichiers actifs.
```bash
df -Th
```
2. Dans quel fichier se trouve les associations entre systèmes de fichier et points de montage ? Visualisez le contenu de ce fichier et décrivez ses éléments ligne à ligne.
```bash
Le chemin : /etc/fstab
cat /etc/fstab
```
3. Brancher votre clé USB et créez trois système de fichiers. Le premier SF doit être de type ext2 avec taille de 2G, le deuxième de type ext3 avec une taille de 3G et le troisième de type ext4 d´une taille de 80Mo.
```bash
df -Th (Connaitre le nom du clé)
sudo fdisk Nom_clé (Pour entré dans le parametre de fdisk)
(Valider chaque commande avec la touche Enter)
n -> p -> +2G
n -> p -> +3G
n -> p -> +80M
p (Connaitre le chemin des partitions nouvellement crées)
(Sauvegarde et quitter)
w
(Formatage des partition crée)
mkfs.ext2 Chemin_partition(2G)
mkfs.ext3 Chemin_partition(3G)
mkfs.ext4 Chemin_partition(80M)
```
4. Convertissez le systeme de fichiers que vous venez de créer en ext3.
```bash
mkfs.ext3 Chemin_partition(2G)
```
5. Activer les quotas sur le troisième système de fichiers que vous venez de créer dans votre clé USB pour permettre de gérer les quotas utilisateurs et les quotas groupes.
```bash

```
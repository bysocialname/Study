# TD/TP 1 Linux

## Exercice 4

Un répertoire appartenant au propriétaire jeff et groupe ccbm, jeff a les droits (Lecture, Ecriture,Execution) rwx, le groupe ccbm a les droits (Lecture et Ecriture) r-x. Pour les autres aucun droit donc ---.

1. Jeff veut donner aux modérateurs qui font partie du groupe control, le droit de lecture r. Dans cette situation chmod ne peux rien faire. Alors, faisons appel aux ACLs. Donner la syntaxe de la commande qui permet de réaliser cela.

```bash
setfacl -m g:control:r fichier
```

2. Sur le même fichier jeff a décidé d´accorder à fall tous les droits et aussi à coly et diop (qui font tous parti du groupe control) les droits d´exécution. Donner la commande qui permet de le faire.

```bash
setfacl -m u:fall:rwx fichier
usermod -aG control coly (sudo)
usermod -aG control diop (sudo)
setfacl -m u:coly:x fichier
setfacl -m u:diop:x fichier
```

3. diop étant sollicité par Royal Shell, vu ces compétences en shell, coly solicité par C PLUS ELECTONICS.COM pour la maitrise du langage C, jeff a décidé de leur retirer les droits d´exécution temporairement. Comment réaliser cela.

```bash
setfacl -x u:diop fichier
setfacl -x u:coly fichier
```

4. Un jour jeff a décidé de retirer les ACLs pour pouvoir réorganiser le projet. Executer la commande qui permet de réaliser cela.

```bash
setfacl -b fichier
```
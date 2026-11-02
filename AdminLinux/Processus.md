# Travaux Pratique et Travaux Dirige sur les Processus

## Travaux Pratique et Travaux Dirige 1 :

1. Tapez la commande `w` pour voir qui fait quoi sur le systeme, Commenter.

```bash
 15:17:02 up 29 min,  1 user,  load average: 0,00, 0,02, 0,06
UTIL.    TTY      DE               LOGIN@   IDLE   JCPU   PCPU  WHAT
mouhamed tty2     -                14:47   29:28   0.05s  0.05s /usr/libexec/gnome-session-init-worker ubuntu
```

2. Revoir certaines de ces informations les commandes `date, uptime` et `who`.

```bash
jeu. 22 oct 2026 15:23:36 GMT // date
15:23:54 up 36 min,  1 user,  load average: 0,67, 0,30, 0,16 // uptime
1000     seat0        2026-10-22 14:47 // who
1000     tty2         2026-10-22 14:47
```

3. Voir la liste statique des processus avec la commande `ps`. Interpreter les resultats de la commande.

```bash
    PID TTY          TIME CMD
   8014 pts/1    00:00:00 bash
   8967 pts/1    00:00:00 ps
```

4. Lister tous les processus avec la commande `ps -ef`, Commenter.

```bash
La liste est kilometrique.
```

5. Afficher les processus en arbre a l'aide de la commande `ps -ejH`.

```bash
La liste est kilometrique.
```

6. Lister les processus lances par un utilisateur : `ps -u nom-utilisateur`.

```bash
La liste est kilometrique.
```

7. Lister de maniere dynamique les processus : `top`.

```bash
La liste est kilometrique.
```

8. Arreter un processus lance en console (ex commande `yes`) : `Ctrl + C`.

```bash
y
y
y
y
y
y
y
y
y
^C
mouhamed-camara@ThinkPad-X13-Gen-1:~$ 
```

9. Connexion comme lamine dans `tty1` et dans `tty2`
Lancez le logiciel `mc` (Midnight Commander) dans `tty1`, afficher un fichier dans `tty2`,
reperez le numero PID du processus `mc`, pour ensuite le supprimer par `kill PID`.

Verifiez le resultat.

#### Astuce
`Ctrl + Alt + T` ouvre le terminal

`Dans tty1`
```bash

```

`Dans tty2`
```bash

```

10. Lancer le navigateur chrome. Trouver les PID des processus de chrome et arreter les tous en meme temps avec la commande killall ?

```bash
mouhamed-camara@ThinkPad-X13-Gen-1:~$ killall 12062 12064 12077 12078 12080 12116 12118 12135 12176 12191 12212 12260 12302 12314
12062: aucun processus trouvé
12064: aucun processus trouvé
12077: aucun processus trouvé
12078: aucun processus trouvé
12080: aucun processus trouvé
12116: aucun processus trouvé
12118: aucun processus trouvé
12135: aucun processus trouvé
12176: aucun processus trouvé
12191: aucun processus trouvé
12212: aucun processus trouvé
12260: aucun processus trouvé
12302: aucun processus trouvé
12314: aucun processus trouvé
mouhamed-camara@ThinkPad-X13-Gen-1:~$ killall chrome
```

11. Trouver la priorite d'un processus deja lance, puis modifier la priorite.

```bash
mouhamed-camara@ThinkPad-X13-Gen-1:~$ renice -n -6 -p 3464
3464 (process ID) priorité précédente -11, nouvelle priorité -6
mouhamed-camara@ThinkPad-X13-Gen-1:~$ 
```

## Travaux Pratique et Travaux Dirige 2 :

1. Utiliser la commande cron pour lancer en differe une commande qui ecrit l'heure dans un fichier texte, Decommander cette tache.

```bash

```
# Exercice
Considerons le schema suivant :
```bash
------------------------------
|Fonct| ---> |Emp| ---> |Serv|
------------------------------
```
-   `Employe (numEmp, nom, prenom, dateEmb, salaire, #idFonction, #idService)`
-   `Fonction (idFonction, intitule)`
-   `Service (idService, nomService)` 
### Questions :
#### 1. Donner le modele entite-assaciation correspondant.
#### 2. Pour chacun des requetes suivantes, donnner la formule de
de l'expression algebrique et la commande `SQL` correspondant.
- Donner la liste des employes
- Donner la liste des services
- Donner la liste des fonctions
- Donner la liste des employes ayant un `salaire = 150 000`
- Donner la liste des employes embaucher le `12/12/2025`
- Afficher les employes du service `informatique`
- Afficher les employes ayant la fonction `agent simple`
- Afficher les employes par `Service`
- Afficher les employes ayant le meme `Salaire`
- Afficher l'employe ayant le `Salaire le plus haut`
- Afficher l'employe ayant le `Salaire le plus petit`
- Afficher le nombre d'employe par `Service`
- Afficher le nombre d'employe par `Fonction`
- Afficher les employe du `Service Marketing ayant la fonction de Directeur`
- Afficher les employe dont le nom commmence par `A`
- Afficher les employe dont le nom contient `A`
- Afficher les employe dont le nom se termine par `F`
- Afficher les employe embaucher en `2026`
#### 3. Creer la base de donnees correspondant au schema et inserer 10 enregistrements dans chacune des tables
#### 4. Tester l'ensemble des requetes de la partie 2
---
### Reponses :
#### 1. Le modele entite-association correspondant.
```bash
-----------                               --------------
|Employe  |                               |Fonction    |
-----------                               --------------
|[numEmp] |(1,1)      ------------   (1,n)|[idFonction]|
|nom      |-----------|effectuer |--------|intitule    |
|prenom   |           ------------        --------------
|dateEmb  |
|salaire  |
-----------\(1,1)
            \
             \
              \ ------------         -------------
               \|appartient|---------|Service    |
                ------------    (1,n)-------------
                                     |[idService]|
                                     |nomService |
                                     -------------
```
#### 2. Expression algebrique et Requetes SQL.
- Donner la liste des employes
```sql
SELECT * FROM Employe;
```
- Donner la liste des services
```sql
SELECT * FROM Service;
```
- Donner la liste des fonctions
```sql
SELECT * FROM Fonction;
```
- Donner la liste des employes ayant un `salaire = 150 000`
```sql
SELECT * FROM Employe WHERE salaire = "150000";
```
- Donner la liste des employes embaucher le `12/12/2025`
```sql
SELECT * FROM Employe WHERE dateEmb = "2025-12-12";
```
- Afficher les employes du service `informatique`
```sql
SELECT * FROM Employe JOIN Service ON Employe.idService = Service.idService WHERE nomService = "informatique";
SELECT * FROM Employe WHERE Employe.idService IN (SELECT idService FROM Service WHERE Service.nomService = "informatique");
```
- Afficher les employes ayant la fonction `agent simple`
```sql
SELECT * FROM Employe JOIN Fonction ON Employe.idFonction = Fonction.idFonction WHERE intitule = "agent simple";
```
- Afficher les employes par `Service`
```sql

```


# TP1 : Creation et modification des structures d'une base de donnees

## Exercice 1 : Creation d'une base de donnees

`docker exec -it [container-name] mysql -u root -p`

1. Creer une base de donnees appelee `gestion_ecole`
```sql
create database gestion_ecole;
```
2. Afficher la liste des bases de donnees existantes
```sql
show databases;
```
3. Selctionner la base de donnees `gestion_ecole`
```sql
use gestion_ecole;
```
4. Afficher le nom de la base de donnees actuellement utilisee
```sql
select database();
```

## Exercice 2 : Creation des tables

Dans la base de donnees `gestion_ecole`, creer les tables suivantes

- **`Table Etudiant`**
```sql
create table Etudiant (
    id_etudiant INT AUTO_INCREMENT PRIMARY KEY,
    nom VARCHAR(30) NOT NULL,
    prenom VARCHAR(50) NOT NULL,
    adresse VARCHAR(100),
    telephone VARCHAR(15),
    email VARCHAR(50) UNIQUE
);
```
- **`Table Filiere`**
```sql
create table Filiere (
    id_filiere INT AUTO_INCREMENT PRIMARY KEY,
    libelle VARCHAR(50) NOT NULL,
    description VARCHAR(100)
);
```
- **`Table Inscription`**
```sql
create table Inscription (
    id_inscription INT AUTO_INCREMENT PRIMARY KEY,
    id_etudiant INT,
    id_filiere INT,
    date_inscription DATE NOT NULL,
    annee_academique VARCHAR(9),
    CONSTRAINT fk_etudiant FOREIGN KEY (id_etudiant) REFERENCES Etudiant(id_etudiant),
    CONSTRAINT fk_filiere FOREIGN KEY (id_filiere) REFERENCES Filiere(id_filiere)
);
```

## Exercice 3 : Consultation des structures

1. Afficher toutes les tables de la base de donnees
```sql
show tables;
```
2. Afficher la structure de la table `Etudiant`
```sql
desc Etudiant;
```
3. Afficher la structure de la table `Filiere`
```sql
desc Filiere;
```
4. Afficher la structure de la table `Inscription`
```sql
desc Inscription;
```

## Exercice 4 : Modification des structures

Ecrire les coommandes `SQL` permettant de :

1. Ajouter une colonne `date_naissance` de type `DATE` dans la table `Etudiant`
```sql
alter table Etudiant add (date_naissance DATE);
```
2. Ajouter une colonne `sexe` de type `VARCHAR(10)` dans la table `Etudiant`
```sql
alter table Etudiant add (sexe VARCHAR(10));
```
3. Ajouter une colonne `nationalite` de type `VARCHAR(30)` dans la table `Etudiant`
```sql
alter table Etudiant add (nationalite VARCHAR(30));
```
4. Modifier la taille de la colonne `nom` de `VARCHAR(30)` a `VARCHAR(100)`
```sql
alter table Etudiant modify nom VARCHAR(100);
```
5. Modifier la taille de la colonne `email` de `VARCHAR(50)` a `VARCHAR(150)`
```sql
alter table Etudiant modify email VARCHAR(150);
```
6. Renommer la colonne `telephone` en `numero_telephone`
```sql
alter table Etudiant change telephone numero_telephone VARCHAR(15);
```
7. Renommer la colonne `adresse` en `adresse_complete`
```sql
alter table Etudiant change adresse adresse_complete VARCHAR(100);
```
8. Supprimer la colonne `nationalite`
```sql
alter table Etudiant drop column nationalite;
```
9. Ajouter une colonne `montant_inscription` de type `DECIMAL(10,2)` dans la table `Inscription`
```sql
alter table Inscription add (montant_inscription DECIMAL(10,2));
```
10. Modifier la taille de la colonne `libelle` de la table `Filiere` a `VARCHAR(100)`
```sql
alter table Filiere modify libelle VARCHAR(100);
```
11. Ajouter une colonne `responsable` de type `VARCHAR(100)` dans le table `Filiere`
```sql
alter table Filiere add (responsable VARCHAR(100));
```
12. Supprimer la colonne `description` de la table `Filiere`
```sql
alter table Filiere drop column description;
```

## Exercice 5 : Renommage et suppression des tables

1. Creer une table `Enseignant` contenant `id_enseignant, nom, prenom` et `specialite`
```sql
create table Enseignant (
    id_enseignant INT AUTO_INCREMENT PRIMARY KEY,
    nom VARCHAR(30) NOT NULL,
    prenom VARCHAR(30) NOT NULL,
    specialite VARCHAR(50) NOT NULL 
);
```
2. Renommer la table `Enseignant` en `Formateur`
```sql
rename table Enseignant to Formateur;
```
3. Afficherr la liste des tables
```sql
show tables;
```
4. Supprimer la table `Formateur`
```sql
drop table Formateur;
```
5. Verifier que cette table n'existe plus
```sql
desc Formateur;
```
6. Creer une table `Test` contenant `id_test` et `description`
```sql
create table Test (
    id_test int auto_increment primary key,
    description varchar(100) not null
);
```
7. Supprimer la table `Test`
```sql
drop table Test;
```
8. Afficher de nouveaux toutes les tables
```sql
show tables;
```
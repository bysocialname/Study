import java.util.Scanner;

public class EduManager {

    static Scanner clavier = new Scanner(System.in);
    static Etudiant[] St = new Etudiant[100];
    static int nombreEtudiant = 0;

    static void afficherMenu(){
        System.out.println("=====================");
        System.out.println("     Edu Manager");
        System.out.println("=====================");
        System.out.println("1. Ajouter un etudiant");
        System.out.println("2. Afficher tous les etudiants");
        System.out.println("3. Rechercher un etudiant");
        System.out.println("4. Modifier un etudiant");
        System.out.println("5. Supprimer un etudiant");
        System.out.println("6. Quitter");
    }

    static String lireChaine(String message){

        System.out.print(message);

        return clavier.nextLine();
    }

    static void traiterChoix(int choix){
        switch(choix){
            case 1 -> ajouterEtudiant();
            case 2 -> afficherEtudiants();
            case 3 -> rechercherEtudiant();
            case 4 -> modifierEtudiant();
            case 5 -> supprimerEtudiant();
            case 6 -> System.out.println("Au revoir !");
            default -> System.out.println("Choix invalide");
        }
    }

    

/*    static void ajouterEtudiant() {
        if (nombreEtudiant >= St.length) {
            System.out.println("Tableau Plein !");
            return;
        }

        System.out.print("Donner votre matricule : ");
        String matricule = clavier.nextLine();

        System.out.print("Donner votre nom : ");
        String nom = clavier.nextLine();

        System.out.print("Donner votre prenom : ");
        String prenom = clavier.nextLine();

        System.out.print("Donner votre age : ");
        int age = clavier.nextInt();
        clavier.nextLine();

        System.out.print("Donner votre filiere : ");
        String filiere = clavier.nextLine();

        St[nombreEtudiant] = new Etudiant(matricule, nom, prenom, age, filiere);
        nombreEtudiant++;

        System.out.println("Etudiant " + nom + " est ajoutee");
    }

    static void afficherEtudiant() {
        System.out.println("La liste des etudiants :");
        for (int i = 0; i < nombreEtudiant; i++) {
            St[i].afficherInformations(i);
        }
    }

    static int rechercherIndice(String matricule) {
        for (int i = 0; i < nombreEtudiant; i++) {
            if (St[i].matricule.equals(matricule)) {
                return i;
            }
        }
        return -1;
    }

    static void modifierEtudiant(String matricule) {
        int index = rechercherIndice(matricule);

        if (index != -1) {
            System.out.println("Modification des informations");

            System.out.print("Nouveau matricule : ");
            St[index].matricule = clavier.nextLine();

            System.out.print("Nouveau nom : ");
            St[index].nom = clavier.nextLine();

            System.out.print("Nouveau prenom : ");
            St[index].prenom = clavier.nextLine();

            System.out.print("Nouvel age : ");
            St[index].age = clavier.nextInt();
            clavier.nextLine();

            System.out.print("Nouvelle filiere : ");
            St[index].filiere = clavier.nextLine();

            System.out.println("Etudiant modifiee");
        } else {
            System.out.println("Etudiant introuvable !");
        }
    }

    static void supprimerEtudiant(String matricule) {
        int indice = rechercherIndice(matricule);

        if (indice == -1) {
            System.out.println("Etudiant introuvable !");
            return;
        }

        for (int i = indice; i < nombreEtudiant - 1; i++) {
            St[i] = St[i + 1];
        }
        St[nombreEtudiant - 1] = null;
        nombreEtudiant--;

        System.out.println("Etudiant supprimee");
    }
*/
    public static void main(String[] args) {

        int choix;

        do {
            afficherMenu();
            choix = lireEntier("Votre choix : ");
            traiterChoix(choix);
        } while(choix != 6);


/*        boolean quit = false;

        while (!quit) {
            System.out.println("=====================");
            System.out.println("     Edu Manager");
            System.out.println("=====================");
            System.out.println("1. Ajouter un etudiant");
            System.out.println("2. Afficher tous les etudiants");
            System.out.println("3. Rechercher un etudiant");
            System.out.println("4. Modifier un etudiant");
            System.out.println("5. Supprimer un etudiant");
            System.out.println("6. Quitter");
            System.out.print("Votre choix : ");
            int choice = clavier.nextInt();
            clavier.nextLine();

            switch (choice) {
                case 1:
                    ajouterEtudiant();
                    break;

                case 2:
                    afficherEtudiant();
                    break;

                case 3:
                    System.out.print("Quel est le matricule de l'etudiant : ");
                    String matric = clavier.nextLine();

                    int ind = rechercherIndice(matric);

                    if (ind != -1) {
                        St[ind].afficherInformations(ind);
                    } else {
                        System.out.println("Etudiant introuvable !");
                    }
                    break;

                case 4:
                    System.out.print("Quel est le matricule de l'etudiant : ");
                    String mat = clavier.nextLine();
                    modifierEtudiant(mat);
                    break;

                case 5:
                    System.out.print("Quel est le matricule de l'etudiant : ");
                    String matclr = clavier.nextLine();
                    supprimerEtudiant(matclr);
                    break;

                case 6:
                    quit = true;
                    break;

                default:
                    System.out.println("Saisie incorrecte, recommence !");
            }
        } */
    }
}
public class Etudiant{

    String matricule;
    String prenom;
    String nom;
    int age;
    String filiere;

    void afficherInformation(){
        System.out.println("Matricule " +matricule);
        System.out.println("Prenom " +prenom);
        System.out.println("Nom " +nom);
        System.out.println("Age " +age);
        System.out.println("Filiere " +filiere);
    }

    void estMajeure(){
        if(age >= 18)
            System.out.println("L'etudiant est un majeur");
        else
            System.out.println("L'etudiant est un mineur");
    }
}
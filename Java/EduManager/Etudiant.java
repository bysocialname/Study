public class Etudiant{
    String matricule;
    String nom;
    String prenom;
    int age;
    String filiere;

    Etudiant(String matricule, String nom, String prenom, int age, String filiere){
        this.matricule = matricule;
        this.nom = nom;
        this.prenom = prenom;
        this.age = age;
        this.filiere = filiere;
    }

    void afficherInformations(int k){
        System.out.println("Les informations de l\'etudiant " +k);

        System.out.println("Matricule : " + this.matricule);
        System.out.println("Nom : " + this.nom);
        System.out.println("Prenom : " + this.prenom);
        System.out.println("Age : " + this.age);
        System.out.println("Filiere : " + this.filiere);
    }

    void afficherNomComplet(){
        System.out.println("Nom Complet : " + this.nom + " " + this.prenom);
    }

    void estMajeure(){
        if(this.age > 18)
            System.out.println(this.nom + " " + this.prenom + " est majeure");
    }
}
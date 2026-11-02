import java.util.Scanner;

public class EduManager{

    Scanner sc = new Scanner(System.in);

    public static void main(String [] args){

        Etudiant etu = new Etudiant();

        System.out.println("Donner votre matricule");
        System.out.println("Donner votre prenom");

        etu.afficherInformation();
        etu.estMajeure();

    }
}
package home.user.java.essai;

public class UtilVariable{
    String chaine;
    double solde = 1000.0;
    public static void main(String [] args){
        UtilVariable obj = new UtilVariable();
        System.out.println("Valeur de solde =" + obj.solde);
        obj.affiche();
    }
    public void affiche(){
        chaine = new String("Bonjour");
        long nombre = 0;
        System.out.println("Valeur de nombre " + nombre);
    }
}
public class VariableFinale{
    final long NOMBRE;
    final double MAX = 100;

    public VariableFinale(){
        NOMBRE = 1000;
    }
    public static void main(String [] args){
        VariableFinale obj = new VariableFinale();
        System.out.println("Utilisation de variable constante");
        obj.affiche();
    }
    public void affiche(){
        System.out.println("Valeur de MAX =" +MAX);
        System.out.println("Valeur de NOMBRE =" +NOMBRE);
    }
}
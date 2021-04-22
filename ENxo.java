class Exo{
    public static void main(String args[]){
        Exooo EX = new Exooo();
        EX.afficher();
        Lampe Ampoule = new Lampe();
        Ampoule.afficher();
    }

};
class Exooo{
    public void afficher(){
        System.out.println("Hello world Ambroise ");
    }
};
class Lampe {
    public void allumer(){
        System.out.println("Je suis allumée ");
    }
    public void eteindre(){
        System.out.println("Je suis eteinte ");
    }
    public void afficher(){
        allumer();
        eteindre();
    }
}
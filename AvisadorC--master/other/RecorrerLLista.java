package other;

import main.Main;

/**
 *
 * @author mblan
 */
public class RecorrerLLista {
    
    public static void avaluarProfessorsAmbServei(){
        
        Main.profs.forEach(x -> x.volServei());
        
    }
    
}

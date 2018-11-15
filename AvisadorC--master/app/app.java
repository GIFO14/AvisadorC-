package app;

import main.Main;
import other.LlistaAssignatures;
import other.ProfessorAccions;
import other.RecorrerLLista;

/**
 *
 * @author mblan
 */
public class app {
    
    public static void main(String[] args) {
        
        Main.LlistarProfessors();
        RecorrerLLista.avaluarProfessorsAmbServei();
        Main.EstablirHorari();
        Horari();
    }
    
    public static void Horari(){
    
        while(LlistaAssignatures.n < LlistaAssignatures.horari.length){
            
            LlistaAssignatures.SaberProfessorAssignaturaActual();//Assignatura 1 del dia
            LlistaAssignatures.SaberProfessorAssignaturaActual();//Assignatura 2 del dia
            LlistaAssignatures.TimerPati();
            LlistaAssignatures.SaberProfessorAssignaturaActual();//Assignatura 3 del dia
            LlistaAssignatures.SaberProfessorAssignaturaActual();//Assignatura 4 del dia
            LlistaAssignatures.TimerPati();
            LlistaAssignatures.SaberProfessorAssignaturaActual();//Assignatura 5 del dia
            LlistaAssignatures.SaberProfessorAssignaturaActual();//Assignatura 6 del dia
            LlistaAssignatures.TimerDescansTarda();
 
        }
        
        LlistaAssignatures.TimerDecansCapDeSetmana();
        LlistaAssignatures.n = 0;
        
    }

}

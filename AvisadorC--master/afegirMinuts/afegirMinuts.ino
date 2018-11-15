package afegirMinuts;

import objects.Professor;
import other.LlistaProfessorsAmbServei;
import other.ProfessorAccions;

/**
 *
 * @author mblan
 */
class afegirMinuts{
    
    public:
      static void volServei(int minuts, ProfessorAccions prof){
        
        avisar(prof, minuts);
        afegirALlistaProfsAmbServei(prof);
        
      }
    
      static void avisar(ProfessorAccions prof, int minuts){
        
        prof.minutsPreAvis = minuts;
        
      }
    
      static void afegirALlistaProfsAmbServei(ProfessorAccions prof){
        
        LlistaProfessorsAmbServei.profsAmbServei.add(prof);
        
      }
    
}

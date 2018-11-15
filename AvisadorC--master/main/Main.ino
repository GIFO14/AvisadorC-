package main;

import java.util.ArrayList;
import java.util.List;
import other.LlistaAssignatures;
import other.ProfessorAccions;

/**
 *
 * @author mblan
 */
public class Main {

    public: 
      static String portafoli = null, educacioFisica = null, emprenedoria = null;
    static char[5][25] profs;
    
    public:
    
        static void LlistarProfessors() {
        
            char jordiBosch_Assignatures[3][9] = {"Català", "Llatí", "Castellà"};
            ProfessorAccions Jordi_Bosch = new ProfessorAccions("Jordi Bosch", jordiBosch_Assignatures, false, 0);//(nom, assignatures, volServei)
            profs[0]=

            char davidHugas_Assignatures[2][25] = {"Informàtica i Tecnologia", "Física i Química"};
            ProfessorAccions David_Hugas = new ProfessorAccions("David Hugas", davidHugas_Assignatures, true, 5);
            profs.add (David_Hugas);

            char annaMartinez_Assignatures[3][13] = {"Anglès", "Emprenedoria", "Socials"};
            ProfessorAccions Anna_Martinez = new ProfessorAccions("Anna Martínez", annaMartinez_Assignatures, true, 15);
            profs.add (Anna_Martinez);
        
            char ramon_Assignatures[2][16] = {"Tutoria", "Educació Física"};
            ProfessorAccions ramon = new ProfessorAccions("Ramón", ramon_Assignatures, true, 10);
            profs.add (ramon);
        
            char estefania_Assignatures[1][6] = {"Mates"};
            ProfessorAccions estefania = new ProfessorAccions("Estefania", estefania_Assignatures, false, 0);
            profs.add (estefania);
        
        }
    
    public:
        static void EstablirHorari(){
        
            LlistaAssignatures.EstablirHorari(
                /*Dilluns*/
                "Català", "Castellà", /*Pati*/portafoli, "Tutoria", /*Pati*/"Mates", "Socials", 
                
                /*Dimarts*/
                "Mates", "Informàtica i Tecnologia", /*Pati*/"Llatí", "Francès", /*Pati*/"Anglès", "Castellà", 
                
                /*Dimecres*/
                "Socials", educacioFisica, /*Pati*/"Anglès", "Mates", /*Pati*/"Català", "Llatí", 
                
                /*Dijous*/
                emprenedoria, "Francès", /*Pati*/"Català", "Informàtica i Tecnologia", /*Pati*/"Castellà", "Socials", 
                
                /*Divendres*/
                "Llatí", "Mates", /*Pati*/"Francès", "Anglès", /*Pati*/educacioFisica, "Informàtica i Tecnologia");
        
        }

}

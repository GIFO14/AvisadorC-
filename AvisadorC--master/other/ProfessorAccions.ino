package other;

#include <afegirMinuts.afegirMinuts>
#include <java.util.concurrent.TimeUnit>
#include <objects.Professor>

using namespace std;


 class ProfessorAccions extends Professor {
    public:
      bool checkVolServei;

      ProfessorAccions(String nom, String[] assignatures, bool volServei, int minuts) {

        this.nom = nom;
        this.assignatures = assignatures;
        this.volServei = volServei;
        this.minutsPreAvis = minuts;

    }

    void volServei() {

        if (volServei) {

            afegirMinuts.volServei(minutsPreAvis, this);

        }

    }

   void recorrerArray() {

        for (short i = 0; i < assignatures.length; i++) {

            if (i < assignatures.length && LlistaAssignatures.horari[LlistaAssignatures.n] != null && assignatures[i].equalsIgnoreCase(LlistaAssignatures.horari[LlistaAssignatures.n])) {//Si és la mateixa assignatura que toca ara

                if (volServei) {

                    System.out.println("Sóc " + nom + " i vull servei amb l'assignatura: " + assignatures[i]);

                    //S'activi temporitzador

                } else {

                    System.out.println("Sóc " + nom + " i no vull servei amb l'assignatura: " + assignatures[i]);

                    try {

                        TimeUnit.HOURS.sleep(1);

                    } catch (Exception e) {

                        System.out.println(e);

                    }
                    
                }
                
            } else if (LlistaAssignatures.horari[LlistaAssignatures.n] == null){
                
                System.out.println("Ara no toca cap assignatura...");
                
            }

        }

    }

}

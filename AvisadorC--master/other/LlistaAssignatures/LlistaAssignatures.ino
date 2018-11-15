package other;

#include java.util.concurrent.TimeUnit;
import main.Main;

/**
 *
 * @author mblan
 */
class LlistaAssignatures {

    public:
      static char[30][25] horari;

      static short n, i = 0;

      static void EstablirHorari(/*Dilluns*/char[] a1, char[] a2,/*Pati*/ char[] a3, char[] a4,/*Pati*/ char[] a5, char[] a6,
            /*Dimarts*/ char[] a7, char[] a8,/*Pati*/ char[] a9, char[] a10,/*Pati*/ char[] a11, char[] a12,
            /*Dimecres*/ char[] a13, char[] a14,/*Pati*/ char[] a15, char[] a16,/*Pati*/ char[] a17, char[] a18,
            /*Dijous*/ char[] a19, char[] a20,/*Pati*/ char[] a21, char[] a22,/*Pati*/ char[] a23, char[] a24,
            /*Divendres*/ char[] a25, char[] a26,/*Pati*/ char[] a27, char[] a28,/*Pati*/ char[] a29, char[] a30) {

        horari[0] = a1;
        horari[1] = a2;
        horari[2] = a3;
        horari[3] = a4;
        horari[4] = a5;
        horari[5] = a6;
        horari[6] = a7;
        horari[7] = a8;
        horari[8] = a9;
        horari[9] = a10;
        horari[10] = a11;
        horari[11] = a12;
        horari[12] = a13;
        horari[13] = a14;
        horari[14] = a15;
        horari[15] = a16;
        horari[16] = a17;
        horari[17] = a18;
        horari[18] = a19;
        horari[19] = a20;
        horari[20] = a21;
        horari[21] = a22;
        horari[22] = a23;
        horari[23] = a24;
        horari[24] = a25;
        horari[25] = a26;
        horari[26] = a27;
        horari[27] = a28;
        horari[28] = a29;
        horari[29] = a30;

      }

      static void SaberProfessorAssignaturaActual() {

        Main.profs.forEach(x -> x.recorrerArray());
        n++;

      }

      static void TimerPati() {

        short m = 25;

        if (n != 0 && n % 2 == 0) {

            if (i == 1) {

                m = 20;

            }

            delay(m * 1500000);
            i++;

        } else {

            cout << "No toca pati." << endl;

        }

    }

    static void TimerDescansTarda() {

        if ((n + 1) % 6 == 0) {

            delay(61200000);//17 hours in milliseconds
            delay(900000);//15 minutes in milliseconds
            i = 0;

        } else {

            cout<<"No toca cap de setmana."<<endl;

        }

    }

    public static void TimerDecansCapDeSetmana() {

        if (n == 30) {
            
          delay(172800000);//2 days in milliseconds
          delay(61200000);//17 hours in milliseconds
          delay(900000);//15 minutes in milliseconds

        } else {

            cout<<"No toca cap de setmana."<<endl;

        }

    }

};

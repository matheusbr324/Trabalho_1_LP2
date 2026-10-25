#include <iostream>

using namespace std;

class Guerreiro {
    private:
        string nome; 
        float vida;
        float ataque;
        float defesa_rasa;
        float defesa_percentual;
        float esquiva;
        float critico;

    public:
        string getNome (void) {return nome;}
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;} 

        void setNome (string n) {
            nome = n;
        }

        void setVida (float v) {
            vida = v; 
        }

        void setAtaque (float a) {
            ataque = a;
        }

        void setDefesaRasa (float dr) {
            defesa_rasa = dr;
        }

        void setDefesaPercentual (float dp) {
            defesa_percentual = dp;
        }

        void setEsquiva (float e) {
            esquiva = e;
        }

        void setCritico (float c) {
            critico = c;
        } 
}
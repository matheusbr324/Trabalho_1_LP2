#ifndef ARMAS_HPP
#define ARMAS_HPP

#include <iostream>

using namespace std;

class Arma {
    private:
        float vida_base = 0;
        float ataque_base = 0;
        float defesa_base_rasa = 0;
        float defesa_base_percentual = 0;
        float esquiva_base = 0;
        float critico_base = 0;

    public:
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;}

        void setVida (float v) {
            vida_base = v; 
        }

        void setAtaque (float a) {
            ataque_base = a;
        }

        void setDefesaRasa (float dr) {
            defesa_base_rasa = dr;
        }

        void setDefesaPercentual (float dp) {
            defesa_base_percentual = dp;
        }

        void setEsquiva (float e) {
            esquiva_base = e;
        }

        void setCritico (float c) {
            critico_base = c;
        } 
};

class Espada_longa {
    private:
        float vida_base = 0;
        float esquiva_base = 0;
        float dano_base = 10;
        float critico_base = 0.1;
        float defesa_rasa_bonus = 2; 
        float defesa_percentual_bonus = 0.1;

    public:
        float getVida (void) {return vida_base;}
        float getEsquiva (void) {return esquiva_base;}
        float getAtaque (void) {return dano_base;}
        float getCritico (void) {return critico_base;}
        float getDefesaRasaBonus (void) {return defesa_rasa_bonus;}
        float getDefesaPercentualBonus (void) {return defesa_percentual_bonus;}

};

class Espada_escudo {
    private:
        float vida_base = 0;
        float esquiva_base = 0;
        float dano_base = 5;
        float critico_base = 0.1;
        float defesa_rasa_bonus = 5; 
        float defesa_percentual_bonus = 0.3;

    public:
        float getVida (void) {return vida_base;}
        float getEsquiva (void) {return esquiva_base;}
        float getAtaque (void) {return dano_base;}
        float getCritico (void) {return critico_base;}
        float getDefesaRasaBonus (void) {return defesa_rasa_bonus;}
        float getDefesaPercentualBonus (void) {return defesa_percentual_bonus;}

};

class Machado_longo {
    private:
        float vida_base = 0;
        float esquiva_base = 0;
        float dano_base = 15;
        float critico_base = 0.15;
        float defesa_rasa_bonus = 0; 
        float defesa_percentual_bonus = 0.0;

    public:
        float getVida (void) {return vida_base;}
        float getEsquiva (void) {return esquiva_base;}
        float getAtaque (void) {return dano_base;}
        float getCritico (void) {return critico_base;}
        float getDefesaRasaBonus (void) {return defesa_rasa_bonus;}
        float getDefesaPercentualBonus (void) {return defesa_percentual_bonus;}

};

class Machado_escudo {
    private:
        float vida_base = 0;
        float esquiva_base = 0;
        float dano_base = 7;
        float critico_base = 0.1;
        float defesa_rasa_bonus = 3; 
        float defesa_percentual_bonus = 0.2;

    public:
        float getVida (void) {return vida_base;}
        float getEsquiva (void) {return esquiva_base;}
        float getAtaque (void) {return dano_base;}
        float getCritico (void) {return critico_base;}
        float getDefesaRasaBonus (void) {return defesa_rasa_bonus;}
        float getDefesaPercentualBonus (void) {return defesa_percentual_bonus;}

};

class Lanca {
    private:
        float vida_base = 0;
        float esquiva_base = 0;
        float dano_base = 15;
        float critico_base = 0.3;
        float defesa_rasa_bonus = 0; 
        float defesa_percentual_bonus = 0.0;

    public:
        float getVida (void) {return vida_base;}
        float getEsquiva (void) {return esquiva_base;}
        float getAtaque (void) {return dano_base;}
        float getCritico (void) {return critico_base;}
        float getDefesaRasaBonus (void) {return defesa_rasa_bonus;}
        float getDefesaPercentualBonus (void) {return defesa_percentual_bonus;}

};

#endif
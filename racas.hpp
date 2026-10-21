#include <iostream>

using namespace std;

class Raca {
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

class Humano {
    private:
        float vida_base = 50;
        float ataque_base = 5;
        float defesa_base_rasa = 3;
        float defesa_base_percentual = 0.1;
        float esquiva_base = 0.1;
        float critico_base = 0.1;

    public:
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;} 
}

class Elfo {
    private:
        float vida_base = 40;
        float ataque_base = 6;
        float defesa_base_rasa = 2;
        float defesa_base_percentual = 0.05;
        float esquiva_base = 0.2;
        float critico_base = 0.2;

    public:
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;} 
}

class Anao {
    private:
        float vida_base = 50;
        float ataque_base = 7;
        float defesa_base_rasa = 5;
        float defesa_base_percentual = 0.2;
        float esquiva_base = 0.0;
        float critico_base = 0.1;

    public:
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;} 
}

class Orc {
    private:
        float vida_base = 70;
        float ataque_base = 7;
        float defesa_base_rasa = 5;
        float defesa_base_percentual = 0.1;
        float esquiva_base = 0.0;
        float critico_base = 0.1;

    public:
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;}   
}

class Goblin {
    private:
        float vida_base = 30;
        float ataque_base = 5;
        float defesa_base_rasa = 0;
        float defesa_base_percentual = 0.0;
        float esquiva_base = 0.3;
        float critico_base = 0.3;

    public:
        float getVida (void) {return vida_base;}
        float getAtaque (void) {return ataque_base;}
        float getDefesaRasa (void) {return defesa_base_rasa;}
        float getDefesaPercentual (void) {return defesa_base_percentual;}
        float getEsquiva (void) {return esquiva_base;}
        float getCritico (void) {return critico_base;} 
}
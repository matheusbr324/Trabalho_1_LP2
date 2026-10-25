#include "atributos.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

float vida (float raca, float arma, float armadura) {
    float atributo;

    srand(time(NULL));
    atributo = raca + arma + armadura + (rand() % 20);

    return atributo;
}

float ataque (float raca, float arma, float armadura) {
    float atributo;

    srand(time(NULL));
    atributo = raca + arma + armadura + 2 + (rand() % 7);

    return atributo;
}

float defesa_rasa (float raca, float arma, float armadura) {
    float atributo;

    atributo = raca + arma + armadura;

    return atributo;
}

float defesa_percentual (float raca, float arma, float armadura) {
    float atributo;

    atributo = raca + arma + armadura;

    return atributo;
}

float esquiva (float raca, float arma, float armadura) {
    float atributo;

    atributo = raca + arma + armadura;

    return atributo;
}

float critico (float raca, float arma, float armadura) {
    float atributo;

    atributo = raca + arma + armadura;

    return atributo;
}


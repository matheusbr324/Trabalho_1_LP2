#include "gerador.hpp"
#include "atributos.hpp"

using namespace std;

Guerreiro geradora_de_guerreiros (string n, Raca r, Armadura a, Arma w) {
    Guerreiro g;

    g.setNome(n);

    g.setVida(vida(r.getVida(), w.getVida(), a.getVida()));
    g.setAtaque(ataque(r.getAtaque(), w.getAtaque(), a.getAtaque()));
    g.setDefesaRasa(defesa_rasa(r.getDefesaRasa(), w.getDefesaRasa(), a.getDefesaRasa()));
    g.setDefesaPercentual(defesa_percentual(r.getDefesaPercentual(), w.getDefesaPercentual(), a.getDefesaPercentual()));
    g.setEsquiva(esquiva(r.getEsquiva(), w.getEsquiva(), a.getEsquiva()));
    g.setCritico(critico(r.getCritico(), w.getCritico(), a.getCritico()));

    return g;
}
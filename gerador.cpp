#include "gerador.hpp"
#include "atributos.hpp"

using namespace std;

guerreiro geradora_de_guerreiros (string n, Raca r, Armadura a, Arma w) {
    guerreiro g;

    g.setNome(n);

    g.setVida(vida(r.getVida(), w.getVida(), a.getVida()));
    g.setAtaque(ataque(r.getAtaque(), w.getAtaque(), a.getAtaque()));
    g.setDefesaRasa(defesa_rasa(r.getDefesaRasa(), w.getDefesaRasaBonus(), a.getDefesaRasaBonus()));
    g.setDefesaPercentual(defesa_percentual(r.getDefesaPercentual(), w.getDefesaPercentualBonus(), a.getDefesaPercentualBonus()));
    g.setEsquiva(esquiva(r.getEsquiva(), w.getEsquiva(), a.getEsquiva()));
    g.setCritico(critico(r.getCritico(), w.getCritico(), a.getCritico()));

    return g;
}
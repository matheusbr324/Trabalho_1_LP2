#include "atribuidor.hpp"

using namespace std;

Raca raca_Anoes (Anao a)
{
    Raca r;

    r.setVida(a.getVida());
    r.setAtaque(a.getAtaque());
    r.setDefesaRasa(a.getDefesaRasa());
    r.setDefesaPercentual(a.getDefesaPercentual());
    r.setEsquiva(a.getEsquiva());
    r.setCritico(a.getCritico());

    return r; 
}

Raca raca_Elfos (Elfo e)
{
    Raca r;

    r.setVida(e.getVida());
    r.setAtaque(e.getAtaque());
    r.setDefesaRasa(e.getDefesaRasa());
    r.setDefesaPercentual(e.getDefesaPercentual());
    r.setEsquiva(e.getEsquiva());
    r.setCritico(e.getCritico());

    return r; 
}

Raca raca_Goblins (Goblin g)
{
    Raca r;

    r.setVida(g.getVida());
    r.setAtaque(g.getAtaque());
    r.setDefesaRasa(g.getDefesaRasa());
    r.setDefesaPercentual(g.getDefesaPercentual());
    r.setEsquiva(g.getEsquiva());
    r.setCritico(g.getCritico());

    return r; 
}

Raca raca_Humanos (Humano h)
{
    Raca r;

    r.setVida(h.getVida());
    r.setAtaque(h.getAtaque());
    r.setDefesaRasa(h.getDefesaRasa());
    r.setDefesaPercentual(h.getDefesaPercentual());
    r.setEsquiva(h.getEsquiva());
    r.setCritico(h.getCritico());

    return r; 
}

Raca raca_Orcs (Orc o)
{
    Raca r;

    r.setVida(o.getVida());
    r.setAtaque(o.getAtaque());
    r.setDefesaRasa(o.getDefesaRasa());
    r.setDefesaPercentual(o.getDefesaPercentual());
    r.setEsquiva(o.getEsquiva());
    r.setCritico(o.getCritico());

    return r;
}



Arma arma_Espada_longa (Espada_longa el)
{
    Arma arma;

    arma.setVida(el.getVida());
    arma.setAtaque(el.getAtaque());
    arma.setDefesaRasa(el.getDefesaRasaBonus());
    arma.setDefesaPercentual(el.getDefesaPercentualBonus());
    arma.setEsquiva(el.getEsquiva());
    arma.setCritico(el.getCritico());

    return arma; 
}

Arma arma_Espada_escudo (Espada_escudo es)
{
    Arma arma;

    arma.setVida(es.getVida());
    arma.setAtaque(es.getAtaque());
    arma.setDefesaRasa(es.getDefesaRasaBonus());
    arma.setDefesaPercentual(es.getDefesaPercentualBonus());
    arma.setEsquiva(es.getEsquiva());
    arma.setCritico(es.getCritico());


    return arma; 
}

Arma arma_Machado_longo (Machado_longo ml)
{
    Arma arma;

    arma.setVida(ml.getVida());
    arma.setAtaque(ml.getAtaque());
    arma.setDefesaRasa(ml.getDefesaRasaBonus());
    arma.setDefesaPercentual(ml.getDefesaPercentualBonus());
    arma.setEsquiva(ml.getEsquiva());
    arma.setCritico(ml.getCritico());

    
    return arma; 
}

Arma arma_Machado_escudo (Machado_escudo me)
{
    Arma arma;

    arma.setVida(me.getVida());
    arma.setAtaque(me.getAtaque());
    arma.setDefesaRasa(me.getDefesaRasaBonus());
    arma.setDefesaPercentual(me.getDefesaPercentualBonus());
    arma.setEsquiva(me.getEsquiva());
    arma.setCritico(me.getCritico());


    return arma; 
}

Arma arma_Lanca (Lanca l)
{
    Arma arma;

    arma.setVida(l.getVida());
    arma.setAtaque(l.getAtaque());
    arma.setDefesaRasa(l.getDefesaRasaBonus());
    arma.setDefesaPercentual(l.getDefesaPercentualBonus());
    arma.setEsquiva(l.getEsquiva());
    arma.setCritico(l.getCritico());

    return arma; 
}



Armadura armadura_Couro (Couro c)
{
    Armadura armadura;

    armadura.setVida(c.getVida());
    armadura.setAtaque(c.getAtaque());
    armadura.setDefesaRasa(c.getDefesaRasaBonus());
    armadura.setDefesaPercentual(c.getDefesaPercentualBonus());
    armadura.setEsquiva(c.getEsquiva());
    armadura.setCritico(c.getCritico());

    return Armadura;
}

Armadura armadura_Cota_de_malha (Cota_de_malha cm)
{
    Armadura armadura;

    armadura.setVida(cm.getVida());
    armadura.setAtaque(cm.getAtaque());
    armadura.setDefesaRasa(cm.getDefesaRasaBonus());
    armadura.setDefesaPercentual(cm.getDefesaPercentualBonus());
    armadura.setEsquiva(cm.getEsquiva());
    armadura.setCritico(cm.getCritico());

    return Armadura;
}

Armadura armadura_Placas (Placas p)
{
    Armadura armadura;

    armadura.setVida(p.getVida());
    armadura.setAtaque(p.getAtaque());
    armadura.setDefesaRasa(p.getDefesaRasaBonus());
    armadura.setDefesaPercentual(p.getDefesaPercentualBonus());
    armadura.setEsquiva(p.getEsquiva());
    armadura.setCritico(p.getCritico());

    return Armadura;
}

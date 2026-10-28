//Augusto Volpato e Matheus Müller
#include "allIncludes.hpp"

using namespace std;

int main (void) 
{
    //inicialização dos times
    vector<Guerreiro> time1;
    vector<Guerreiro> time2;

    //inicialização do random
    srand(time(NULL));

    //declaração de variáveis
    Raca raca;
    Arma arma;
    Armadura armadura;

    //opc de replay
    bool opc = false;

    //loop de jogo
    do {
        //clear nos times (precaução)
        time1.clear();
        time2.clear();

        //loop de criação dos times
        for (int i = 0; i < 2; i++) {
            bool flag = false;
            ifstream fp;
            
            //loop de escolha da raça
            while (!flag) {
                int opc_raca = 0;
                cout << "Escolha a raca do guerreiro do time " << (i + 1) << endl;
                cout << "1 - Anão" << endl;
                cout << "2 - Elfo" << endl;
                cout << "3 - Goblin" << endl;
                cout << "4 - Humano" << endl;
                cout << "5 - Orc" << endl;
                cin >> opc_raca;

                switch (opc_raca) {
                    case 1: {
                        Anao a;
                        raca = raca_Anoes(a);
                        fp.open("./Nomes/Anoes.txt");
                        if (fp.is_open()) {
                            flag = true;
                        } else {
                            cout << "Erro ao abrir arquivo de nomes!" << endl;
                        }
                        break;
                    }

                    case 2: {
                        Elfo e;
                        raca = raca_Elfos(e);
                        fp.open("./Nomes/Elfos.txt");
                        if (fp.is_open()) {
                            flag = true;
                        } else {
                            cout << "Erro ao abrir arquivo de nomes!" << endl;
                        }
                        break;
                    }

                    case 3: {
                        Goblin g;
                        raca = raca_Goblins(g);
                        fp.open("./Nomes/Goblins.txt");
                        if (fp.is_open()) {
                            flag = true;
                        } else {
                            cout << "Erro ao abrir arquivo de nomes!" << endl;
                        }
                        break;
                    }

                    case 4: {
                        Humano h;
                        raca = raca_Humanos(h);
                        fp.open("./Nomes/Humanos.txt");
                        if (fp.is_open()) {
                            flag = true;
                        } else {
                            cout << "Erro ao abrir arquivo de nomes!" << endl;
                        }
                        break;
                    }

                    case 5: {
                        Orc o;
                        raca = raca_Orcs(o);
                        fp.open("./Nomes/Orcs.txt");
                        if (fp.is_open()) {
                            flag = true;
                        } else {
                            cout << "Erro ao abrir arquivo de nomes!" << endl;
                        }
                        break;
                    }

                    default: {
                        cout << "Opcao invalida!" << endl;
                        break;
                    }
                }
            }

                Guerreiro g;
                int qtd_guerreiros;
                if (fp >> qtd_guerreiros) {
                    cout << "Quantidade de guerreiros do time " << (i + 1) << ": " << qtd_guerreiros << endl;
                    fp.ignore();
                } else {
                    cout << "Erro ao ler quantidade de guerreiros!" << endl;
                    cout << "Certifique-se de que o arquivo de nomes esteja no formato correto." << endl;
                    fp.close();
                    return 1;
                }
                string nome;
                    
                //loop de criação dos guerreiros
                for (int j = 0; j < qtd_guerreiros; j++) {
                    getline(fp, nome);

                    //Atribui aleatoriamente a arma
                    int opc_arma = rand() % 5;
                    if (opc_arma == 0) {
                        Espada_longa el;
                        arma = arma_Espada_longa(el);
                    } else if (opc_arma == 1) {
                        Espada_escudo ee;
                        arma = arma_Espada_escudo(ee);
                    } else if (opc_arma == 2) {
                        Machado_longo ml;
                        arma = arma_Machado_longo(ml);
                    } else if (opc_arma == 3) {
                        Machado_escudo me;
                        arma = arma_Machado_escudo(me);
                    } else {
                        Lanca l;
                        arma = arma_Lanca(l);
                    }

                    //Atribui aleatoriamente a armadura
                    int opc_armadura = rand() % 3;
                    if (opc_armadura == 0) {
                        Couro c;
                        armadura = armadura_Couro(c);
                    } else if (opc_armadura == 1) {
                        Cota_de_malha cm;
                        armadura = armadura_Cota_de_malha(cm);
                    } else {
                        Placas p;
                        armadura = armadura_Placas(p);
                    }

                    //Gera o guerreiro
                    g = geradora_de_guerreiros(nome, raca, armadura, arma);

                    //Dá um bonus de atributos caso seja herói
                    if(nome.ends_with("(H)")) {
                        g.setVida(g.getVida() + 20);
                        g.setAtaque(g.getAtaque() + 5);
                        g.setCritico(1);
                    }

                    if (i == 0) {
                        time1.push_back(g);
                        cout << "Guerreiro do time 1 criado com sucesso!";
                        cout << " Nome: " << time1[j].getNome() << endl;
                    } else {
                        time2.push_back(g);
                        cout << "Guerreiro do time 2 criado com sucesso!";
                        cout << " Nome: " << time2[j].getNome() << endl;
                    }
                    cout << endl;
                    nome = "";
                }
            fp.close();    
        }

        //flag para verificar se houve ataque critico
        bool flag1 = false;
        bool flag2 = false;

        //rand de acerto e de critico
        int n, m;

        //nova vida do guerreiro atacado
        float novaVida;

        while (time1.size() > 0 && time2.size() > 0) {
            int i = rand() % time1.size();
            int j = rand() % time2.size();
        
            flag1 = false;
            flag2 = false;

            //(inicio de ataque 1 em 2) 
            n = rand() % 101;

            //verifica se acerta
            if(n > (time2[j].getEsquiva()*100)) {
                //verifica critico: 
                m = rand() % 101;
                if(m < (time1[i].getCritico()*100)) {
                    cout << "Ataque critico do time 1 em: " << j << endl;
                    //dano em área
                    flag1 = true;
                    if (j < (time2.size() - 1)) {
                        novaVida = time2[j + 1].getVida() - ((time1[i].getAtaque() - time2[j + 1].getDefesaRasa()) * (1 - time2[j + 1].getDefesaPercentual()));
                        time2[j + 1].setVida(novaVida - 1);
                    }

                    if (j > 0) {
                        novaVida = time2[j - 1].getVida() - ((time1[i].getAtaque() - time2[j - 1].getDefesaRasa()) * (1 - time2[j - 1].getDefesaPercentual()));
                        time2[j - 1].setVida(novaVida - 1);
                    }
                }

                novaVida = time2[j].getVida() - ((time1[i].getAtaque() - time2[j].getDefesaRasa()) * (1 - time2[j].getDefesaPercentual()));
                time2[j].setVida(novaVida - 1);
            }
            //(fim de ataque 1 em 2)
            
            //(inicio de ataque 2 em 1)
            n = rand() % 101;

            //verifica se acerta
            if(n > (time1[i].getEsquiva()*100)) {
                //verifica critico: 
                    m = rand() % 101;
                    if(m < (time2[j].getCritico()*100)) {

                        cout << "Ataque critico do time 2 em: " << i << endl;
                        //dano em área
                        flag2 = true;
                        if (i < (time1.size() - 1)) {
                            novaVida = time1[i + 1].getVida() - ((time2[j].getAtaque() - time1[i + 1].getDefesaRasa()) * (1 - time1[i + 1].getDefesaPercentual()));
                            time1[i + 1].setVida(novaVida - 1);
                        }

                        if (i > 0) {
                            novaVida = time1[i - 1].getVida() - ((time2[j].getAtaque() - time1[i - 1].getDefesaRasa()) * (1 - time1[i - 1].getDefesaPercentual()));
                            time1[i - 1].setVida(novaVida - 1);
                        }
                }

                novaVida = time1[i].getVida() - ((time2[j].getAtaque() - time1[i].getDefesaRasa()) * (1 - time1[i].getDefesaPercentual()));
                time1[i].setVida(novaVida - 1);
            }
            //(fim de ataque 2 em 1)

            //verifica se morreu
            if(flag1) {
                if(j < (time2.size() - 1) && 1 > time2[j+1].getVida()) time2.erase(time2.begin() + j + 1);
                if(1 > time2[j].getVida()) time2.erase(time2.begin() + j);
                if(j > 0 && 1 > time2[j-1].getVida()) time2.erase(time2.begin() + j - 1);
            } else {
                if(1 > time2[j].getVida()) time2.erase(time2.begin() + j);
            }

            if(flag2) {
                if(i < (time1.size() - 1) && 1 > time1[i+1].getVida()) time1.erase(time1.begin() + i + 1);
                if(1 > time1[i].getVida()) time1.erase(time1.begin() + i);
                if(i > 0 && 1 > time1[i-1].getVida()) time1.erase(time1.begin() + i - 1);
            } else {
                if(1 > time1[i].getVida()) time1.erase(time1.begin() + i);
            }
            cout << "guerreiros do time 1 restantes: " << time1.size() << endl;
            cout << "guerreiros do time 2 restantes: " << time2.size() << endl;
            cin.get();
        
        }

        cout << "algum time morreu!" << endl;

        if(time1.size() < 1 && time2.size() < 1) {
            cout << "Empate!" << endl;
        }

        if(time2.size() < 1) {
            cout << "Vitoria do time 1!" << endl;
        }
        
        if(time1.size() < 1) { 
            cout << "Vitoria do time 2!" << endl;
        }

        //clear nos times
        time1.clear();
        time2.clear();

        //msg de replay
        cout << "Quer jogar de novo?" << endl;
        cout << "1 - Sim" << endl;
        cout << "0 - Nao" << endl;
        cin >> opc;
        cout << endl;

    } while (opc);

    return 0;
}
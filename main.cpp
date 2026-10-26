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
            FILE *fp;
            
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
                    case 1:
                        Anao a;
                        raca = raca_Anoes(a);
                        fp = fopen("./Nomes/Anoes.txt", "r");
                        flag = true;
                        break;

                    case 2:
                        Elfo e;
                        raca = raca_Elfos(e);
                        fp = fopen("./Nomes/Elfos.txt", "r");
                        flag = true;
                        break;

                    case 3:
                        Goblin g;
                        raca = raca_Goblins(g);
                        fp = fopen("./Nomes/Goblins.txt", "r");
                        flag = true;
                        break;
                    
                    case 4:
                        Humano h;
                        raca = raca_Humanos(h);
                        fp = fopen("./Nomes/Humanos.txt", "r");
                        flag = true;
                        break;

                    case 5:
                        Orc o;
                        raca = raca_Orcs(o);
                        fp = fopen("./Nomes/Orcs.txt", "r");
                        flag = true;
                        break;

                    default:
                        cout << "Opcao invalida!" << endl;
                        break;
                }

                
                if (flag) {
                    Guerreiro g;
                    int qtd_guerreiros = 0;
                    cout << "Quantos guerreiros deseja criar para o time " << (i + 1) << "?" << endl;
                    cin >> qtd_guerreiros;
                    
                    //loop de criação dos guerreiros
                    for (int j = 0; j < qtd_guerreiros; j++) {
                        
                        char nome[100];
                        fscanf(fp, "%s", nome);

                        int opc_arma = rand() % 5;
                        int opc_armadura = rand() % 3;

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

                        g = geradora_de_guerreiros(nome, raca, armadura, arma);

                        if (i == 0) {
                            time1.push_back(g);
                            cout << "Guerreiro do time 1 criado com sucesso!" << endl;
                            cout << "Nome: " << time1[j].getNome() << endl;
                        } else {
                            time2.push_back(g);
                            cout << "Guerreiro do time 2 criado com sucesso!" << endl;
                            cout << "Nome: " << time2[j].getNome() << endl;
                        }
                        cout << endl;
                    }

                //caso algum erro ocorra na criação do guerreiro
                } else {
                    cout << "Algum erro ocorreu!" << endl;
                    cout << "Terminando o programa..." << endl;
                    return 1;
                }

                fclose(fp);    
            }
        }

        //loop de batalha
        //flag1 e flag2 = 0

        //i randon entre 0 e time1.size()
        //j randon entre 0 e time2.size()

        //(inicio de ataque 1 em 2) 
        //n randon 0 a 100 (acerto)

        //if(n > (time2[j].getEsquiva*100)) (verificação se acerta)
            //verifica critico: 
                //m randon 0 a 100 
                //if(m < (time1[i].getCritico*100))
                    //sim: dano em j-1, j, j+1 (dano em area) + flag1  !!verficar se j não é o primeiro ou o ultimo do vector!!
                    //não: dano em j (dano individual)

            // calculo do dano: 
                //novaVida = time2[j].getVida() - ((time1[i].getAtaque() - time2[j].getDefesaRasa) * (1 - time2[j].getDefesaPercentual))
                //time2[j].setVida(novaVida)
        //(fim de ataque 1 em 2)
        
        //(inicio de ataque 2 em 1)
        //n randon 0 a 100 (acerto)

        //if(n > (time1[i].getEsquiva*100)) (verificação se acerta)
            //verifica critico: 
                //m randon 0 a 100 
                //if(m < (time2[j].getCritico*100))
                    //sim: dano em i-1, i, i+1 (dano em area) + flag2  !!verficar se i não é o primeiro ou o ultimo do vector!!
                    //não: dano em i (dano individual)

            // calculo do dano: 
                //novaVida = time1[i].getVida() - ((time2[j].getAtaque() - time1[i].getDefesaRasa) * (1 - time1[i].getDefesaPercentual))
                //time1[i].setVida(novaVida)
        //(fim de ataque 2 em 1)

        //verifica se morreu
        //if(flag1)
            //if(j < time2.size() && 1 > time2[j+1].getVida) errase time2[j+1]
            //if(1 > time2[j].getVida) errase time2[j]
            //if(j > 0 && 1 > time2[j-1].getVida) errase time2[j-1]
        //else 
            //if(1 > time2[j].getVida) errase time2[j]

        //if(flag2)
            //if(i < time1.size() && 1 > time1[i+1].getVida) errase time1[i+1]
            //if(1 > time1[i].getVida) errase time1[i]
            //if(i > 0 && 1 > time1[i-1].getVida) errase time1[i-1]
        //else 
            //if(1 > time1[i].getVida) errase time1[i]


        if(time1.size() < 1 && time2.size() < 1) {
            cout << "Empate!" << endl;
            break;
        }

        if(time2.size() < 1) {
            cout << "Vitoria do time 1!" << endl;
            break;
        }
        
        if(time1.size() < 1) { 
            cout << "Vitoria do time 2!" << endl;
            break;
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

    } while (!opc);

    return 0;
}
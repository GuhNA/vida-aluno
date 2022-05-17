#include "Alunos.cpp"

int main()
{
    srand(time(0));
    Alunos JJ(107820, "Jadson Lima", 25, 7) ;
    int escolha;
    int cont = 0;
    escolha = 150;
    while(JJ.getDia() != "Sexta" && cont < 3)
        {
            int horaAntiga=JJ.getHoras();
            JJ.necessidade(horaAntiga);
            horaAntiga=JJ.getHoras();
            JJ.showStatus();
            cout <<"1- Beber agua" << endl;
            cout <<"2- Comer" << endl;
            cout << "3- Descansar"<<endl;
            cout <<"4- Estudar"<< endl;
            cout << "5- Fazer Prova" << endl;
            cout << "6- Sair com Amigos" << endl;
            cout<<"7- Dormir" << endl;
            cout << "0- Sair" << endl << endl;
            cin >> escolha;
            switch(escolha)
            {
                case 1:
                    JJ.beberAgua();
                    break;
                case 2:
                    JJ.comer();
                    break;
                case 3:
                    JJ.descansar();
                    break;
                case 4:
                    JJ.estudar();
                    break;
                case 5:
                    JJ.fazerProva();
                    break;
                case 6:
                    JJ.sairAmigos();
                    break;
                case 7:
                    JJ.dormir();
                    break;
            }
            cont = JJ.controlador(cont);
            if(escolha == 0)
            {
                break;
            }
        JJ.necessidade(horaAntiga);
        }
    return 0;
}

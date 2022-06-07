#include "Alunos.cpp"

Alunos jDados()
{
    Alunos novo;
    int a;
    string b;
    cout << "Digite um nome: ";
    cin >> b;
    novo.setNome(b);
    cout << "Digite seu RA: ";
    cin >> a;
    novo.setRa(a);
    cout << "Digite sua idade: ";
    cin >> a;
    novo.setIdade(a);
    cout << "Digite o semestre atual: ";
    cin >> a;
    novo.setSemestre(a);

    return(novo);

}

int main()
{
    srand(time(0));
    Alunos Jogador;
    Jogador = jDados();
    int escolha;
    int cont = 0;
    escolha = 150;
    while(Jogador.getDia() != "Sexta" && cont < 3)
        {
            int horaAntiga=Jogador.getHoras();
            Jogador.necessidade(horaAntiga);
            horaAntiga=Jogador.getHoras();
            Jogador.showStatus();
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
                    Jogador.beberAgua();
                    break;
                case 2:
                    Jogador.comer();
                    break;
                case 3:
                    Jogador.descansar();
                    break;
                case 4:
                    Jogador.estudar();
                    break;
                case 5:
                    Jogador.fazerProva();
                    break;
                case 6:
                    Jogador.sairAmigos();
                    break;
                case 7:
                    Jogador.dormir();
                    break;
            }
            cont = Jogador.controlador(cont);
            if(escolha == 0)
            {
                break;
            }
        Jogador.necessidade(horaAntiga);
        }
    return 0;
}

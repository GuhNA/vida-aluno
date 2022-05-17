#include "Alunos.hpp"

//Construtor parametrico.

Alunos::Alunos(int ra, string nome,
			   int idade, int semestre)
{
	this->ra = ra;
	this->nome = nome;
	this->idade = idade;
	this->semestre = semestre;
	this->dia = "Sabado";
	this->nota = 0;
	this->energia = 100;
	this->fome = 0;
	this->sede = 0;
	this->horas = 6;
	this->estresse = 0;
	this->diasSem = { "Sabado","Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta"};
	this->trabalho = "fisico";
	this->aprendizado = 0;
	this->trabalhou = false;

}

//Setters

void Alunos::setRa(int ra)
{
	this->ra = ra;
}

void Alunos::setNome(string nome)
{
	this->nome = nome;
}

void Alunos::setIdade(int idade)
{
	this->idade = idade;
}

void Alunos::setSemestre(int semestre)
{
	this->semestre = semestre;
}

void Alunos::setDia(string dia)
{
	this->dia = dia;
}

void Alunos::setNota(float nota)
{
	this->nota = nota;
}

void Alunos::setEnergia(int energia)
{
	this->energia = energia;
}

void Alunos::setFome(int fome)
{
	this->fome = fome;
}

void Alunos::setSede(int sede)
{
	this->sede = sede;
}

void Alunos::setHoras(int horas)
{
	this->horas = horas;
}

void Alunos::setEstresse(int estresse)
{
	this->estresse = estresse;
}

void Alunos::setDiasSem(string diasSem)
{
	this->diasSem.push_back(diasSem);
}
void Alunos::setAprendizado(int aprendizado)
{
	this->aprendizado = aprendizado;
}

void Alunos::setTrabalho(string trabalho)
{
	this->trabalho = trabalho;
}
void Alunos::setTrabalhou(bool trabalhou)
{
    this->trabalhou = trabalhou;
}

//Getters

int Alunos::getRa()
{
	return(this->ra);
}

string Alunos::getNome()
{
	return(this->nome);
}

int Alunos::getIdade()
{
	return(this->idade);
}

int Alunos::getSemestre()
{
	return(this->semestre);
}

string Alunos::getDia()
{
	return(this->dia);
}

float Alunos::getNota()
{
	return(this->nota);
}

int Alunos::getEnergia()
{
    return(this->energia);
}

int Alunos::getFome()
{
	return(this->fome);
}

int Alunos::getSede()
{
	return(this->sede);
}

int Alunos::getHoras()
{
	return(this->horas);
}

int Alunos::getEstresse()
{
	return(this->estresse);
}

vector<string> Alunos::getDiasSem()
{
	return(this->diasSem);
}

int Alunos::getAprendizado()
{
    return(this->aprendizado);
}

string Alunos::getTrabalho()
{
	return(this->trabalho);
}

bool Alunos::getTrabalhou()
{
    return(this->trabalhou);
}

//Ações

void Alunos::beberAgua()
{
	if (this->sede == 0)
	{
		cout << "Que vontade de urinar!!! Toda hora no banheiro..." << endl;
		this->estresse += 10;
		this->horas += 2;

		//controlador de sede e fome
		this->sede -= 10;
	}
	else
	{
		cout << "*Glub*" << endl;
		this->horas++;
		this->sede -= 50;
	}
}

void Alunos::comer()
{
	if(this->fome == 0)
	{
		cout << "Huuuugggooooo!!! Nao devia ter comida tanto" << endl;
		this->estresse += 10;
		this->horas += 2;
		this->fome -= 10;
	}
	else
	{
		cout << "nham nham" << endl;
		this->horas++;
		this->fome -= 40;
		this->energia += 5;
	}
}

void Alunos::descansar()
{
	int escolha = rand() % 100 + 1;

	//separar em porcentagens
	if( escolha > 40  && escolha <= 100)
	{
		cout << "Cara que musica boa..." << endl;
		this->estresse -= 15;
		this->horas++;
		this->energia += 10;
	}
	else if ( escolha > 10 && escolha <=40 )
	{
		cout << "Vou cochilar naquela arvore ali" << endl;
		this->estresse -= 50;
		this->horas += 3;
		this->energia += 30;
	}
	else
	{
		cout << "Esta impossivel relaxar hj!" << endl;
		this->estresse += 10;
		this->horas++;
	}

}

void Alunos::showStatus()
{
    cout<< endl << this->nome << endl << endl;
	cout << "Horas: " << getHoras() << endl;
	cout << "Sede: " << getSede() << "/100" << endl;
	cout << "Fome: " << getFome() << "/100" << endl;
	cout << "Energia: " << getEnergia() << "/100" << endl;
	cout << "Estresse: " << getEstresse() << "/100" << endl;
	cout << "Aprendizado: " << getAprendizado() << "/200" << endl;
	cout << "Dia Atual: " << this->dia << endl << endl;
}

void Alunos::estudar()
{
	int escolha;
	if (this->estresse >= 60)
	{
		escolha = rand() % 100 + 1;
	}
	else
	{
		escolha = rand() % 40 + 1;
	}
	if (escolha > 80 && escolha <= 100)
	{
		cout << "Estou dominando na materia, SOU O DEUS DA PROGRAMACAO MUAHAHAHAH!" << endl;
		this->aprendizado += 20;
		this->horas++;
		this->energia -= 5;
	}
	else if (escolha > 20  && escolha <= 80)
	{
		cout << "Como sera que consigo medir o tamanho desse array de string, dentro de uma funcao?" << endl;
		this->horas += 2;
		this->aprendizado += 10;
		this->energia -= 10;
		this->estresse += 15;
	}
	else
	{
		cout << "Chega!!! Cansado estou" << endl;
		this->estresse += 30;
		this->horas += 3;
		this->energia -= 30;
	}
}

void Alunos::trabalhar()
{
    int dif = 0;
    if(this->horas > 7)
    {
        dif = this->horas - 7;
    }
	if (this->aprendizado > 75)
	{
		this->trabalho = "mente";
	}
	if (this->trabalho == "fisico")
	{
		this->horas += 4+dif;
		this->energia -= 40;
		this->fome += 10;
		this->sede += 20;
		this->estresse += 15;
		cout << "Mais um dia de trabalho XD" << endl;
		this->trabalhou = true;
	}
	else
	{
		this->horas += 3+dif;
		this->energia -= 25;
		//eu queria q a fome fosse 10, como se passam 3 horas ela fica 15
		this->fome -=5;
		this->sede += 10;
		this->estresse += 35;
		cout << "Novo trabalho mais leve XD" <<endl;
		this->trabalhou = true;
	}
}

void Alunos::fazerProva()
{
	this->nota = this->aprendizado / 20;
	cout << "Nota: "<< this->nota << endl;
}

void Alunos::sairAmigos()
{
	int escolha;
	if (this->estresse >= 60)
	{
		int escolha = rand() % 100 + 1;
	}
	else
	{
		int escolha = rand() % 40 + 1;
	}
	if (escolha > 80 && escolha <= 100)
	{
		cout << "Cade o bruxo?!?" << endl;
		this->estresse-= 30;
		this->horas++;
		this->energia -= 20;
	}
	else if (escolha > 40  && escolha <= 80)
	{
		cout << "deu pra quebrar um galho" << endl;
		this->horas += 2;
		this->estresse -=10;
		this->energia -= 35;
	}
	//nao queria deixar esse range do anterior de 50%
	else if (escolha > 30 && escolha <= 40)
	{
		sairAmigos();
	}
	else if (escolha > 15 && escolha <= 30)
	{
		cout << "Esse role foi de outro nivel, pera... Onde eu estou?" << endl;
		this->estresse = 0;
		this->horas += 4;
		this->energia -= 60;
	}
	else
	{
		cout << "Mds eu bati no meu amigo!" << endl;
		this->estresse += 25;
		this->horas++;
		this->energia -= 30;
	}
}

void Alunos::dormir()
{
	if (this->horas >= 24 && this->energia  != 100)
	{
		//horas excedentes
		int a = this->horas - 24;

		//dormiu
		this->horas = 6;

		//desconta na energia as horas excedentes

		this->energia = 100 - (a * 10);

		attDia();
	}
	else if (this->energia == 100 && this->horas >= 24)
	{
		//acabou de dormir, porem estourou o horario, entao dormira ate mais tarde apenas, sem
		//penalidade.
		this->horas = 6;

		attDia();
	}

	else
	{
		this->energia = 100;
		this->horas += 6;
	}
}

void Alunos::attDia()
{
	vector<string> sem = this->diasSem;
	for (int i = 0; i < sem.size(); i++)
	{
		if (sem[i] == this->dia)
		{
			this->dia = sem[i + 1];
			break;
		}
	}
}

int Alunos::controlador(int cont)
{
	if (this->fome < 0)
	{
		this->fome = 0;
	}
	if (this->sede < 0)
	{
		this->sede = 0;
	}
	if (this->energia < 0)
	{
		cout << endl << "eu nao ... Zzzzzz" << endl;

		//energia em deficit
		int a = this->energia;
		this->energia == 100;
		this->dormir();
		if (horas <= 24)
		{
			this->energia += a;
		}
	}
	if (this->estresse >= 100)
	{
		cout << endl << "Nao esta vendo que estou estressado nao?!\n Nao irei fazer mais nada" << endl;
		attDia();
		this->energia = 100;
		this->horas = 6;
		this->fome = 50;
		this->sede = 50;
		this->estresse = 0;
		cont++;
		cout << cont << "/3 para o Game Over" << endl;
	}
	if (this->estresse < 0)
	{
		this->estresse = 0;
	}
	if (this->energia > 100)
	{
		this->energia = 100;
	}
	if (this->fome == 100)
	{
	    cout << endl << "Vou morrer de fome!...." << endl;
	    cont++;
	    cout << cont << "/3 para o Game Over" << endl;

		while (this->fome > 0)
		{
		    if(this->horas == 7 && this->dia != "Sabado" && this->dia != "Domingo")
                {
                    break;
                }
			comer();
		}
		this->fome = 0;
	}
	if (this->sede == 100)
	{
	    cout << endl << "Agua por favor, agua aaaaaaaa!" << endl;
	    cont++;
	    cout << cont << "/3 para o Game Over" << endl;
		while (this->sede > 0)
		{
		    if(this->horas >= 7 && !this->trabalhou && this->dia != "Sabado" && this->dia != "Domingo")
                {
                    break;
                }
			beberAgua();
		}
		this->sede = 0;
	}
		if (this->horas >= 24)
	{
	    this->trabalhou = false;
		dormir();
	}
	if(this->horas >= 7 && !this->trabalhou && this->dia != "Sabado" && this->dia != "Domingo")
    {
        trabalhar();
    }
    return cont;
}

void Alunos::necessidade(int horaAntiga)
{
    int nec = this->horas - horaAntiga;
    for(int i = 1; i <= nec; i++)
        {
            this->sede += 5;
            this->fome += 5;
        }
}

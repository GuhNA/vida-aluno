#ifndef ALUNOS_HPP
#define ALUNOS_HPP

#include<iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;
class Alunos
{
    //variaveis:

	int ra;
	string nome;
	int idade;
	int semestre;
	string dia;
	float nota;
	int energia;
	int fome;
	int sede;
	int horas;
	int estresse;
	int aprendizado;
	bool trabalhou;
	vector<string> diasSem;
	string trabalho;


	//Metodos:

	//Setters
public:
	void setRa(int ra);
	void setNome(string nome);
	void setIdade(int nome);
	void setSemestre(int semestre);
	void setDia(string dia);
	void setNota(float notas);
	void setEnergia(int energia);
	void setFome(int fome);
	void setSede(int sede);
	void setHoras(int horas);
	void setEstresse(int estresse);
	void setDiasSem(string diasSem);
	void setAprendizado(int aprendizado);
	void setTrabalho(string trabalho);
	void setTrabalhou(bool trabalhou);

	//Getters

	int getRa();
	string getNome();
	int getIdade();
	int getSemestre();
	string getDia();
	float getNota();
	int getEnergia();
	int getFome();
	int getSede();
	int getHoras();
	int getEstresse();
	vector<string> getDiasSem();
	int getAprendizado();
	string getTrabalho();
	bool getTrabalhou();

	//Construtores

	Alunos(int ra, string nome,
		int idade, int semestre);

	//Ações

	void beberAgua();
	void comer();
	void descansar();
	void estudar();
	void trabalhar();
	void fazerProva();
	void sairAmigos();
	void dormir();
	int controlador(int cont);
	void attDia();
	void showStatus();
	void necessidade(int horaAntiga);
};

#endif // ALUNOS_HPP

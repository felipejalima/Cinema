#include <iostream>
#include <stdlib.h>
#include <locale.h>
#define PrecoIngresso 15.00 //Caso o ingresso troque de valor, ? s? alterar aqui

using namespace std;

float TotalArrecadadoA=0;
float TotalArrecadadoB=0;
int CadeirasSessao18[10][10];
int CadeirasSessao21[10][10];
int op1;

void AcentosSessao18()
{
	system("cls");
	cout<<"\n";
	cout<<"   ----------CADEIRAS DA SESS?O DAS 18:00 HORAS----------"<<endl<<endl;
	cout<<" ";
	for(int col=1; col<=10; col++)
	{
		cout<<"  ["<<col<<"]";
	}
	cout<<"\n";
	int col, lin;
	for(col=0; col<10; col++)
	{
		cout<<"["<<(char)(col+65)<<"] ";
		for(lin=0; lin<10; lin++)
		{
			cout<<CadeirasSessao18[col][lin]<<"    ";
		}
		cout<<"\n\n";
	}
	system("pause");
	system("cls");
}

void AcentosSessao21()
{
	system("cls");
	cout<<"\n";
	cout<<"   ----------CADEIRAS DA SESS?O DAS 21:00 HORAS----------"<<endl<<endl;
	cout<<" ";
	for(int col=1; col<=10; col++)
	{
		cout<<"  ["<<col<<"]";
	}
	cout<<"\n";
	int col, lin;
	for(col=0; col<10; col++)
	{
		cout<<"["<<(char)(col+65)<<"] ";
		for(lin=0; lin<10; lin++)
		{
			cout<<CadeirasSessao21[col][lin]<<"    ";
		}
		cout<<"\n\n";
	}
	system("pause");
	system("cls");
}

void SelecionarAcentos()
{
	system("cls");
	char op2;
	cout<<"[A] Assentos da sess?o das 18:00 horas"<<endl;
	cout<<"[B] Assentos da sess?o das 21:00 horas"<<endl;
	cout<<"\n\nDigite a letra correspondente a sua op??o: ";
	cin>>op2;
	if(op2=='A'||op2=='a')
	{
		AcentosSessao18();
	}
	else
	{
		if(op2=='B'||op2=='b')
		{
			AcentosSessao21();
		}
		else
		{
			system("cls");
			cout<<"Op??o inv?lida!\n\n";
			system("pause");
			system("cls");
		}
	}
			
}

float PessoasIntSessao18=0, PessoasMeiaSessao18=0, PessoasIntSessao21=0, PessoasMeiaSessao21=0;

void VenderIngressos()
{
	//Codigo para venda de ingressos
	system("cls");
	int lin2, ingresso;
	char col2, sessao;
	cout<<"Digite a letra correspondente a sessao escolhida [A] 18:00 horas ou [B] 21:00 horas: ";
	cin>>sessao;
	switch(sessao)
	{
		case 'A':
			cout<<"Digite o n?mero correspondente ao tipo de ingresso [1] Normal ou [2] Estudante(meia): ";
			cin>>ingresso;
			switch(ingresso)
			{
				case 1:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Caso 2 ####################################################
				case 2:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Fim do caso 2 ########################
				default:
					system("cls");
					cout<<"Op??o inv?lida!\n\n";
					system("pause");
					system("cls");
			}
			break;
		case 'a':
			cout<<"Digite o n?mero correspondente ao tipo de ingresso [1] Normal ou [2] Estudante(meia): ";
			cin>>ingresso;
			switch(ingresso)
			{
				//Caso o ingresso seja do tipo normal
				case 1:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=1;
								TotalArrecadadoA+=PrecoIngresso;
								PessoasIntSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Caso 2 ####################################################
				case 2:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao18[col2-65][lin2-1]==0)
							{
								CadeirasSessao18[col2-65][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao18[col2-97][lin2-1]==0)
							{
								CadeirasSessao18[col2-97][lin2-1]=2;
								TotalArrecadadoA+=PrecoIngresso/2;
								PessoasMeiaSessao18++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Fim do caso 2 ########################
				default:
					system("cls");
					cout<<"Op??o inv?lida!\n\n";
					system("pause");
					system("cls");
			}
			break;
			//Fim da op??o "a"
			//Inicio da op??o "B"
			case 'B':
			cout<<"Digite o n?mero correspondente ao tipo de ingresso [1] Normal ou [2] Estudante(meia): ";
			cin>>ingresso;
			switch(ingresso)
			{
				case 1:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//In?cio de Caso 2 de "B"####################################################
				case 2:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Fim do caso 2 de "B"########################
				default:
					system("cls");
					cout<<"Op??o inv?lida!\n\n";
					system("pause");
					system("cls");
			}
			break;
			//Fim do caso "B"
			//In?cio do caso "b"
			case 'b':
			cout<<"Digite o n?mero correspondente ao tipo de ingresso [1] Normal ou [2] Estudante(meia): ";
			cin>>ingresso;
			switch(ingresso)
			{
				//In?cio do caso 1 de "b"
				case 1:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=1;
								TotalArrecadadoB+=PrecoIngresso;
								PessoasIntSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Fim do caso 1 de "b"
					//In?cio do caso 2 de "b"####################################################
				case 2:
					cout<<"Digite a letra e o n?merro correspondente ao assento desejado Exemplo: [A1], [B4], [J3], [D5], [C4]: ";
					cin>>col2>>lin2;
					switch(col2)
					{
						case 'A':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'B':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'C':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'D':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'E':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'F':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'G':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'H':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'I':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'J':
							if(CadeirasSessao21[col2-65][lin2-1]==0)
							{
								CadeirasSessao21[col2-65][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'a':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'b':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'c':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'd':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'e':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'f':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'g':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'h':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'i':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						case 'j':
							if(CadeirasSessao21[col2-97][lin2-1]==0)
							{
								CadeirasSessao21[col2-97][lin2-1]=2;
								TotalArrecadadoB+=PrecoIngresso/2;
								PessoasMeiaSessao21++;
								system("cls");
								cout<<"Ingresso adquirido com sucesso!\n";
								cout<<"Seu assento foi reservado.\n\n";
								system("pause");
								system("cls");
								break;
							}
							else
							{
								system("cls");
								cout<<"Falha ao adquirir o ingresso!\n";
								cout<<"Assento j? se encontra reservado!\n\n";
								system("pause");
								system("cls");
								break;
							}
						default:
							system("cls");
							cout<<"Op??o inv?lida!\n\n";
							system("pause");
							system("cls");
							break;
					}
					break;
					//Fim caso 2 de "b"########################
				default:
					system("cls");
					cout<<"Op??o inv?lida!\n\n";
					system("pause");
					system("cls");
			}
			break;
			//Fim do caso "b"
		//Se o usu?rio nao digitar "A" ou "a" ou "B" ou "B"
		default:
			system("cls");
			cout<<"Op??o inv?lida!\n\n";
			system("pause");
			system("cls");
	}
}

void TotalArrecadadoSessao()
{
	system("cls");
	cout<<"----- TOTAL ARRECADADO POR SESS?O: -----"<<endl;
	cout<<"Sess?o das 18:00 horas R$: "<<TotalArrecadadoA<<endl;
	cout<<"Sess?o das 21:00 horas R$: "<<TotalArrecadadoB<<endl;
	cout<<"\n";
	system("pause");
	system("cls");
}

void PercentualPessoasAeB()
{
	if(PessoasIntSessao18==0||PessoasIntSessao21==0)
	{
		system("cls");
		cout<<"Imposs?vel calcular o percentual neste momento!\n\n";
		system("pause");
		system("cls");
	}
	else
	{
		system("cls");
		cout<<"Percentual de estudantes da sess?o das 18:00 horas: "<<(float)(PessoasMeiaSessao18/(PessoasIntSessao18+PessoasMeiaSessao18))*100.0<<"%"<<endl;
		cout<<"Percentual de estudantes da sess?o das 21:00 horas: "<<(float)(PessoasMeiaSessao21/(PessoasIntSessao21+PessoasMeiaSessao21))*100.0<<"%";
		system("pause");
		system("cls");
	}
	
}

void Sair()
{
	system("cls");
	cout<<"----- TOTAL ARRECADADO POR SESS?O: -----"<<endl;
	cout<<"Sess?o das 18:00 horas R$: "<<TotalArrecadadoA<<endl;
	cout<<"Sess?o das 21:00 horas R$: "<<TotalArrecadadoB<<endl;
	cout<<"\n";
	cout<<"Quantida de pessoas que assitiram a sess?o das 18:00 horas: "<<PessoasIntSessao18+PessoasMeiaSessao18<<endl;
	cout<<"Quantida de pessoas que assitiram a sess?o das 21:00 horas: "<<PessoasIntSessao21+PessoasMeiaSessao21<<endl;
	cout<<"\n\n";
	cout<<"Percentual de estudantes da sess?o das 18:00 horas: "<<(float)(PessoasMeiaSessao18/(PessoasIntSessao18+PessoasMeiaSessao18))*100.0<<"%"<<endl;
	cout<<"Percentual de estudantes da sess?o das 21:00 horas: "<<(float)(PessoasMeiaSessao21/(PessoasIntSessao21+PessoasMeiaSessao21))*100.0<<"%";
	cout<<"\n\n";
	cout<<"Pressiona qualquer tecla para sair";
	exit(0);
}

void Menu()
{
	//Aqui fica o menu principal do programa e suas respectivas op??es
	setlocale(LC_ALL,"Portuguese");
	cout<<"--------------------------"<<endl;
	cout<<"----- MENU PRINCIPAL -----"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"[1] Mostrar assentos"<<endl;
	cout<<"[2] Vender ingressos"<<endl;
	cout<<"[3] Total arrecadado por sess?o"<<endl;
	cout<<"[4] Sair"<<endl;
	cout<<"\n\nDigite o n?mero correspondente a sua op??o: ";
	cin>>op1;
	switch(op1)
	{
		case 1:
			SelecionarAcentos();
			break;
		case 2:
			VenderIngressos();
			break;
		case 3:
			TotalArrecadadoSessao();
			break;
		case 4:
			Sair();
			break;
		default:
			if(op1!=1&&op1!=2&&op1!=3&&op1!=4)
			{
			system("cls");
			cout<<"Op??o inv?lida!\n"<<endl;
			system("pause");
			system("cls");
			}
	}
}



void Inicializar()
	{
		char barra=219;
		string barraprogresso;
		int I;
		for(I=0; I<100; I++)
		{
			system("color 1F");
			cout<<"Inicializando CINEMA v2.0... "<<I<<"%"<<endl;
			barraprogresso+=barra;
			cout<<barraprogresso<<endl;
			system("cls");
		}
	}

int main()
{
	//Zerando todas as cadeiras
	int col, lin;
	for(col=0; col<10; col++)
	{
		for(lin=0; lin<10; lin++)
		{
			CadeirasSessao18[col][lin]=0;
			CadeirasSessao21[col][lin]=0;
		}
	}
	//Inicializando o menu principal do programa
	
	//Inicializar();
	do
	{
		Menu();
	}while(op1!=5);
}


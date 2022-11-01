#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>
#define MAX 100
struct cadastro
{
	int codigo;
	char nome[50];
	char cpf[15];
	char vacina[50];
	char data[20];
	int lote;
};


int main(int argc, char *argv[]) {
	
	struct cadastro ficha[MAX];
	
	int menu, cod, i, teste;
	char valid[15];
	cod = 0;
	// Cria uma linha 
	char linha()
	{
		printf("========================\n\n");	
	}
	
	
	
	char linha2()
	{
		printf("=================================\n\n");	
	}
	
	//menu de opção
	while(menu != 4)
	{
		
		linha();
		printf("Digite a opção desejada!\n\n", setlocale(LC_ALL,"Portuguese"));
		linha();
		printf("1 - Cadastrar Paciente Vacinado \n2 - Lista de Vacinados \n3 - Consultar por CPF \n4 - Sair", setlocale(LC_ALL,"Portuguese"));
		printf("\n\n========================\n\n");
		printf(">> ");
		scanf("%d", &menu);
	
		printf("\n");
		fflush(stdin);
		system("cls");
		
		switch(menu)
		{
			case 1 : {		
				
				ficha[cod].codigo = cod; 
				linha();
				printf("Cadastro de Paciente\n\n");
				linha();
				printf("Digite o nome do paciente:\n>>");
				gets(ficha[cod].nome);
				fflush(stdin);
				printf("Digite o CPF do paciente:\n>>");
				scanf("%s", &ficha[cod].cpf);
				fflush(stdin);
				printf("Digite a vacina aplicada:\n>>");
				scanf("%s", &ficha[cod].vacina);
				fflush(stdin);
				printf("Digite a data da vacinação:\n>>", setlocale(LC_ALL,"Portuguese") );
				scanf("%s", &ficha[cod].data);
				fflush(stdin);
				printf("Digite o lote da vacina:\n>>");
				scanf("%d", &ficha[cod].lote);
				fflush(stdin);
				cod++;
				printf("\n\nCadastro Finalizado......\n\n");
				system("pause");
				system("cls");
				
				break;
			};
			
			case 2 : {
				linha();
				printf("Lista de Vacinados \n\n", setlocale(LC_ALL,"Portuguese"));
				linha();
				for (i=0; i < cod; i++)
				{					
					linha();
					printf("Código : %d\n", ficha[i].codigo, setlocale(LC_ALL,"Portuguese"));
					printf("Nome : %s\n", ficha[i].nome);
					printf("CPF : %s\n", ficha[i].cpf);
					printf("Vacina : %s\n", ficha[i].vacina);
					printf("Data da Vacina : %s\n", ficha[i].data);
					printf("Lote : %d\n\n", ficha[i].lote);
					linha();
				
				}
				system("pause");
				system("cls");
				break;
			}
			
			case 3 : {
				teste = 0;
				linha2();
				printf("Digite o CPF que deseja consultar\n\n");
				printf("=================================\n\n>>");
				scanf("%s", &valid);
				fflush(stdin);
				for (i=0; i <cod; i++)
				{
					
					
					if (strcmp(ficha[i].cpf , valid) == 0)
					{
						
						printf("\n=================================\n\n");	
						printf("Código : %d\n", ficha[i].codigo, setlocale(LC_ALL,"Portuguese"));
						printf("Nome : %s\n", ficha[i].nome);
						printf("CPF : %s\n", ficha[i].cpf);
						printf("Vacina : %s\n", ficha[i].vacina);
						printf("Data da Vacina : %s\n", ficha[i].data);
						printf("Lote : %d\n", ficha[i].lote);
						printf("\n=================================\n\n");	
						teste++;
					}					
				}
				if (teste == 0)
				{	
					printf("\n========================\n\n");		
					printf("CPF não encontrado....\n\n", setlocale(LC_ALL,"Portuguese"));	
					linha();
				}
				system("pause");
				system("cls");
				break;
			}
			
			case 4 : {
				
				system("cls");
				printf("\nFinalizando.....");
				break;
			}
			default:
				
				linha();
				printf("Opção inválida\n\n", setlocale(LC_ALL,"Portuguese") );
				linha();
				system("pause");
				system("cls");
				break;
				
		}
	}
	
	return 0;
}

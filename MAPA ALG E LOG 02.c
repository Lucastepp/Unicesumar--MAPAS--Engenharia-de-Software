#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int apresentacao() //Imprime a apresentacao do Aluno
{
  	printf("--------------------------------------------------\n");
	printf("------------Aluno Lucas Teixeira Pinto------------\n");
	printf("-------MAPA 01 - Alg e Log de Programacao 02------\n");
	printf("--------------------------------------------------\n");
	printf("-----------------Aperte uma tecla-----------------\n");
	printf("-------------Para iniciar o programa--------------\n");
	
	system("pause");
	system("cls");
	
  return(0); 
}


int main() {
	
	apresentacao();
	
	char cpf[14];
	char nome[70];
	char sexo;
	int idade;
	int contador;
	char var1;
	
	
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("---------BEM VINDO AO TOTEN DO HOSPITAL X----------\n");
	printf("------------SISTEMA DE TRIAGEM INICIAL-------------\n");
	printf("--------DETECCAO DE POSSIVEL CASOS DE COVID--------\n");
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	
	system("pause");
	system("cls");
	
	//ENTRADA DE DADOS
	
	
	
	//NOME
	printf("---------------------------------------------------\n");
	printf("------------------DIGITE SEU NOME:-----------------\n");
	printf("---------------------------------------------------\n");
	
	fflush(stdin);
	
	gets(nome);
	
		
	system("cls");
	
	fflush(stdin);
	
	//CPF
	printf("---------------------------------------------------\n");
	printf("-------------------DIGITE SEU CPF:-----------------\n\n");
	printf("---------------------------------------------------\n");
	
	
	scanf("%s", &cpf);
	
	system("cls");
	
	//SEXO
	printf("---------------------------------------------------\n");
	printf("-------------------DIGITE SEU SEXO:----------------\n\n\n");
	printf("-- SENDO M PARA MASCULINO -- E -- F PARA FEMININO-- \n");
	
	fflush(stdin);
	
	scanf("%c", &sexo);
	//gets(sexo);
	
	
	if ((sexo != 'F') && (sexo != 'M')){
		printf("---------------------------------------------------\n");
		printf("----------ATENCAO DIGITE UM SEXO VALIDO:-----------\n\n\n");
		printf("-- SENDO M PARA MASCULINO -- E -- F PARA FEMININO-- \n");
	
	fflush(stdin);
	scanf("%c", &sexo);
		
	}
	
	system("cls");
	
	
	//IDADE
	printf("---------------------------------------------------\n");
	printf("------------------DIGITE SUA IDADE:----------------\n\n\n");
	printf("---------------------------------------------------\n");
	
	fflush(stdin);
	scanf("%d", &idade);
	
	system("cls");
	
	
	
	
	//ENTRADA DE DADOS 2
	
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("-----------FAVOR RESPONDER O FORMULARIO------------\n");
	printf("------DIGITE-S-PARA-SIM--OU-DIGITE-N-PARA-NAO------\n");
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	
	system("pause");
	system("cls");
	
		
	
	//PARTE 1 - FEBRE
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("------------------VOCE TEM FEBRE?------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	fflush(stdin);
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 5;
		
		system("pause");
		system("cls");
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
		}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
	
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 5;
			
			system("pause");
			system("cls");
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
		}	
		
	}
	
	fflush(stdin);
	
	//PARTE 2 - DOR DE CABECA
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("---------------VOCE TEM DORES DE CABECA?-----------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 1;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("---------------FAVOR DIGITAR S OU N----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 1;
			
			system("pause");
			system("cls");
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
		system("cls");
		
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
		}
	}
	
	fflush(stdin);
	
	//PARTE 3 - SECRECAO NASAL OU ESPIRROS
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("---------------VOCE TEM SECRECAO NASAL?------------\n");
	printf("---------------------OU ESPIRROS?------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 1;
		
		system("pause");
		system("cls");
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
	
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 1;
			
			system("pause");
			system("cls");
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
		}
	}
	
	fflush(stdin);
	
	//PARTE 4 - DORES DE GARGANTA
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("--------------VOCE TEM DORES DE GARGANTA?----------\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 1;
		
		system("pause");
		system("cls");
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 1;
			
			system("pause");
			system("cls");
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
			
		}
	}
	
	fflush(stdin);
	
	//PARTE 4 - TOSSE SECA
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("-----------------VOCE TEM TOSSE SECA?--------------\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 3;
		
		system("pause");
		system("cls");
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");

	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
	
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 3;
			
			system("pause");
			system("cls");
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
	
			system("pause");
			system("cls");
	
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
		}
	}
	
	fflush(stdin);
	
	
	//PARTE 5 - DIFICULDADE RESPIRATORIA
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("---------VOCE TEM DIFICULDADE RESPIRATORIA?--------\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 10;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 10;
			
			system("pause");
			system("cls");
			
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
		}
	}
	
	fflush(stdin);
		
	//PARTE 6 - DORES NO CORPO
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("--------------VOCE TEM DORES NO CORPO?-------------\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 1;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");

	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 1;
			
			system("pause");
			system("cls");
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");

		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
			
		}	
	}		
	
	fflush(stdin);
		
	//PARTE 7 - DIARREIA
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("----------------VOCE TEM DIARREIA?-----------------\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 1;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 1;
			
			system("pause");
			system("cls");
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
			
		}		
	}
	
	fflush(stdin);
		
	//PARTE 8 - CONTATO COM ALGUEM QUE TESTOU POSITIVO
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("---TEVE CONTATO COM ALGUEM QUE TESTOU POSITIVO? ---\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 10;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		fflush(stdin);
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 10;
			
			system("pause");
			system("cls");
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
		}			
	}
		
	fflush(stdin);
		
	//PARTE 9 - CONTATO COM ALGUEM QUE TESTOU POSITIVO
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("----TEVE CONTATO COM ALGUEM QUE TESTOU POSITIVO----\n");
	printf("---------PARA COVID-19 NOS ULTIMOS 14 DIAS?--------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	fflush(stdin);
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 10;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		fflush(stdin);
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 10;
			
			system("pause");
			system("cls");
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			
		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
			
		}			
	}
	
	fflush(stdin);
			
	//PARTE 10 - ESTEVE EM LOCAIS DE GRANDE AGLOMERACAO?
	printf("---------------------------------------------------\n");
	printf("---------------------------------------------------\n");
	printf("------ESTEVE EM LOCAIS DE GRANDE AGLOMERACAO?------\n");
	printf("---------------------------------------------------\n\n\n");
	printf("S - PARA SIM\nN - PARA NAO\n");
	
	scanf("%c", &var1);
	fflush(stdin);
	system("cls");
	
	if(var1 == 'S'){
		printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
		printf("---------------------------------------------------\n");
		contador = contador + 3;
		
		system("pause");
		system("cls");
		
	}
	if (var1 == 'N'){
		printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
		printf("---------------------------------------------------\n");
		
		system("pause");
		system("cls");
		
	}
	if (var1 != 'S' && var1 != 'N'){
	
		printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
		printf("--------------FAVOR DIGITAR S OU N-----------------\n\n\n");
		
		scanf("%c", &var1);
		fflush(stdin);
		system("cls");
		
		if(var1 == 'S'){
			printf("-------------VOCE RESPONDEU QUE SIM----------------\n");
			printf("---------------------------------------------------\n");
			contador = contador + 3;
			
			system("pause");
			system("cls");
			
		}
		if (var1 == 'N'){
			printf("-------------VOCE RESPONDEU QUE NAO----------------\n");
			printf("---------------------------------------------------\n");
			
			system("pause");
			system("cls");
			

		}
		if (var1 != 'S' && var1 != 'N'){
		
			printf("-----------VOCE DIGITOU ALGO INVALIDO--------------\n");
			
			system("pause");
			system("cls");
			
			
		}
	}
		
	fflush(stdin);	
	
	if (contador >= 0 && contador <= 9){
		printf("---------------------------------------------------\n");
		printf("---------------------------------------------------\n");
		printf("-------------------NOME: %s \n", nome);
		printf("-------------------CPF: %s\n", cpf );
		printf("-------------------SEXO: %c \n", sexo);
		printf("-------------------IDADE: %d\n", idade);
		printf("-------------PONTUACAO DE SINTOMAS: %d-------------\n", contador);
		printf("---------SEUS SINTOMAS SAO DE BAIXO RISCO----------\n");
		printf("-----VOCE SERA ENVIADO PARA ALA DE BAIXO RISCO-----\n");
	} 	
	
	if (contador >= 10 && contador <= 19){
		printf("---------------------------------------------------\n");
		printf("---------------------------------------------------\n");
		printf("-------------------NOME: %s \n", nome);
		printf("-------------------CPF: %s\n", cpf );
		printf("-------------------SEXO: %c\n", sexo);
		printf("-------------------IDADE: %d\n", idade);
		printf("-------------PONTUACAO DE SINTOMAS: %d-------------\n", contador);
		printf("---------SEUS SINTOMAS SAO DE MEDIO RISCO----------\n");
		printf("-----VOCE SERA ENVIADO PARA ALA DE MEDIO RISCO-----\n");
	} 
	
		
	if (contador >= 20){
		printf("---------------------------------------------------\n");
		printf("---------------------------------------------------\n");
		printf("-------------------NOME: %s \n", nome);
		printf("-------------------CPF: %s\n", cpf );
		printf("-------------------SEXO: %c \n", sexo );
		printf("-------------------IDADE: %d\n", idade);
		printf("-------------PONTUACAO DE SINTOMAS: %d-------------\n", contador);
		printf("----------SEUS SINTOMAS SAO DE ALTO RISCO----------\n");
		printf("-----VOCE SERA ENVIADO PARA ALA DE ALTO RISCO -----\n");	
	}
	
system("pause");	
return 0;	
		
}
	

	

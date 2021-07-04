

programa
{
	
	funcao inicio()
	{
		//DECLARACOES
		
		real vetor[10]
		real valor_atual[10]
		real percent_atual[10]
		real dif_percent[10]
		real dif_valor[10]
		real maior_dif = 0		
		inteiro checagem
		inteiro contador
		inteiro i
		inteiro cont_temp = 0
		real valor_total
		

		//LEITURA PORCENTAGEM CARTEIRA DESEJADA
		
		faca{
	
			escreva("Bem vindo(a) ao novo sistema da Corretora Lodoners\n")
			escreva("=================================================\n")

			escreva("Digite os percentuais de objetivo de sua carteira\n")
			escreva("Caso nao queria investir em algo favor digite 0 \n")
			escreva("\n================================================\n")
		
			escreva("Qual o valor percentual desejado para CDBs\n")
			leia(vetor[1])
			escreva("\n================================================\n")

			escreva("Qual o valor percentual desejado para ACOES\n")
			leia(vetor[2])
			escreva("\n================================================\n")
	
			escreva("Qual o valor percentual desejado para FUNDOS\n")
			leia(vetor[3])
			escreva("\n================================================\n")

			escreva("Qual o valor percentual desejado para STOCKS\n")
			leia(vetor[4])
			escreva("\n================================================\n")
			
			escreva("Qual o valor percentual desejado para REITS\n")
			leia(vetor[5])
			escreva("\n===============================================\n")

			checagem = vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5]
			
			se (checagem != 100){
				 escreva("\n===============================================\n")
				 escreva("O total do percentual precisa ser igual a 100%===\n")
				 escreva("E todos os campos devem ser preenchidos com =====\n")
				 escreva("Numeros positivos ===============================\n")
				 escreva("=================================================\n")
				 
				 escreva("Recomecando... ==================================\n")
				 escreva("=================================================\n")
			}
			
		}enquanto((checagem != 100) e (vetor[1] >= 0) e (vetor[2] >= 0) e (vetor[3] >= 0) e (vetor[4] >= 0) e (vetor[5] >= 0))


		//LEITURA VALOR ATUAL EM REAL POR SEGMENTO
		
		//faca{
			escreva("=================================================\n")
			escreva("Agora digite os valores atuais em sua carteira===\n")
			escreva("Caso nao tenha valor algum, favor digite 0 =======\n")
			escreva("\n===============================================\n")

			escreva("Qual o valor em R$(real) aplicado em CDBs =======\n")
			leia(valor_atual[1])
			escreva("\n===============================================\n")

			escreva("Qual o valor em R$(real) aplicado em ACOES ======\n")
			leia(valor_atual[2])
			escreva("\n===============================================\n")

			escreva("Qual o valor em R$(real) aplicado em FUNDOS IMOB \n")
			leia(valor_atual[3])
			escreva("\n===============================================\n")

			escreva("Qual o valor em R$(real) aplicado em STOCKS =====\n")
			leia(valor_atual[4])
			escreva("\n===============================================\n")

			escreva("Qual o valor em R$(real) aplicado em REITS ======\n")
			leia(valor_atual[5])
			escreva("\n===============================================\n\n\n")

			
					
		//TESTE SE NUMERO E VALIDO / POSITIVO		
					
					
			se(valor_atual[1] < 0){ 
				
				escreva("Valor invalido na carteira CDBs=========\n")
				escreva("Qual o valor em R$(real) aplicado em CDBs =======\n")
				leia(valor_atual[1])
					
			}
			se(valor_atual[2] < 0){ 
				
				escreva("Valor invalido na carteira ACOES=========\n")
				escreva("Qual o valor em R$(real) aplicado em ACOES =======\n")
				leia(valor_atual[2])
					
			}
			se(valor_atual[3] < 0){
				
				escreva("Valor invalido na carteira FUNDOS=========\n")
				escreva("Qual o valor em R$(real) aplicado em FUNDOS =====\n")
				leia(valor_atual[3])
				
				
			}
			se(valor_atual[4] < 0){
				
				escreva("Valor invalido na carteira STOCKS=========\n")
				escreva("Qual o valor em R$(real) aplicado em STOCKS =====\n")
				leia(valor_atual[4])
					
			}

			se(valor_atual[5] < 0){
				escreva("Valor invalido na carteira REITS=========\n")
				escreva("Qual o valor em R$(real) aplicado em REITS ======\n")
				leia(valor_atual[5])
					
			}

				
			
		
		//VALOR TOTAL + PORCENTAGEM ATUAL	

		valor_total = valor_atual[1] + valor_atual[2] + valor_atual[3] + valor_atual[4] + valor_atual[5] 

		percent_atual[1] = (valor_atual[1] * 100) / valor_total
		percent_atual[2] = (valor_atual[2] * 100) / valor_total
		percent_atual[3] = (valor_atual[3] * 100) / valor_total
		percent_atual[4] = (valor_atual[4] * 100) / valor_total
		percent_atual[5] = (valor_atual[5] * 100) / valor_total



	//DIFERENCA DE PORCENTAGEM

		para(i=1; i<=5; i++){
		
			dif_percent[i] = percent_atual[i] - vetor[i]
			dif_valor[i] = ((dif_percent[i] / 100) * valor_total) * -1

		

		
	//TESTANDO MAIOR DIFERENCA E PASSANDO PRA POSITIVO

		
		se(dif_percent[i] > 0){
			se(dif_percent[i] > maior_dif){
				maior_dif = dif_percent[i]
			}
		}

		se(dif_percent[i] < 0){
			dif_percent[i] = dif_percent[i] * -1
			se(dif_percent[i] > maior_dif){
				maior_dif = dif_percent[i]
			
			}
		}
	}
	


		escreva("	\n\n OBRIGADO POR TER INSERIDO SEUS DADOS CORRETAMENTE ===\n" )
		escreva("	\n\n SEGUE SEUS DADOS E FORMAS PARA ATINGIR O SEU OBJETIVO ===\n\n" )
		escreva("\n O valor percentual desejado para CDBs e de: ", vetor[1], "%\n" )
		escreva("\n========================================================\n")
		escreva("\n O valor percentual desejado para ACOES e de: ", vetor[2], "%\n" )
		escreva("\n========================================================\n")
		escreva("\n O valor percentual desejado para FUNDOS IMOB e de: ", vetor[3], "%\n" )
		escreva("\n========================================================\n")
		escreva("\n O valor percentual desejado para STOCKS e de: ", vetor[4], "%\n" )
		escreva("\n========================================================\n")
		escreva("\n O valor percentual desejado para REITS e de: ", vetor[5], "%\n" )
		escreva("\n========================================================\n")
	
		escreva("\nA diferenca em porcentagem da sua carteira de CDBs e de: ", dif_percent[1],"%\n")
		escreva("\nA diferenca em valor que precisa ser alterada e de: R$", dif_valor[1]," Reais\n\n")
	
		escreva("\nA diferenca em porcentagem da sua carteira de ACOES e de: ", dif_percent[2],"%\n")
		escreva("\nA diferenca em valor que precisa ser alterada e de: R$", dif_valor[2]," Reais\n\n")
	
		escreva("\nA diferenca em porcentagem da sua carteira de FUNDOS e de: ", dif_percent[3],"%\n")
		escreva("\nA diferenca em valor que precisa ser alterada e de: R$", dif_valor[3]," Reais\n\n")
	
		escreva("\nA diferenca em porcentagem da sua carteira de STOCKS e de: ", dif_percent[4],"%\n")
		escreva("\nA diferenca em valor que precisa ser alterada e de: R$", dif_valor[4]," Reais\n\n")
	
		escreva("\nA diferenca em porcentagem da sua carteira de REITS e de: ", dif_percent[5],"%\n")
		escreva("\nA diferenca em valor que precisa ser alterada e de: R$", dif_valor[5]," Reais\n\n")

		escreva("\n========================================================\n")



	
		


		//TESTANDO CARTEIRA EQUILIBRADA OU DESEQUILIBRADA
		
		se((maior_dif == dif_percent[1]) e (maior_dif == dif_percent[2]) e (maior_dif == dif_percent[3]) e (maior_dif == dif_percent[4]) e (maior_dif == dif_percent[5])){
			escreva(" A sua carteira nao esta desiquilibrada!!! \n")
		}
		
		senao{
		
			escreva(" A sua carteira mais desiquilibrada e a\n")
			escreva("\n========================================================\n")
		
		
		
			se(maior_dif == dif_percent[1]){
				escreva("Carteira de CDB com ", dif_percent[1]," %\n")
				escreva("A diferenca de valor e de: R$", dif_valor[1]," Reais\n")
			}
			se(maior_dif == dif_percent[2]){
				escreva("Carteira de ACOES com ", dif_percent[2]," %\n")
				escreva("A diferenca de valor e de: R$", dif_valor[2]," Reais\n")
			}
			se(maior_dif == dif_percent[3]){
				escreva("Carteira de FUNDOS com ", dif_percent[3]," %\n")
				escreva("A diferenca de valor e de: R$", dif_valor[3]," Reais\n")
			}
			se(maior_dif == dif_percent[4]){ 
				escreva("Carteira de STOCKS com ", dif_percent[4],"%\n")
				escreva("A diferenca de valor e de: R$", dif_valor[4]," Reais\n")
			}
			se(maior_dif == dif_percent[5]){
				escreva("Carteira de REITS com ", dif_percent[5],"%\n")
				escreva("A diferenca de valor e de: R$", dif_valor[5]," Reais\n")	
			}
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 0; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
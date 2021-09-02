programa
{
	
	funcao inicio()
	{
		inteiro numero, count = 0
	
		escreva("Informe um número: ")
		leia(numero)

		para (inteiro i = 1; i <= numero; i++)
		{
			se (numero % i == 0 ) {
				count++
			}
		}

		se (count == 2) {
			escreva("Número primo!")
		} senao {
			escreva("Não é número primo!")
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 264; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
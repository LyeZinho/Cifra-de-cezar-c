#ifindef CIFRACEZAR_H
#define CIFRACEZAR_H
/*

Encriptação 

EncriptCDC(entradacomstring, chaveDeSaltos)
não retorna 
Basicamente ele pula de valor ascii em valor
ascii assim trocando o caracter na criptografia
dando saltos referentes ao valor (int chave)
trabalha diretamente com o valor ascii de cada 
caracter

*/
void EncripCDC(char *entrada, int saltos){
	
int n = 0;
	
	/*
    Caso o valor ascii do char seja maior que 
    240
    */
	while (entrada[n] != 0){



    /*
    remove 192 do valor ascii
	caso seja maior que 240
    */
		if ((entrada[n] + saltos) > 240)
		{

			entrada[n] -= 192;
		
		}


	/*
    Caso o valor ascii seja menor que
    48 adciona 192
    */
		if ((entrada[n] + saltos) < 48)
		{

			entrada[n] += 192;

		}

    /*
    Entrada = entada + chave 
    replica o processo para todos os caracteres
    
    */
		entrada[n] = entrada[n] + saltos;
		n++;
	}
}



/*
Basicamente o processo inverso da função 
EncriptCDC();
*/
void DecriptCDC(char *entrada, int saltos) {

int n = 0;
	

	while (entrada[n] != 0){
		
		if ((entrada[n] + saltos) > 240)
		{
			entrada[n] += 192;
		}
		
		if ((entrada[n] + saltos) < 48)
		{
			entrada[n] -= 192;
		
		}

		entrada[n] = entrada[n] - saltos;
		n++;
	}
}

#endif

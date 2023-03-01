#include <stdio.h>
#include <stdlib.h>

float ordenando_faturamento (float faturamento_mensal[21]) {
		
		int dias = 21;
		float aux = 0;

		for (int i = 0; i < dias; i++) {
			for (int j = i+1; j < dias; j++) {
				if (faturamento_mensal[i] > faturamento_mensal[j]) {
					aux = faturamento_mensal[i];
					faturamento_mensal[i] = faturamento_mensal[j];
					faturamento_mensal[j] = aux;		
				}
			}
		}

		return faturamento_mensal[21];
}

float calcular_media_mensal (float faturamento[21]) {
		
		float guarda_soma;
		float media;

		for (int i = 0; i < 21; i++) {
			guarda_soma += faturamento[i];
		}

		media = guarda_soma / 21;

		return media;

}

int main () {
	
	float ordenando_faturamento (float faturamento_mensal[20]);
	float calcular_media_mensal (float faturamento[21]);

	float faturamento[21] = {22173.1664, 24537.6698, 26139.6134, 26742.6612, 42889.2258, 46251.174, 11191.4722, 3847.4823, 373.7838, 2659.7563, 48924.2448, 18419.2614, 35240.1826, 43829.1667, 18235.6852, 4355.0662, 13327.1025, 25681.8318, 1718.1221, 13220.495, 8414.61};
	
	float menor_faturamento = 0;
	float maior_faturamento = 0;
	float media_faturamento = 0;

	ordenando_faturamento(faturamento);

	menor_faturamento = faturamento[0];
	maior_faturamento = faturamento[20];
	media_faturamento = calcular_media_mensal(faturamento);
	

	printf("O menor faturamento da empresa neste mês foi de %f\n", menor_faturamento);
	printf("O maior faturamento da empresa neste mês foi de %f\n", maior_faturamento);
	
	printf("O faturamento em ordem Crescente é de:\n");

	for (int i = 0; i < 21; i++) {
		printf("%f\n", faturamento[i]);
	}
	
	printf("Dado estes dados, a média de faturamento mensal nos 21 dias úteis é de: %f\n", media_faturamento);

	return 0;
}

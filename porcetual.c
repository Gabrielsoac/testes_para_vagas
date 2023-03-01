#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {

	float sp = 67.836;
	float rj = 36.678;
	float mg = 29.229;
	float es = 27.165;
	float outros = 19.849;
	float soma = 0;

	soma = sp + rj + mg + es + outros;

	printf("A soma total do faturamento mensal da empresa é de: %f\n", soma);
	
	float porsp = sp*100/soma;
	float porrj = rj*100/soma;
	float pormg = mg*100/soma;
	float pores = es*100/soma;
	float poroutros = outros*100/soma;

	printf("A porcentagem que cada estado obteve de lucro em relação ao lucro máximo é respectivamente de:\n SP %f %%\n RJ %f %%\n MG %f %%\n ES %f %%\n Demais estados %f %%\n", porsp, porrj, pormg, pores, poroutros);


	return 0;
}

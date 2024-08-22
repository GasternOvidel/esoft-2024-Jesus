#include <stdio.h>  //biblioteca de entrade e saida

double adicao(double n1,double n2);
double sub(double n1,double n2);
double div(double n1,double n2);
double mult(double n1,double n2);
double media(double n1,double n2);

int main(){
	double valor1,valor2;
	char op;
	printf("Escolha uma opecacao:\n+ adicao\n- subtracao\n/ divisao\n* multiplicacao\nm media\n");
	scanf("%c",&op);
	printf("Digite o primeiro numero: ");
	scanf("%lf",&valor1);
	printf("Digite o segundo numero: ");
	scanf("%lf",&valor2);
	switch(op){
		case '+':
			printf("A soma e: %.2f",adicao(valor1,valor2));
			break;
		case '-':
			printf("A subtracao e: %.2f",sub(valor1,valor2));
			break;
		case '/':	
			printf("A divisao e: %.2f",div(valor1,valor2));
			break;
		case '*':	
			printf("A multiplicacao e: %.2f",mult(valor1,valor2));
			break;
		case 'm':	
			printf("A media e: %.2f",media(valor1,valor2));
			break;
		default:
		    printf("ERRO! Operacao");	
	}
	
	/*if(op == '+'){
		printf("A soma e: %.2f",adicao(valor1,valor2));
	}else if(op == '-'){
		printf("A subtracao e: %.2f",sub(valor1,valor2));
	}else if(op == '/'){
		printf("A divisao e: %.2f",div(valor1,valor2));
	}else if(op == '*'){
		printf("A multiplicacao e: %.2f",mult(valor1,valor2));
	}else{
		printf("A operacao e invalida!!!\n");
	}*/
	
	return 0;
}
double adicao(double n1,double n2){
	return n1 + n2;
}
double sub(double n1,double n2){
	return n1 - n2;
}
double div(double n1,double n2){
	return n1 / n2;
}
double mult(double n1,double n2){
	return n1 * n2;
}
double media(double n1,double n2){
	return (n1 + n2) / 2;
}

#include <stdio.h>  //biblioteca de entrade e saida

double adicao(double n1,double n2);
double sub(double n1,double n2);
double div(double n1,double n2);
double mult(double n1,double n2);

int main(){
	
	printf("%.2f\n",adicao(20,13));
	printf("%.2f\n",sub(20,13));
	printf("%.2f\n",div(20,13));
	printf("%.2f\n",mult(20,13));
	
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

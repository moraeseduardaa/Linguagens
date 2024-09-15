#include <stdio.h>
#include <math.h>
double soma (double n1, double n2);
double sub (double n1, double n2);
double div (double n1, double n2);
double mult (double n1, double n2);
int main(){
	printf("Soma %.2f\n",soma(8,3));
	printf("Sub %.2f\n",sub(8,3));
	printf("Div %.2f\n",div(8,3));
	printf("Mult %.2f\n",mult(8,3));
	return 0;
	
}
double soma(double n1,double n2){
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

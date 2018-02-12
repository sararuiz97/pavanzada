#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, *arr, cero = 0, 
				   uno = 0, 
				   dos = 0, 
				   tres = 0, 
				   cuatro = 0, 
				   cinco = 0, 
				   seis = 0, 
				   siete = 0, 
				   ocho = 0, 
				   nueve = 0;

	printf("Enter a number: \n");
	scanf("%d", &num);

	arr = (int*) malloc(num * sizeof(int));

	int temp = 1;
	for(int i=0; i<num; i++){
		arr[i] = temp;
		if(arr[i]==0){
			cero++;
		} else if (arr[i]==1){
			uno++;
		} else if (arr[i]==2){
			dos++;
		} else if (arr[i]==3){
			tres++;
		} else if (arr[i]==4){
			cuatro++;
		} else if (arr[i]==5){
			cinco++;
		} else if (arr[i]==6){
			seis++;
		} else if (arr[i]==7){
			siete++;
		} else if (arr[i]==8){
			ocho++;
		} else if (arr[i]==9){
			nueve++;
		}
		temp++;
	}

	//int foo = arr[4];
	//printf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n",
	//		cero, uno, dos, tres, cuatro, cinco, seis, siete, ocho, nueve);
	printf("%d\n", cero);
	printf("%d\n", uno);
	printf("%d\n", dos);
	printf("%d\n", tres);
	printf("%d\n", cuatro);
	printf("%d\n", cinco);
	printf("%d\n", seis);
	printf("%d\n", siete);
	printf("%d\n", ocho);
	printf("%d\n", nueve);
	
}
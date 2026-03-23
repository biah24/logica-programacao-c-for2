/*#include<stdio.h>

int main(){
	int n, fat = 1;
	n=50;

	for(int i = 1; i<=n;i++){
		fat *=i;
		printf("%d\n", fat);
		
}return 0;

}*/

#include <stdio.h>
//uso do continue, ele ignora e continua.
int main(){
	int num;
	for(int i=0; i<5;i++){
		printf("Numero: ");
		scanf("%d", &num);
	
		if(num % 2 == 0){
			continue;
			printf("teste");
			//break; na hora que encontar tal numero, para.
		}
		printf("Numero impar: %d\n", num);
		return 0;
}
}


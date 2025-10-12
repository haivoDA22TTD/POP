#include <stdio.h>
	
	int main(){
		int i;
		int j;
		int k;
		int dem = 0;
			for(i = 1; i <= 4; i++){
				for(j = 1; j <= 5; j++){
					for(k = 0; k <= 3; k++){
						printf("Hi\n");
						dem++;
					}
				}
			}
			return 0;
	}
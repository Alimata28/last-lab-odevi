#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
    int m,n,i,j, a, b, f[100][100];
    int v[3][3];
	int g[100][100];
	int sum, sum1;
	sum1 = 0;
    
    printf("Enter number of line>");
    scanf("%d", &m);
    printf("\nEnter number of row>");
    scanf("%d", &n); 
    printf("Matrix F (random numbers[0,250])\n");
    srand(time(NULL));
    for (i = 0; i < m; i++) {
    	for(j=0; j< n; j++){
    		f[i][j] = rand() % 250 + 1;
            printf("f[%d][%d]==> %d\n", i+1, j+1, f[i][j]);
            
		}    
    }
    printf("Enter the values of matrix v\n");
    for(i=0; i<3; i++){
    	for(j=0; j<3; j++){
    	    printf("v[%d][%d]==> %d\n", i+1,j+1, v[i][j]);
    	    scanf("%d", &v[i][j]);
		}
	}
    a=5, b=5;
    if(a<m){
    	int x=1;
    	while(x!= (a-1) && b != (n-1)){
    	    for(i=x;i<b;i++){
    	   	    for(j=x;j<b;j++){
    	   	    	sum1= sum1 + (f[i][j] * v[i-1][j-1]);
				}
		    }
	        sum= sum1;
	        printf("g[%d][%d]==> %d\n", x-3, b-3, sum);
	        b++;
            x++;
		}
	    a++;		
	} 
		 	
	else{
		printf("The matrix cannot be filter!");
	}

    return 0;  
}


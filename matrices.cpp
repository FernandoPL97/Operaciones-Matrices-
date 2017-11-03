#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int matriz1[3][3];
int matriz2[3][3];
int resultado[3][3];


	enum opciones {suma,resta,multi};
	int fi;
	int i,j;
	int temporal;
	int k;

main (){

    printf("\t\t\t\tBienvenido al Programa: \n");
    printf ("\t\t\t\tOperciones de Matricez \n");
    printf ("\t\t\t\tSeleccione la Operacion \n");
    printf ("\n");
	printf ("\t\t\t\t1)Operacion Suma \n") ;
	printf ("\t\t\t\t2)Operacion Resta\n");
	printf ("\t\t\t\t3)Operacion Multiplicacion \n");
	printf ("\n");
	
	printf ("--------------------------------------------------------------------------------\n");
	printf ("\n");
	printf ("   Selecciona una Opcion:\n");
	printf ("\n");
	system ("color F");
	scanf("%d",& fi);

	if(fi>3){
		printf("\t\t\t\tdato invalido\n\a");
		system("color 4");
	}
	 switch (fi-1){
	 	case suma:
	 		system("color E");
	 	  printf("\n");
		  printf ("Seleccionaste Suma\n");
		  printf("\n");
		  
	      printf ("Introduce los valores de la Matriz 1\n");
	 	     printf("\n");
	 	
	 	     for( i = 0 ; i < 3 ; i++){
		
		         for( j = 0 ; j < 3 ; j++){
			
			         printf("Valor en %d, %d :" , i , j);
			         printf("\n");
			         scanf("%d", &matriz1[i][j]);
			
		             }
		        }
	 	   printf("\n");       
             printf ("Introduce los valores de la Matriz 2\n");
             printf("\n");
		
	 	     for( i = 0 ; i < 3 ; i++){
		
		         for( j = 0 ; j < 3 ; j++){
			
			         printf("Valor en %d, %d :" , i , j);
			         printf("\n");
			         scanf("%d", &matriz2[i][j]);
			
		             }
		
	         }
	         for (i=0;i<3;i++){    
	            	for (j=0;j<3;j++){ 
    		            for (k=0;k<3;k++){
				             resultado[i][j]=(matriz1[i][k]+matriz2[k][j]);
                     	}
                 	}
             }

             printf("\n");
             printf ("Matriz 1:\n");
             printf("\n");
                    
	         for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", matriz1[i][j]);
			
		            }
	                	printf("\n");
         	 }
         	 
         	 printf("\n");
         	 printf ("Matriz 2:\n");
         	 printf("\n");
         	 
	         for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", matriz2[i][j]);
			
		            }
	                	printf("\n"); 
             }
             
             printf("\n");
             printf ("Matriz resultante:\n");
             printf("\n");
             
             for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", resultado[i][j]);
			
		            }
	                	printf("\n");
         	 }
             printf("\n");
             printf("Fin del Programa");
         	 
		  
		  break;
		  
	 	case resta:
	 		system("color 3");
	 	   printf("\n");
	 	   printf ("Seleccionaste Resta\n");
	 	   printf("\n");
	 	   
	 	   printf ("Introduce los valores de la Matriz 1\n");
	 	     printf("\n");
	 	
	 	     for( i = 0 ; i < 3 ; i++){
		
		         for( j = 0 ; j < 3 ; j++){
			
			         printf("Valor en %d, %d :" , i , j);
			         printf("\n");
			         scanf("%d", &matriz1[i][j]);
			
		             }
		        }
	 	   printf("\n");       
             printf ("Introduce los valores de la Matriz 2\n");
             printf("\n");
		
	 	     for( i = 0 ; i < 3 ; i++){
		
		         for( j = 0 ; j < 3 ; j++){
			
			         printf("Valor en %d, %d :" , i , j);
			         printf("\n");
			         scanf("%d", &matriz2[i][j]);
			
		             }
		
	         }
	         for (i=0;i<3;i++){    
	            	for (j=0;j<3;j++){ 
    		            for (k=0;k<3;k++){
				             resultado[i][j]=(matriz1[i][k]-matriz2[k][j]);
                     	}
                 	}
             }

             printf("\n");
             printf ("Matriz 1:\n");
             printf("\n");
                    
	         for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", matriz1[i][j]);
			
		            }
	                	printf("\n");
         	 }
         	 
         	 printf("\n");
         	 printf ("Matriz 2:\n");
         	 printf("\n");
         	 
	         for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", matriz2[i][j]);
			
		            }
	                	printf("\n"); 
             }
             
             printf("\n");
             printf ("Matriz resultante:\n");
             printf("\n");
             
             for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", resultado[i][j]);
			
		            }
	                	printf("\n");
         	 }
             printf("\n");
             printf("Fin del Programa");
         	 
		   break;
		   
	 	case multi:
	 		system("color E");
	 		 printf("\n");
	 	     printf ("Seleccionaste Multipicacion\n");
	 	     printf("\n");
	 	     printf ("Introduce los valores de la Matriz 1\n");
	 	     printf("\n");
	 	
	 	     for( i = 0 ; i < 3 ; i++){
		
		         for( j = 0 ; j < 3 ; j++){
			
			         printf("Valor en %d, %d :" , i , j);
			         printf("\n");
			         scanf("%d", &matriz1[i][j]);
			
		             }
		        }
		     printf("\n");       
             printf ("Introduce los valores de la Matriz 2\n");
             printf("\n");
		
	 	     for( i = 0 ; i < 3 ; i++){
		
		         for( j = 0 ; j < 3 ; j++){
			
			         printf("Valor en %d, %d :" , i , j);
			         printf("\n");
			         scanf("%d", &matriz2[i][j]);
			
		             }
		
	         }
	         

             for (i=0;i<3;i++){    
	            	for (j=0;j<3;j++){ 
    		            for (k=0;k<3;k++){
				             resultado[i][j]=resultado[i][j]+(matriz1[i][k]*matriz2[k][j]);
                     	}
                 	}
             }

             printf("\n");
             printf ("Matriz 1:\n");
             printf("\n");
                    
	         for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", matriz1[i][j]);
			
		            }
	                	printf("\n");
         	 }
         	 
         	 printf("\n");
         	 printf ("Matriz 2:\n");
         	 printf("\n");
         	 
	         for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", matriz2[i][j]);
			
		            }
	                	printf("\n"); 
             }
             
             printf("\n");
             printf ("Matriz resultante:\n");
             printf("\n");
             
             for( i = 0 ; i < 3 ; i++){
		
	            	for( j = 0 ; j < 3 ; j++){
			            printf("%d ", resultado[i][j]);
			
		            }
	                	printf("\n");
         	 }
             printf("\n");
             printf("Fin del Programa");
         	 break;
    }      
		
	return 0;
	
}

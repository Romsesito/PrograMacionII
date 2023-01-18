#include <stdio.h>

int main(){

    FILE *vector=NULL;
    FILE *vector2=NULL;
    vector=fopen("vector.txt","r+");
    vector2=fopen("vectormult.txt","w");
    int a,b;
    
    if (vector==NULL)
    {
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
        fscanf(vector,"%d",&a);
        b=a*3;
        fprintf(vector2,"%d\n",b);
        }
        fclose(vector);
        fclose(vector2);
        return 0;
     }

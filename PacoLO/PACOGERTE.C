#include <stdio.h>

int main(){

    FILE *vector=NULL;
    char buffer[100];
    double pi;

    vector=fopen("vector.txt","r+");
    vector=fopen("vector1.txt","w");

    if (vector==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

  int paco=3;
    for(int i=0; i<100; i++){
        fprintf(vector,"%d\n", i * paco);
    }
     fclose(vector);
     return 0;
}
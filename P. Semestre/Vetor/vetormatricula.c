#include <stdio.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL,"portuguese_Brazil");
    int mat[10], cont=0, i=0, j=0;
    for(i=0; i<10; i++) {
        printf("Informe a %dº matrícula: ", i+1);
        scanf("%d",&mat[i]);
    }
    
    printf("\nInforme sua matrícula: ");
    scanf("%d", &j);
    
    for(i=0; i<10; i++) {
        if (mat[i]==j) {
            cont+1;
        }
    }
    
    if(cont!=0){
        printf("Matrícula encontrada.");
    }
    if (cont==0) {
        printf("Matrícula inexistente.");
    }
}

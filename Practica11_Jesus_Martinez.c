/*Practica 11     Cruz Martinez Jesus Alberto
Fecha de entrega: 7 de enero */
#include <stdio.h>
/* Este programa genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos a través de un apuntador utilizando
un ciclo for.
*/

// funcion principal
int main(){
    //variables locales
    int* matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, cont=0, *ap;
        ap=matriz;
    //bloque de instrucciones
    printf("Imprimir Matriz\n");
    for (i=0 ; i<9 ; i++){
        if (cont == 3){
            printf("\n");
            cont = 0;
    }
        printf("%d\t",*(ap+i));
        cont++;
    }
    printf("\n");
return 0;
}

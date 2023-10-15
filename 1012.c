#include <stdio.h>

int main() {

    float a,b,c,Tarea,Carea,Traarea,Sarea,Rarea;
    scanf("%f %f %f",&a,&b,&c);
    Tarea = (a * c)/2;
    printf("TRIANGULO: %.3f\n",Tarea);
    Carea = 3.14159 * c * c;
    printf("CIRCULO: %.3f\n",Carea);
    Traarea = ((a + b)/2 * c);
    printf("TRAPEZIO: %.3f\n",Traarea);
    Sarea = b * b;
    printf("QUADRADO: %.3f\n",Sarea);
    Rarea = a * b;
    printf("RETANGULO: %.3f\n",Rarea);

    return 0;
}

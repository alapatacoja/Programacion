#include <iostream>
#include <string>


/* Muestra por pantalla las coordenadas del rectángulo
 con centro en (cX, cY) y lado l. */
void drawCentSquare(double cX, double cY, double l) {
    
    // Calculo de coordenadas de los vértices del cuadrado
    // a partir de su centro (cX, cY) y del lado l:
    double x0 = cX - l / 2, x1 = cX + l / 2;
    double y0 = cY - l / 2, y1 = cY + l / 2;
	// COMPLETAR
}

/* Genera una RSquare de orden n >= 1,
 con centro en (cX, cY) y cuadrado central de lado l. */
void rSquare(int n, double cX, double cY, double l) {
    // COMPLETAR
} 

/* Genera una RSquare de orden n >= 1, longitud 1.0 y
 centrada en (0, 0). */
void rSquare(int n) {
    // COMPLETAR     
}

/* Genera una RSquare de orden n >= 1, longitud 1.0 y
 centrada en (0, 0). Recibe como parámetro de entrada n */
int main(int argc, // Número de cadenas en el array argv
         char *argv[]) { // Array con los argumentos pasados
                         // por la línea de comandos.
                         // El primer elemento del vector
                         // argv[0] es el nombre del programa.
    if(argc!=2) {
        std::cout << "Error en los parámetros de entrada" << std::endl;
        std::cout << "./rSquare orden > 'datos.txt'" << std::endl;
        exit(1);
    }
	/* La función stoi convierte la secuencia de caracteres 
	que recibe como parámetro en un valor de tipo int y devuelve 
	el valor */
    int nivel = std::stoi(argv[1]); 
    rSquare(nivel);
    return 0;
}
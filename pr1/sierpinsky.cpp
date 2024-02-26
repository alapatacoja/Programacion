#include <iostream>
#include <string>

typedef struct {
    double x, y;
} Tpoint;


/* Dados tres puntos a, b y c este método imprime por pantalla las coordenadas
 del triángulo.*/
void drawTriangle(Tpoint a, Tpoint b, Tpoint c) {
    /* COMPLETAR */
}

/* Dados dos puntos a y b este método calcula el punto medio del intervalo
  definido por esos dos puntos [a,b].*/
Tpoint calculateMidPoint(Tpoint a, Tpoint b) {
    Tpoint nuevoPunto;
    nuevoPunto.x = (a.x + b.x) / 2;
    nuevoPunto.y = (a.y + b.y) / 2;
    return nuevoPunto;
}

/* Dados tres puntos a, b, y c que forman un triángulo, subdivide cada lado
 en dos partes generándose los puntos ab, bc y ac. A continuación se
 construyen tres triángulos combinando los vértices del triángulo original
 y los nuevos. */
void sierpinski(Tpoint a, Tpoint b, Tpoint c, int nivel){
    /* COMPLETAR */
    
}

int main(int argc, char *argv[]) {
			 
	if(argc!=2) {
	    std::cout << "Error en los parámetros de entrada" << std::endl;
	    std::cout << "./sierpinsky orden > 'datos.txt'" << std::endl;
	    exit(1);
	}
	
	int nivel = std::stoi(argv[1]);
			 
    Tpoint p1, p2, p3;
    /* Inicia los puntos de partida */
    p1.x = 0 ; p1.y = 0;
    p2.x = 0.5; p2.y = 1;
    p3.x = 1 ; p3.y = 0;
    sierpinski(p1, p2, p3, nivel);
    return 0;
}

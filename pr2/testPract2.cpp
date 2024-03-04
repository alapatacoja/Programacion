#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>      // std::setw
#include "prgString.cpp"


// b.rfind(a) devuelve string::npos si la subcadena a no se encuentra en b. Si la subcadena a se encuentra en b, entonces rfind devuelve la posición de inicio de la última ocurrencia de la subcadena a en b.

// string::npos es una constante estática que representa un valor inválido o una posición que no se encontró dentro de una cadena de caracteres

void compareIsPrefix(std::string a, std::string b) {
    std::cout << std::setw(12) << a << std::setw(12) << b 
		 << std::setw(12) << (isPrefix(a, b) ? "true" : "false") 
         << std::setw(12) << ((b.rfind(a) != std::string::npos) ? "true" : "false") << std::endl;
}


// b.find(a) busca la subcadena a dentro de la cadena b

void compareIsSubstring(std::string a, std::string b) {
    std::cout << std::setw(12) << a << std::setw(12) << b 
		 << std::setw(12) << (isSubstring(a, b) ? "true" : "false") 
         << std::setw(12) << ((b.find(a) != std::string::npos) ? "true" : "false") << std::endl;
}

void testIsPrefix() {
    std::string s[7] = {"", "rec", "pecur",
        "recurso", "remursi",
        "123456789", "recursion"};
    
    std::cout << std::setw(8) << "a" << std::setw(15) << "b" 
		      << std::setw(20) << "isPrefix(a, b)" 
			  << std::setw(12) << "b.rfind(a)" << std::endl;
    
    // a y b vacías
    compareIsPrefix(s[0], s[0]);
                      
    // solo a vacía
    compareIsPrefix(s[0], s[1]);
    
    // solo b vacía
   compareIsPrefix(s[1], s[0]);
                      
    // a de mayor longitud que b
    compareIsPrefix(s[3], s[1]);
    
    // a y b de igual longitud y a es prefijo de b
    compareIsPrefix(s[1], s[1]);
    
    // a y b de igual longitud y a no es prefijo de b
    compareIsPrefix(s[3], s[4]);
    
    // a de menor longitud que b y a es prefijo de b
    compareIsPrefix(s[1], s[3]);
    
    // a de menor longitud que b y a no es prefijo de b:
    // por el primer carácter
    compareIsPrefix(s[2], s[6]);
    
    // a de menor longitud que b y a no es prefijo de b:
    // por el ultimo carácter
    compareIsPrefix(s[3], s[6]);
    
    // a de menor longitud que b y a no es prefijo de b:
    // por un carácter intermedio
    compareIsPrefix(s[4], s[6]);
}

void testIsSubstring() {
    std::string s[9] = {"", "rec", "pecur",
        "recurso", "remursi",
        "123456789", "recursion",
        "sion", "curs"};
    
	std::cout << std::setw(8) << "a" << std::setw(15) << "b" 
		      << std::setw(20) << "isSubstring(a, b)" 
			  << std::setw(12) << "b.find(a)" << std::endl;
	
    // a y b vacías
    /* COMPLETAR */
    
    // solo a vacía
    /* COMPLETAR */
    
    // solo b vacía
    /* COMPLETAR */
    
    // a de mayor longitud que b
    /* COMPLETAR */
    
    // a y b de igual longitud y a es subcadena de b
    /* COMPLETAR */
    
    // a y b de igual longitud y a no es subcadena de b
    /* COMPLETAR */
    
    // a de menor longitud que b y a es sucadena de b
    // porque a es prefijo de b
    /* COMPLETAR */
    
    // a de menor longitud que b y a es sucadena de b
    // porque a es sufijo de b
    /* COMPLETAR */
    
    // a de menor longitud que b y a es sucadena de b
    // porque a está en b a partir de una posición intermedia
    /* COMPLETAR */       
    
}

int main(){
    testIsPrefix();
    testIsSubstring();
}



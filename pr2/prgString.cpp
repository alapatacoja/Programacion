#include <iostream>
#include <string>
#include "prgString.h"

/* Determina si a es o no prefijo de b.
 *
 * a String.
 * b String.
 * Devuelve bool, true si a es prefijo de b
 * y false en caso contrario.
 */
bool isPrefix(std::string a, std::string b) {
    if(a.length()==0){
        return true;
    } else if (a.length() > b.length()){
        return false;
    } else if(a[0]!=b[0]){
        return false;
    } else {
        return isPrefix(a.substr(1), b.substr(1));
    }
}

/* Determina si a es o no subcadena de b.
 *
 * a String.
 * b String.
 * boolean, true si a es subcadena de b 
 * y false en caso contrario.
 */
bool isSubstring(std::string a, std::string b) {
       
   if(a.length()>b.length()){
    return false;
   } else if (isPrefix(a, b)){
    return true;
   } else {
    return isSubstring(a, b.substr(1));
   }
}


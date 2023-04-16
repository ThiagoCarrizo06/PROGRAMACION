#include <iostream>
#include <string>
using namespace std;

  int calcularValor(char letra) {
    switch (letra) {
        case 'a':
        case 'e':
            return 1;
            
        case 'o':
        case 's':
            return 2; 
            
        case 'd':
        case 'i':
        case 'n':
        case 'r':
            return 3;
            
        case 'c':
        case 'l':
        case 't':
        case 'u':
            return 4;
            
        case 'm':
        case 'p':
            return 5;
            
        case 'b':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'q':
        case 'v':
        case 'x':
        case 'y':
        case 'z':
            return 6;
            
        case 'k':
        case 'w':
            return 7;
            
        default:
            return 0;
    }
}

  int main() {
  	int valorTotal = 0;
  	char letra;
    string mensaje;
      
      calcularValor(letra);
      
    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

     for (int i=0; i < mensaje.length();i++){
     	
     	     letra = mensaje[i];
        valorTotal += calcularValor(letra);        
		}  	
		
			
		cout<<"El valor del mensaje es: "<<valorTotal<<endl;
    return 0;
    }
 




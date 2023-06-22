#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<int> vecObtenerFactor(int n){
	vector<int> vectorFactores;
	
	  for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            vectorFactores.push_back(i);
        }
    }

   return vectorFactores;
}

int main() {
	int numero;
	
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	
	vector<int> vectorFactores = vecObtenerFactor(numero);
	
	cout<<"vectorFactores: [";
	for(int i = 0; i < vectorFactores.size(); i++){
		cout<<vectorFactores[i];
			if( i != vectorFactores.size() - 1){
				cout<<",";
  }
  
  }
	cout << "]\n";	
 
	return 0;
}

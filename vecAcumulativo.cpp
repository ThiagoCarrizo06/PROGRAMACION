#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
vector<int> obtenerValorAcumulado(vector<int> vectorA){
	vector<int> vectorAcumulado;
	int sumaAcumulada = 0;
	
	for(int i = 0; i<vectorA.size(); i++){
		sumaAcumulada += vectorA[i];
		vectorAcumulado.push_back(sumaAcumulada);
	}
	return vectorAcumulado;
}

int main() {
	srand(time(0));
	
	vector<int> vectorA;
	for (int i = 0; i < 3 ; i++){
		vectorA.push_back(rand() % 30);
	}
	cout<<"VectorA [";
	for(int i = 0; i < vectorA.size(); i++){
		cout<<vectorA[i];
		if(i != vectorA.size() - 1) {
			cout<<",";
		}
		cout<<"]"<<endl;
		
		vector<int> vectorAcumulado = obtenerValorAcumulado(vectorA);
		
		cout<<"vectorAcumulado [";
		for(int i=0; i < vectorAcumulado.size(); i++){
			cout<<vectorAcumulado[i];
			if( i != vectorAcumulado.size() - 1){
				cout<<",";
			}
		}
		cout<<"]"<<endl;			
		}
		return 0;
}

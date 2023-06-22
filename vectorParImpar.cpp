#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
vector<int> sumarParesImpares(vector<int> vectorA) {
    vector<int> vectorResultado(2, 0);     
    
    for (int i = 0; i < vectorA.size();i++) {
        if (vectorA[i] % 2 == 0) {
           
            vectorResultado[0] += vectorA[i]; 
        } else {
            
            vectorResultado[1] += vectorA[i]; 
        }
    }
    
    return vectorResultado;
}

int main() {
    srand(time(0));
    
    vector<int> vectorA;
    for (int i = 0; i <= 6; ++i) {
        vectorA.push_back(rand() % 30);
    }
    
    cout << "vectorA: [";
    for (int i = 0; i < vectorA.size(); ++i) {
            cout<<vectorA[i];
        if (i != vectorA.size() - 1) {
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
    
 
    vector<int> vectorResultado = sumarParesImpares(vectorA);
    
 
    cout<<"vectorResultado: ["<<vectorResultado[0]<<", "<<vectorResultado[1]<<"]"<<endl;
    
    return 0;
}


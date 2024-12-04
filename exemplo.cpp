#include <iostream>
#include <string>


using namespace std;

int main(){
    int a;
    int b;
    string nome; 
    
    cout << "Exemplo Inicial de Aplicativo" << endl;
    cout << "digite seu nome: ";
    //cin >> nome;
    getline(cin, nome);
    cout << "Digite um numero: "; 
    cin >> a;
    cout << "Digite outro numero abestado: ";
    cin >> b;
    cout << "fale " <<nome<< ", A soma dos numeros e: " << a + b << endl;

    system("pause");
    
    return 0;
}
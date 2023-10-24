#include <iostream>
using namespace std;
int main(){
    float numero1, numero2;
    numero1 = 7.3;
    float *fp;
    fp = &numero1;
    numero2 = *fp;
    cout << &numero1 << endl;
    cout << fp << endl;
}
// O endereço numero 1 é o mesmo do valor impresso. //

#include <iostream>
using namespace std;

int main()
{
    int n[100] ;
    int suma = 0;
    for (int i=0; i<100; i++){
        n[i]=i+1;
        suma=suma + n[i];
    }
    cout << suma;
    

 return 0;
}
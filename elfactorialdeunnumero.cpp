#include <iostream>
using namespace std;
int main()
{
int i,n;
float factorial = 1;
cout<<"ingresa un numero:";
cin>> n;
for(i = 1; i <= n; i++){
    factorial = factorial * i;

}

cout<<"El factorial de"<<n<<"es:"<<factorial;
return 0;


}


/*Să se genereze toate numerele naturale de 3 cifre
pentru care cifra sutelor este egală cu suma cifrelor zecilor şi unităţilor. */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int uc, uc2,aux;
    int x=100;
    cout<<"Numerele cu proprietatea ceruta sunt: "<<endl;
    /* while(x<=999){
        aux=x;
        uc=x%10;
        x/=10;
        uc2=x%10;
        x/=10;
        if(x==uc+uc2)
            cout<<aux<<" ";
        x=aux;
        x++;
    } */

    for(x=100; x<=999; x++){
        aux=x;
        uc=x%10;
        x/=10;
        uc2=x%10;
        x/=10;
        if(x==uc+uc2)
            cout<<aux<<" ";
        x=aux;
    }
    return 0;
    }

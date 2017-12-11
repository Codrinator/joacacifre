/* Se dă un vector cu n elemente numere întregi,
 să se determine cele mai mici trei valori pozitive. */
#include <iostream>
using namespace std;
int main(){
    int v[100],n;
    int min;
    cout<<"Introduceti dimensiunea vectorului: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>v[i];
        min=v[1];
    for(int i=1; i<=n; i++){
        if(min>v[i])
            min=v[i];
        v[n]=min;
    }
    min=v[2];
    for(int i=2; i<=n-1; i++){
        if(min>v[i])
            min=v[i];
        v[n-1]=min;
    }
    min=v[3];
    for(int i=3; i<=n-2; i++){
        if(min>v[i])
            min=v[i];
        v[n-2]=min;
    }
    cout<<v[n-2]<<" "<<v[n-1]<<" "<<v[n];
return 0;
}

#include<iostream>
#include<string>
using namespace std;

int main (){
int DDD= 0;
string cartel="DDD no encontrado";
cout<<"ingrese el codigo de area:";
cin>>DDD;
if(DDD == 71){
cartel= "el destino es salvador";
} if(DDD == 11){
cartel= "el destino es Sao pablo";
}if(DDD == 21){
cartel= "el destino es rio de janeiro";
} if(DDD == 32){
cartel= "el estino es Juiz de fora";
} if(DDD == 19){
cartel= "el dstino es campinas";
} if(DDD == 27){
cartel= "el destino es victoria";
} if(DDD == 31){
cartel= "el destino es belo horizonte";
}
 cout<<cartel<<endl;
return 0;
}

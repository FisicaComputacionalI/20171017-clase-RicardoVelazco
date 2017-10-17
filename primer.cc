//Programa que calcula la sumas de nùmeros impares del 1 al 10 
//Ricardo Alfonso Velazco Castillo
//17 de Octubre de 2017
#include <iostream>
using namespace std;
int main()
{
int sum=0; 
 int count=1;
 while(count<10)
   {
if((count%2)>0)
  {sum=sum+count;
  }
count++;
   }
cout<<"suma"<<sum<<endl;
return 0;
} 

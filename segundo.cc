//Programa que calcula la sumas de nùmeros pares del 1 al 10 
//Ricardo Alfonso Velazco Castillo
//17 de Octubre de 2017
//el resultado es 110
#include <iostream>
using namespace std;
int main()
{
  int sum=0;
  int count=1;
  while(count<21)
    {
      if((count%2)==0)
	{sum=sum+count;
	}
      count++;
    }
  cout<<"suma"<<sum<<endl;
  return 0;
}

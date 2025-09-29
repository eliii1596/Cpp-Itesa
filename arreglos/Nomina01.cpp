#include <iostream>
#include <conio.h>
//#include <iomanip>// para dar formato se salida con cout
#include <string.h>

using namespace std;
int main(){
	string Nombre[5]={"Pedro Martinez","Juan Perez","Maria Aguiar","David Peralta","Angel Bendito"};
	
	
	float Sueldo_Bruto[5]={22000.00,20000.00,25000.00,30000.00,35000.00};
	
	float Descuento[5]={500.00,600.00,1500.00,2000.00,2500.00};
	
	
	float Sueldo_Neto=0;
	
	float Total_Sueldo_Bruto=0;
	
	float Total_Descuento=0;
	
	float Total_Sueldo_Neto=0;
	
	cout<<endl;
	cout<<"Nombre"<<"\t\t\t"<<"Sueldo Bruto"<<"\t\t"<<"Descuento"<<"\t"<<"Sueldo Neto"<<endl;

	
	for(int i=0;i<5;i++){
		
		Sueldo_Neto=(Sueldo_Bruto[i]-Descuento[i]);// Calcula el Sueldo Neto
		Total_Sueldo_Bruto=Total_Sueldo_Bruto+Sueldo_Bruto[i];
		Total_Descuento=Total_Descuento+Descuento[i];
		Total_Sueldo_Neto=(Total_Sueldo_Neto+Sueldo_Neto);		
		
		cout<<Nombre[i]<<"\t\t"<<Sueldo_Bruto[i]<<"\t\t\t"<<Descuento[i]<<"\t\t"<<Sueldo_Neto<<endl;
	}
	
//	cout<<endl;
	
	cout<<"      "<<"\t\t\t"<<"--------"<<"\t\t"<<"---------"<<"\t"<<"-------"<<endl;
	
	cout<<"Totales .."<<"\t\t"<<Total_Sueldo_Bruto<<"\t\t\t"<<Total_Descuento<<"\t\t"<<Total_Sueldo_Neto<<endl;
	
	
	
	getch();
	return 0;
}
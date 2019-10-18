#include <iostream>
#include <cmath>

using namespace std;

//////Prototipo////////
void llenar(int matriz [][5], int n){

n=1;	
	for(int r=0; r<5; r++)
	{

		for(int c=0; c<5; c++)
		{
			matriz[r][c]=n++;
		}
	}
}
void mostrar(int matriz [][5], int n)
{	
		for (int r=0;r<5;r++)
	{
		for (int c=0;c<5;c++)
	
		cout<<matriz[r][c]<<"  ";
		cout<<endl;
		
	}
}
void llenarI(int matriz [][5], int n){
	   n=1;
		for (int c=4;c>=0;c--)
	
		for (int r=4;r>=0;r--)
		{
			matriz[r][c]=n++;
		}
   }
void DiagonalPrincipal(int matriz[][5], int n)
{
	
	for(int r=0; r<n; r++)
	cout<<matriz[r][r]<<"::";
	
}

void DiagonalArribaPrincipal(int matriz[][5], int n)
{
	for(int r=0; r<=3; r++)
	{

		for(int c=r+1; c<5; c++)
		{
			cout<<matriz[r][c]<<" :: ";
		}
	}
}
void DiagonalAbajoPricipal(int matriz [][5], int n)
{
	for(int r=0; r<=4; r++)
	{

		for(int c=0; c<r; c++)
		{
			cout<<matriz[r][c]<<" :: ";
		}
	}
}
void DiagonalSecundaria(int matriz [][5],int n){
		int c = 0;
		for (int r = 4; r>=0; r--){
			cout<<matriz[c][r]<<"::";
			c++;
		}
	}
void ArribaDiagonalSecundaria(int matriz[][5], int n){
	for (int i = 0; i< n -1; i++){
		for (int j = 0; j< n -i -1; j++)
		cout<<matriz[i][j]<<"::";

	}
}
void AbajoDiagonalSecundaria(int matriz [][5], int n)
{
 for(int r=1; r<=4; r++)
	{
		for(int c=n-r; c<n; c++)
		{
			cout<<matriz[r][c]<<" :: ";
		}
	}
}

void MatrizInversaPrincipal(int matriz[][5],int n){
	for (int i= n - 1; i >=0; i--){
		for (int j = n -1; j >=0; j--)
		cout<<matriz[i][j]<<" ";
		cout<<endl;
	}
		
		
	}

///////////////////////////////////
int main()
{
	int n=1;
	int matriz[5][5];
	cout<<"Matriz 5"<<endl;
	llenar(matriz,5);
	mostrar(matriz,5);
	cout<<endl<<endl;
	cout<<":Inverso:"<<endl<<endl;
	llenarI(matriz,5);
	mostrar(matriz,5);
	cout<<endl;
	/////Diagonal Principal
	cout<<"Diagonal Principal:"<<endl;
	DiagonalPrincipal(matriz,5);
	cout<<endl<<endl;
	cout<<"Mostrar diagonal Principal arriba"<<endl;
	DiagonalArribaPrincipal(matriz,5);
	cout<<endl<<endl;
	cout<<"Mostrar Diagonal Principal abajo"<<endl;
	DiagonalAbajoPricipal(matriz,5);
	cout<<endl<<endl;
	
	////Diagonal secundaria
	cout<<"Mostrar Diagonal Secundaria "<<endl;
	DiagonalSecundaria(matriz,5);
	cout<<endl<<endl;
	cout<<"Mostrar Arriba Diagonal Secundaria"<<endl;
	ArribaDiagonalSecundaria(matriz,5);
	cout<<endl<<endl;
	cout<<"Mostrar Abajo Diagonal Secundaria"<<endl;
	AbajoDiagonalSecundaria(matriz,5);
	cout<<endl<<endl;
	
	////Matriz Diagonal principal inversa
	MatrizInversaPrincipal(matriz,5);
	cout<<endl<<endl;
	//////////////////////////////
	cout<<"Fin del programa "<<endl;
}

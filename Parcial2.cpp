#include <iostream>
#include <cmath>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h >
#define PI 3.14159265 

using namespace std;

int main(){
	
	int i = 9, j=9;
	float h = 85, k = 237;
	int n;
	float suma, contador,suma1,contador1,suma2,contador2;
	
	double po[i][j],pe[i][j],pi[i][j],pu[i][j];
	double K;
	double A;
	K=10;
	A=64;
	for(i=0; i<9; i++){
		for(j=0;j<9;j++){
			po[i][j]= 0;
			pe[i][j]=0;
			pi[i][j]=0;
			pu[i][j]=0;
		}
	}
	
	
	for(i=0;i<9;i++){
		po[i][0]= 0;
		pe[i][0]=0;
		pi[i][0]=0; 
		pu[i][0]=0;
	}
	
	for(j=0;j<9;j++){
		po[0][j]= 0; 
		pe[0][j]=0;
		pi[0][j]=0;
		pu[0][j]=0;
	}
	
	for(j=0;j<9;j++){
		po[8][j]= 0;
		pe[8][j]=0;
		pi[8][j]=0 ;
		pu[8][j]=0;
	}
	
	for(i=0;i<9;i++){
		po[i][8]=100;
		pe[i][8]=100;
		pi[i][8]=100;
		pu[i][8]=100*A*K;
	}
	

	for(i=1; i<8; i++){
			for(j=1;j<8;j++){
				suma = 0;
				contador = 0;
				suma1=0;
				contador1=0;
				contador2=0;
				suma2=0;
				
				for(n=1;n<7;n++){
					contador = (((pow((-1),(n+1))+1)/n)*sin(n*PI*i/8)*(sinh(n*PI*j/8))/(sinh(n*PI))); 
					suma = contador + suma;
					
				}			
			po[i][j]=suma*200/PI;
			
			//pu[i][j]=-K*A*(25*(suma1+suma2));
			}
			
		}

	for(i=1;i<8;i++){
		suma1=0;
				contador1=0;
				
	for (n=1;n<7;n++){
		contador1=(((pow((-1),(n+1))+1)/n)*sin(n*PI*i/8)*(sinh(n*PI*2/8))/(sinh(n*PI))); 
					suma1 = contador1 + suma1;
					
	}
	pe[i][4]=suma1*200/PI;
			
	}
	for(j=1;j<8;j++){
		contador2=0;
				suma2=0;
		for (n=1;n<7;n++){
		contador2=(((pow((-1),(n+1))+1)/n)*sin(n*PI*2/8)*(sinh(n*PI*j/8))/(sinh(n*PI))); 
					suma2 = contador2 + suma2;
		}
		pi[4][j]=suma2*200/PI;
	}
	
	ofstream datos1 ("Fourier.dat");
	ofstream datos12 ("Temperaturax.dat");
	ofstream datos123("Temperaturay.dat");
	for(i=0; i<9; i++){
			for(j=0;j<9;j++){
	
	cout<<i<<"\t"<<pe[i][4]<<endl;	
	datos1<<i<<"\t"<<j<<"\t"<<po[i][j]<<endl;
	datos12	<<i<<"\t"<<pe[i][4]<<endl;	
	datos123<<j<<"\t"<<pi[4][j]<<endl;	
}
datos1<<endl;
datos12<<endl;
}
	
	return 0;
}

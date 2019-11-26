#include <iostream>
#include <cmath>
#include <fstream>
 #include <math.h>
using namespace std;

int main(){
	
	int i = 9, j=9, it;
	float h = 85, k = 237;
	int N=6;
	int n;
	double suma=0;
	double po[i][j];
	double AN[i][j];
	
	for(i=0; i<9; i++){
		for(j=0;j<9;j++){
			po[i][j]= 0;
			
		}
	}
	
	
	for(i=0;i<9;i++){
		po[i][0]= 100;
		
	}
	
	for(j=0;j<9;j++){
		po[0][j]= 0; 
		
	}
	
	for(j=0;j<9;j++){
		po[8][j]= 0;
		 
	}
	
	for(i=0;i<9;i++){
		po[i][8]=0;
		
	}
	

		
		
	
	
	for(it=1; it<1000;it++){
	for(i=0; i<9; i++){
			for(j=0;j<9;j++){
				
				if(i != 0 && j !=0 && i != 8 && j != 8){
				
				//po[i][j]= 0.25*(po[i+1][j]+po[i-1][j]+po[i][j+1]+po[i][j-1]);
				for(n=1;n<N+1;n++){
				suma=suma +((((pow(-1,n+1))+1)/n)*(sin(n*3.1416*i/8))*((sinh(n*3.1416*j/8))/(sinh(n*3.1416))));	
					
				}
				po[i][j]=suma*200/3.1416;
				}			
		
			}
		}
	}
	
	ofstream datos123 ("Punto.txt");
	for(i=0; i<9; i++){
			for(j=0;j<9;j++){
	
	cout<<i<<"\t"<<j<<"\t"<<po[i][j]<<endl;
//	cout<<i<<"\t"<<j<<"\t"<<suma[i][j]<<endl;	
	datos123<<i<<"\t"<<j<<"\t"<<po[i][j]<<endl;	
	
}
datos123<<endl;
}
//cout<<suma[i][j]<<endl;	
	return 0;
}

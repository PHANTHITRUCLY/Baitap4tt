#include"iostream"
#include"string.h"
#include"vector"
#include"fstream"
#include"conio.h"
#include"stdlib.h"
using namespace std;

fstream fi;
	int n;

struct cap{
	int dinh;
	int tong;
};


//doc file
void Docfile(int a[10][10]){
	fi.open("Matran.txt", ios::in);
	fi>>n;
	for(int i=0; i<n; i++){
	 for(int j=0; j<n; j++)
	 fi>>a[i][j];
	 }
	fi.close();
}

void Xuatdothi( int a[10][10],int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}	fi.close();
}
void Taomoi(int a[10][10], int &n){
	
	cout<<"\nNhap n: "; cin>>n;
	fi.open("Matranmoi.txt",ios::out);
	fi<<n<<endl;
	for(int i=0; i<n; i++){
	  for(int j=0; j<n; j++){
	  
		
    	cout<<"Trong so "<<i<<" den "<<j<<": ";
    	cin>>a[i][j];
    	fi<<a[i][j]<<" ";
		}
			fi<<endl;

	}
}
/* */



int main(){
	int n;
	int a[10][10];
//	Docfile(a);
//	Xuatdothi(a);
	Taomoi(a,n);
	Xuatdothi(a,n);
	getch();
}

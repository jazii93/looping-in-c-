#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	//jazib
	int n,i;
	char factorial;
	cout<<"enter integer"<<endl;
	cin>>n;
	if(n<0){
	cout<<"error";
	}else{
	for(i=1; i<=n; i++)
	
	{
	factorial*=i;
	}
	cout<<"factorial is="<<factorial;
	getch();
	return 0;
}
}
	



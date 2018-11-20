#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int n,reverse=0,remainder;
	cout<<"enter integer"<<endl;
	cin>>n;
	while(n!=0){
	remainder=n%10;
	reverse=reverse*10+remainder;
	n/=10;
	}
	cout<<"reverse"<<reverse;
	

getch();
return 0;
}

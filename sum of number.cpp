#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int val,num,sum=0;
	//jazib
	cout<<"enter number"<<endl;
	cin>>val;
	num=val;
	while(num!=0){
	sum=sum+num%10;
	num=num/10;
	}
	cout<<"the sum of digit of="<<val<<"is"<<sum;
	getch();
return 0;
}

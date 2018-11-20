#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char choice;
	cout<<"enter choice";
	cin>>choice;
	int a,b,sum,sub,mul,div;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	
	switch(choice){
	case '+':

			 sum=a+b;
		cout<<"sum is="<<sum;
		break;
	case '-':
			 sub=a-b;
		cout<<"sub is="<<sub;
		break;
		case '*':
			 mul=a*b;
		cout<<"multipication is="<<mul;
		break;
		case '/':
			 div=a/b;
		cout<<"divison is="<<div;
		break;
		default:
			cout<<"error";
			getch();
			return 0;
	}
	
	
	
	

getch();
}

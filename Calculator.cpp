#include<bits/stdc++.h>
using namespace std;

int main(){
	int ch,a,b;
	while(1){
		cout<<"1.Add 2.Subtract 3.Multiply 4.divide 5.exit";
		cin>>ch;
		if(ch==5)
			exit(0);
		cout<<"Enter the two integers";
		cin>>a>>b;
		switch(ch);
		{
			case 1:
				cout<<"The sum is :"<<a+b;
				break;
			case 2:
				cout<<"The difference is :"<<a-b;
				break;
			case 3:
				cout<<"The product is :"<<a*b;
				break;
			case 4:
				cout<<"The Quotient is :"<<a/b;
				break;
		}
	}
	return 0;
}
#include <iostream>

using namespace std;

int main()
{

int num1;
int totalNum=0;
char anotherNum='y';


while(anotherNum=='y')
{
cout<<"Enter your number: ";
cin>>num1;
totalNum=totalNum+num1;
cout<<"Got another number?: ";
cin>>anotherNum;

}

cout<<"Total: "<<totalNum<<endl;	
	return 0;
}

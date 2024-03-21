#include <iostream>
using namespace std;
int main()
{
char ch;
	cout <<"Please give a letter an press enter: ";
cin.get(ch);

	while (ch!='\n'){
	cout<<"you entered "<<ch<<endl;
	cin.get(ch);
}
cout <<"Continue? (Y/N) ";
	char answer;
	cin>> answer;
	while (!(answer=='Y' || answer=='N' )){
		cout<<"Please answer (Y/N)";
		cin >>answer;
	}
return 0;
}

#include <iostream>
using namespace std;
int main()
{
char ch;
cin.get(ch);
while(ch != '\n') {
cout<<ch;
cin.get(ch);
}
return 0;
}

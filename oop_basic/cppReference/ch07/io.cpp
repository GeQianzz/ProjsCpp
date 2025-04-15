#include <iostream>
using namespace std;


int main()
{
	char ch[20];
	cout<<"enter a sentence:"<<endl;
	cin.get(ch,10,'/');
	cout<<ch<<endl;
	cin.get(ch,20,'\n');  //指定换行符为终止字符
	cout<<ch<<endl;
	return 0;
}



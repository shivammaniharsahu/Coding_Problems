#include<bits/stdc++.h>
using namespace std;
//virtual funtion
//class oldClass
//{
//	int a;
//	public:
//	virtual void display()
//	{
//		cout<<"This is base class";
//	}	
//	
//};
//
//class newClass:public oldClass
//{
//	int a;
//	public:
//	void display()
//	{
//		cout<<"This is derived class";
//	}	
//	
//};
//int main()
//{
//	oldClass *ob1;
//	newClass ob2;
//	ob1=&ob2;
//	ob1->display();
//}

//virtual class
class a
{
	int aa;
	public:
	void display()
	{
		cout<<"This is class a";
	}		
};
class b:virtual public a
{
	int bb;
	public:
	void take()
	{
		cout<<"This is class b";
	}		
};

class c:virtual public a
{
	int cc;
	public:
	void input()
	{
		cout<<"This is class c";
	}		
};


class d:public c,public b
{
	int cc;
	public:
	void get()
	{
		cout<<"This is class d";
	}		
};

int main()
{
	d ob;
	ob.display();
	cout<<endl;
	ob.take();
	cout<<endl;
	ob.input();
	cout<<endl;
	ob.get();
	
}

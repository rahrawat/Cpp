#include<iostream>
using namespace std;


class object //Creating a abstarct class
{
	public :
		virtual void show()=0;  //pure virtual function
};

class airthmatic : public object
{
	int res;
	public:
	void add(int a, int b){
		res = a+b;
	}
	void add(int a, int b, int c)  //Function overloading
	{
		res = a+b+c;
	}
	void show()
	{
		cout<<"Result = "<<res<<endl;
	}

};

template <class T>
void getmax(T a, T b)
{
	T res;
	res=(a>b)?a:b;
	cout<<endl<<res<<" is bigger\n";
}
int main()
{
        object** o = new object*[2];
	airthmatic a;
        a.add (2,6);
        o[0] = &a;
        o[0]->show ();  // Dynamic dispatch - run time polymorphisms 
        a.add (9,11,23);
        o[0]->show ();
	



	getmax<int>(1,8);
	getmax<float>(19.3,8.4);
	getmax<char>('q','w');

	
	return 0;
}


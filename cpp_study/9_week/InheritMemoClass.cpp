#include <iostream>
using namespace std;

class Memo
{
	public:
		int _height;
		int _length;
		int _weight;
		
	public:
		Memo();
		Memo(int height,int length,int weight);
		Memo(Memo &m);
		~Memo();
		
		void cry();	
};

void Memo::cry()
{
//	cout<<"Memo Cry"<<endl;
} 

Memo::Memo()
{
//	cout<<"MemoĬ�Ϻ�������"<<endl; 
	_height = 0;
	_length = 0;
	_weight = 0;
}

Memo::Memo(int height,int length,int weight)
{
//	cout<<"Memo��ֵ���캯������"<<endl; 
	_height = height;
	_length = length;
	_weight = weight;
}

Memo::Memo(Memo &m)
{
//	cout<<"Memo�������캯������"<<endl; 
	_height = m._height;
	_length = m._length;
	_weight = m._weight;
}

Memo::~Memo()
{
//	cout<<"Memo������������"<<endl; 
}

class Tiger : public Memo
{
	public:
		int _num;   //num��¼���Ƶ�����
	public:
		 Tiger();
		 Tiger(int num);
		 Tiger(int height,int length,int weight,int num);
		 Tiger(Tiger &t);
		 ~Tiger();
		 
		 void cry();
}; 

void Tiger::cry()
{
//	cout<<"Tiger cry"<<endl;	
}

Tiger::Tiger()
{
//	cout<<"TigerĬ�Ϲ��캯������"<<endl; 
	_num = 0;
}

Tiger::Tiger(int num)
{
//	cout<<"Tiger��ֵ���캯��1����"<<endl; 
	_num = num;
}

Tiger::Tiger(int height,int length,int weight,int num):Memo(height,length,weight)
{
//	cout<<"Tiger��ֵ���캯��2����"<<endl; 
	_num = num;
}

Tiger::Tiger(Tiger &t):Memo(t)
{
//	cout<<"Tiger�������캯������"<<endl; 
	_num = t._num;
}

Tiger::~Tiger()
{
//	cout<<"Tiger������������"<<endl; 
}

Tiger AddTwoAnimal(Memo &m, Tiger t)
{
	Tiger s(t);
	Tiger s1;
	Memo m1(10,20,30);
	Memo m2;
	s1.cry();
	m1.cry();
	m1 = s1;
	m1.cry();
}

int main()
{
//	Tiger t1;
//	Tiger t2(10);
//	Tiger t3(10,20,30,40);
//	Tiger t4(t3);

	Memo m,*pm;
	Tiger t,*pt;
	
	pm = &m;
	pt = &t;
	
	m.cry();
	t.cry();
	
	m = t;
	m.cry();
	
	pm->cry();
	pt->cry();
	
	pm = pt;
	pm->cry();
	
	
	AddTwoAnimal(m,t);
}

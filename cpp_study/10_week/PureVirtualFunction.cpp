class Memo    //�������麯�����࣬�����ࡣ��������� �����������󣬵��ǿ�����������ָ�� 
{
	public:
		virtual void cry() = 0;    //���麯�� �������б����ض��崿�麯�� 
		void Show(); 
};

void Memo::Show()
{
	
}
 
class Tiger : public Memo
{
	public:
		void cry();
		void haha();
};

void Tiger::cry()
{
	
}

void Tiger::haha()
{
	
}

class Lion : public Memo
{
	public:
		void cry();
};

void Lion::cry()
{
	
}

int main()
{
	Memo *pm;
	Tiger t, *pt;
	Lion l, *pl;
	
	pt = &t;
	pl = &l;
	
	pt->cry();
	pl->cry();
	
	pm = pt;
	pm->cry();
	
	pm = pl;
	pm->cry();	
}

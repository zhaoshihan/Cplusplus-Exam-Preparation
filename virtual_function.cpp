# include <iostream>
using std:: cout;
using std:: endl;

struct Base{
	void foo(){  //�麯��������ָ��ָ��Ķ�����������������������ʽ 
		cout << "Base" << endl;
	}
};

struct Derived:public Base{  //�˴�Ҫע�⣺��Ϊ�̳���Base�࣬���Դ�����������foo() 
	void foo(){
		cout << "Derived" << endl;
	}
};

int main(){
	Base *p;
	p = new Derived();
	p->foo(); // �����麯�����򲻹�ָ��ָ����࣬���ú���ʱ������ָ�뱾�����ͣ�Base������������������ 
	delete p;  //delete��ֻ�ܸ�ָ���������ʾɾ����ָ��ָ������� 
	p = new Base();
	p->foo();
	delete p;
	
	return 0;
}

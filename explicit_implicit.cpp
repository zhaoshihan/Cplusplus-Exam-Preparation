# include <iostream>
using std::cout;
using std::endl;

/*
  explicit ��ʽ���캯��
  implicit ��ʽ���캯��    ���ر��ע��һ��Ĭ�Ϲ��캯������ʽ�� 
  
  explicit�ؼ��ֵ����ã���ֹ��ʽ�������ڵĵ��������캯��������Ҫ��������������˼��
  1.�ùؼ���ֻ�������������ڲ��Ĺ��캯��
  2.��ֹ��ʽ���ÿ������캯��
  3.��ֹ�����֮�����ʽת��
  
  �޲����Ĺ��캯���Ͷ�����Ĺ��캯��������ʾ����
*/
class A{
	public:
		A(int a){
			cout << "create class " << a << " is successful" << endl;
		}
};

class CExplicit{
	public:
		CExplicit();
		explicit CExplicit( bool _explicit){ //explicitֻ�Ե��������캯����Ч 
			this->is_explicit = _explicit;
		}
		CExplicit( const CExplicit& other){
			this->is_explicit = other.is_explicit;
		}
		friend void printExplicit(const CExplicit& cx);  //��Ԫ������ʹһ���ǳ�Ա�������Է������˽�г�Ա 
	private:
		bool is_explicit;
};

void printExplicit(const CExplicit& cx){
	cout << "is_explicit= " << cx.is_explicit << endl;
}
int main( int argc, char* argv[]){
	A a = 10;  
/*
����ʽ������ A a = 10;�ȼ��� A temp(10); A a = temp;
ȱʡ(impicit)��ת���������Զ����ù��캯����Ӧ�������͵�����ת��Ϊ�������
*/
//	A a(10);
	
//	CExplicit cx1 = true;	
	CExplicit cx1(true);
//	CExplicit cx2 = cx1;
//	printExplicit(cx1);
//	printExplicit(cx2);
//	printExplicit(false);
//	printExplicit(CExplicit(false));  //explicit���ŵ��ǿ��Ա��ⲻ��ʱ�˵����ͱ任

	
	return 0;
}

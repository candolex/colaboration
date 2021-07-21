#include <iostream>
using namespace std;
class MyClass
{
public:
	MyClass() {
		cout << "lol";
		cout << "\n";
	}
using namespace std;

class TestDnl //Мой класс
{
private:
	int data = 0;
public:
	TestDnl()
	{

	}
	void cinData()
	{
		cout << "Add Test data:\t";
		cin >> data;
	}
	void printData()
	{
		cout << "Your test data:\t";
		cout << data << endl;
	}
	~TestDnl()
	{

	}
};

int main()
{
	TestDnl dataTest;
	dataTest.cinData();
	dataTest.printData();


	return 0;
}



};

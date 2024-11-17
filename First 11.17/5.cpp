#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
private:
	double x;
	double y;
public:

	Vector(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
	}
	Vector add(const Vector& v)const//两向量相加
	{
		return Vector(this->x + v.x, this->y + v.y);
	}
	void print()const//打印
	{
		cout <<"(" << x << ", " << y << ")" << endl;
	}
	void dir()const//求模
	{
		double length = sqrt(x * x + y * y);
		cout  << length << endl;

	}
};

int main()
{
    int x1,y1,x2,y2;
    cout<<"vector_add:"<<endl;
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    Vector v1(x1,y1);
    Vector v2(x2,y2);
    Vector v3 =v1.add(v2);
    cout<<"相加后："<<endl;
    v3.print();
    cout<<"模长："<<endl;
    v3.dir();
    
    return 0;
}
#include<iostream>
using namespace std;

class shape
{
   public:
    double width, height;
    void get_data()
    {
        width = height = 0;
    }
    void display()
    {
        cout << "The Area is : ";
    }
};
class triangle:public shape
{
    public:
    virtual void get_data()
    {
        shape::get_data();
        cout << "Enter Base & Height \n";
        cin >> shape::width >> shape::height;
    }
    virtual void display()
    {
        shape::display();
        cout << (double)(0.5*shape::width * shape::height)<<endl;
    }
};
class Rectangle : public shape
{
    public :
    virtual void get_data()
    {
        shape::get_data();
        cout << "Enter Breadth & Length \n";
        cin >> shape::width >> shape::height;
    }
    virtual void display()
    {
        shape::display();
        cout << (double)( shape::width * shape::height)<<endl;
    }
};

int main()
{
	cout << "MOHAMMAD SHAHID RAZA" << endl;
	cout << "A35404821013" << endl;
	cout << "Week 7 Question 2 output:"<<endl;
	
    triangle *ob = new triangle();
    ob->get_data();
    ob->display();

    Rectangle *ob1 = new Rectangle();
    ob1->get_data();
    ob1->display();

    
}

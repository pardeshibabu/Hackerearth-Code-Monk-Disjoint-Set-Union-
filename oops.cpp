#include<bits/stdc++.h>
using namespace std;
/*
//------------------------------------------------------------
    C++ Object and Class
    C++ Class Example: Store and Display Employee Information
//------------------------------------------------------------

class employee{
public:
    int id;
    string name;
    employee(int id, string name);
};

employee::employee(int id, string name){
    this->id = id;
    this->name = name;
}

//------------------------------------------------------------
 
    C++ Constructor
    Default constructor
    Parameterized constructor
//------------------------------------------------------------

class employee{
public:
    int id;
    string name;
    static int count;
    employee(int id, string name);
    ~employee();
};

employee::employee(int i, string n)
{
    id = i;
    name = n;
    count++;
    cout<<"Default constructor called"<<endl;
}

employee::~employee(){
    cout<<"Default distructor called"<<endl;
}
int employee::count= 0;
int main(){
    employee e1(1, "pkm");
    cout<<e1.id<<e1.name<<endl;
    cout<<"Count is :"<<employee::count<<endl;
    return 0;
}

// ----------------------------------------------------
// C++ Inheritance
// C++ supports five types of inheritance:

//     Single inheritance
//     Multiple inheritance
//     Hierarchical inheritance
//     Multilevel inheritance
//     Hybrid inheritance
//-----------------------------------------------------     

// Example Single inheritance

//-----------------------------------------------------
class Animal{
public:
    static int count;

    Animal(){count++;};
    void eating(){
        cout<<"eating\n";
    }
};

class Dog: public Animal{
    public:
        void barking(){
            cout<<"Dog is Barking\n";
        }
};

int Animal::count=0; 
int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/.txt", "r", stdin);
    #endif
    Dog d1, d2, d3;
    d1.eating();
    d1.barking();
    cout<<"Number of Animals: "<<d1.count<<endl;

}

//-----------------------------------------------------
//     Example Multiple inheritance
//-----------------------------------------------------
class Circle{
public:
    int radius = 7;
    void CircleRadius(){
        cout<<"Radius of Circle is:- "<<radius<<endl;
    }
};

class AreaOFCircle: public Circle{
    public:
        void area(Circle c){
            float result = 3.141 * c.radius * c.radius;
            cout<<"Area of Circle:- "<< result<<endl;
        }
};

class PerimeterOfCircle: public Circle{
    public:
        void perimeter(Circle c){
            float result  = 3.141 * c.radius;
            cout<<"Perimeter of Circle is:- "<<result<<endl;
        }
};

class propertiesofCircle: public AreaOFCircle, public PerimeterOfCircle{
    public:
        void areaofCircle(Circle c){
            area(c);
        }

        void circumferenceOfCircle(Circle c){
            perimeter(c);
        }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/.txt", "r", stdin);
    #endif
    Circle c;
    c.CircleRadius();
    propertiesofCircle poc;
    poc.areaofCircle(c);
    poc.circumferenceOfCircle(c);
    return 0;
}

//-----------------------------------------------------
//     Example Multi Level inheritance
//-----------------------------------------------------
class Circle{
public:
    int radius = 7;
    void CircleRadius(){
        cout<<"Radius of Circle is:- "<<radius<<endl;
    }
};

class AreaOFCircle: public Circle{
    public:
        void area(Circle c){
            float result = 3.141 * c.radius * c.radius;
            cout<<"Area of Circle:- "<< result<<endl;
        }
};

class propertiesofCircle: public AreaOFCircle{
    public:
        propertiesofCircle(){
            cout<<"//-------------------------\n";
            cout<<"\tMultilevel Inheritance\n";
            cout<<"//-------------------------\n";

        }
        void areaofCircle(Circle c){
            area(c);
        }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/.txt", "r", stdin);
    #endif
    Circle c;
    c.CircleRadius();
    propertiesofCircle poc;
    poc.areaofCircle(c);
    return 0;
}

//-----------------------------------------------------
//     Example Hierarchical inheritance
//-----------------------------------------------------
class Shape{
public:
    int var1, var2;
    void get_data(int n1, int n2){
        var1 = n1;
        var2 = n2;
    }
};

class Triangle: public Shape{
    public:
        void areaofTriangle(){
            float result = 0.5 * var1 * var2;
            cout<<"Area of Triangle:- "<< result<<endl;
        }
};

class Rectangle: public Shape{
    public:
        void areaofReactangle(){
            float result = var1* var2;
            cout<<"Area of Triangle:- "<< result<<endl;
        }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/.txt", "r", stdin);
    #endif

    cout<<"//-------------------------\n";
    cout<<"\t Hierarchical Inheritance\n";
    cout<<"//-------------------------\n";
    Triangle t;
    Rectangle r;
    Shape s;
    s.get_data(3,5);
    t.areaofTriangle();
    r.areaofReactangle();
    return 0;
}


//-----------------------------------------------------
//     Example Hierarchical inheritance
//-----------------------------------------------------
class A  
{  
    protected:  
    int a;  
    public:  
    void get_a()  
    {  
    //    std::cout << "Enter the value of 'a' : " << std::endl;  
       cin>>a;  
    }  
};  
  
class B : public A   
{  
    protected:  
    int b;  
    public:  
    void get_b()  
    {  
        // std::cout << "Enter the value of 'b' : " << std::endl;  
       cin>>b;  
    }  
};  
class C   
{  
    protected:  
    int c;  
    public:  
    void get_c()  
    {  
        // std::cout << "Enter the value of c is : " << std::endl;  
        cin>>c;  
    }  
};  
  
class D : public B, public C  
{  
    protected:  
    int d;  
    public:  
    void mul()  
    {  
         get_a();  
         get_b();  
         get_c();  
         std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;  
    }  
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/input.txt", "r", stdin);
    #endif

    cout<<"//-------------------------\n";
    cout<<"\t Hybrid Inheritance\n";
    cout<<"//-------------------------\n";
    D d;  
    d.mul();  
    return 0;
}

//----------------------------------------------------
            // Polymorphism
//----------------------------------------------------

// C++ Function Overloading Example
// program of function overloading when number of arguments vary.
// Program of function overloading with different types of arguments.

class poly{
    public:
        static void add(int a, int b){
            cout<<"Sum of a and b is:- "<<a+b<<endl;
        }

        static void add(int a, int b, int c){
            cout<<"Sum of a, b, and c is:- "<<a+b+c<<endl;
        }
        
        void mul(int a, int b){
            cout<<"Mul of a and b is:- "<<a*b<<endl;
        }

        void mul(double a, int b){
            cout<<"Mul of a and b is:- "<<a*b<<endl;
        }
};


int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/input.txt", "r", stdin);
    #endif

    poly d;  
    d.add(2,3);
    d.add(1,2,3);  
    d.mul(2,3);
    d.mul(2.4, 2);
    return 0;
}

//---------------------------------------------------------------
// C++ Operators Overloading
// program to overload the unary operator ++.
// program to overload the binary operators.
//---------------------------------------------------------------
class Test{
    private:
        int num;
    public:
        Test(){}

        Test(int i){ num=i;}

        void operator ++(){
            num++;
            cout<<"Num is:  "<<num<<endl;
        }

        void operator +(Test a){
            int result = num + a.num;
            cout<<"Sum is:- "<<result<<endl;
        }

};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/input.txt", "r", stdin);
    #endif

    Test d1(2), d2(8);
    ++d1;
    d1 + d2;
    return 0;
}

// the simple example of C++ virtual function
// used to invoked the derived class in a program.

class Base{
    public:
        virtual void show(){
            cout<<"Virtual Base class show method\n";
        }
};

class derived: public Base{
    public:
        void show(){
            cout<<"Derived class show method\n";
        }
};


int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/input.txt", "r", stdin);
    #endif

    Base *bptr;
    Base b;
    derived d;
    bptr = &b;
    bptr->show();
    bptr = &d;
    bptr->show();
    d.show();    
    return 0;
}

//---------------------------
    // C++ Abstract class
//--------------------------

//  an example of abstract class in C++
//  which has one abstract method draw().
//  Its implementation is provided by derived classes:
//  Rectangle and Circle. Both classes have different implementation.

class Shape{
    public:
        virtual void draw()=0;
};

class Rectangle: public Shape{
    public:
        void draw(){
            cout<<"Drawing Retangle"<<endl;
        }
};

class Circle: public Shape{
    public:
        void draw(){
            cout<<"Drawing Circle"<<endl;
        }
};


int main(){
    #ifndef ONLINE_JUDGE
    freopen("/home/pardeshimahato/Documents/output.txt","w", stdout);
    freopen("/home/pardeshimahato/Documents/input.txt", "r", stdin);
    #endif

    Rectangle rec;
    Circle c;
    rec.draw();
    c.draw();
    return 0;
}
*/
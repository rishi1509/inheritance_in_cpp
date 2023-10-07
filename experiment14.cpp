/*  
Exp_14-Multilevel Inheritence
*/

#include<iostream>
using namespace std ;
class Rishi
{
    public:
    Rishi()
    {
        cout<<"This is Rishi  \n";
    }
};
class name: public Rishi{

};
class Fullname : public name{

};
int main()
{
    Fullname obj;
    return 0;

};
/*Output
This is Rishi
*/

/*Exp_14-Hierarchal Inheritance*/

#include<iostream>
using namespace std;

class colour
{
public:
void show_colour() {
	cout<<"class colour"<<endl;
}
};
class red : public colour
{
public:
void show_red() {
	cout<<"class red"<<endl;
}
};

class Orange : public colour
{
public:
void show_Orange() {
	cout<<"class Orange"<<endl;
}
};

int main() {
Blue b; 
cout<<"calling from red: "<<endl;
b.show_red();
b.show_colour();
	
Orange c; 
cout<<"calling from Orange: "<<endl;
c.show_Orange();
c.show_colour();
return 0;
}
/*Output
calling from red:
class red
class colour
calling from Orange:
class Orange
class colour
*/

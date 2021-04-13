#include<iostream>
#include<memory>

using namespace std;

class Base{

  public:
      void say_hello() const {
        cout << " Hello - I am Base class Object" << endl; 
      }
     
};


class Derived : public Base {

  public:

     void say_hello() const {

         cout << " Hello - I am a Derived class object \n";
     }
};

void greetings(const Base &obj)
{

    cout << " Greetings";
    obj.say_hello();
}

int main ()
{
   Base b;
   b.say_hello();

   Derived d;
   d.say_hello();

   greetings(b);
   greetings(d);

   Base *ptr = new Derived();
   ptr -> say_hello();

   unique_ptr<Base> ptr1 = make_unique<Derived>();
   ptr1 -> say_hello();

   delete ptr;

   return 0;

}
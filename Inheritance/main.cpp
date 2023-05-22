// #include <iostream>
// using namespace std;

// class AbstractEmployee {
//     virtual void AskForPromotion() = 0 ;
// };

// class Employee:AbstractEmployee {
//     private:
//     string Name;
//     string Company;
//     int Age;

//     public:
//     void setName(string name){
//         Name = name;
//     }
//     string getName(){
//         return Name;
//     }

//     void setCompany(string company){
//         Company = company;
//     }
//     string getCompany(){
//         return Company;
//     }

//     void setAge(int age){
//         Age = age;
//     }
//     int getAge() {
//         return Age;
//     };

//     //  public: void IntroduceYourself(){
//     //     std::cout << "Name - " << Name << std::endl;
//     //     std::cout << "Company - " << Company << std::endl;
//     //     std::cout << "Age - " << Age << std::endl;
//     // }

//     Employee(string name, string company, int age){
//         Name = name;
//         Company = company;
//         Age = age;
//     };

//     void AskForPromotion(){
//         if (Age>30 )
//         std::cout << Name << " Got Promoted !!!" << std:: endl;
//         else
//         std::cout << Name << ",Sorry NO promotion for you" << std:: endl;
//     }
// };

// int main()
//    {
//     Employee employee1 = Employee("Rucha", "InfoVision", 24);

//     // employee1.Name = "Rucha";
//     // employee1.Company = "InfoVision";
//     // employee1.Age = 24;

//     // employee1.IntroduceYourself();

    
//      Employee employee2 =Employee ("Ashish", "AT&T", 31);

//     // employee2.Name = "Ashish";
//     // employee2.Company = "AT&T";
//     // employee2.Age = 23;

//     // employee2.IntroduceYourself();

//     // employee1.setAge(39);
//     // std::cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old "<<std::endl;

//     employee1.AskForPromotion();
//     employee2.AskForPromotion();


//    };



/*Single Inheritance*/

// #include<iostream>
// using namespace std;

// class Account {
//     public:
//     float salary = 6000;
// };

// class Prograammer : public Account {
// public:
// float bonus = 5000;
// };

// int main (){
//     Prograammer p1;
//     cout<< "Salary - " <<p1.salary <<endl;
//     cout<<"Bonus -" <<p1.bonus << endl;
//     return 0;
// };



/*Multi-Level Inheritance*/

// #include<iostream>
// using namespace std;

// class Animal{
//     public:
//     void eat (){
//         cout<<"Eating"<<endl;
//     };
// };

// class Dog : public Animal {
//         public:
//         void bark (){
//             cout<<"Barking"<<endl;
//         };
//     };

//     int main (){
//     Dog d1;
//     d1.bark();
//     d1.eat();
//     return 0;
//     }



#include <iostream>  
using namespace std;  

class A  
{  
    int a = 4;  
    int b = 5;  
    public:  
    int mul()  
    {  
        int c = a*b;  
        return c;  
    }     
};  
  
class B : private A  
{  
    public:  
    void display()  
    {  
        int result = mul();  
        std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
    }  
};  
int main()  
{  
   B b;  
   b.display();  
  
    return 0;  
} 
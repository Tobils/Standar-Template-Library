#include <iostream>
#include <vector>

void basicPointer(){
    // declare and array
    int v[3] = {10, 20, 30};
    
    // declare pointer variable
    int *ptr;

    // assign pointer of v[0] to ptr
    ptr = v;

    std::cout<<" seizeof(v) : " << sizeof(v) << std::endl;
    for(int i=0; i<3; i++)
    {
        std::cout<<" Value of *ptr = " << *ptr << std::endl;
        std::cout<<" Value of ptr = " << ptr << std::endl;
        ptr++; // increment pointer
    }
}

// Driver function to show array decay => passing array by value
void aDecay(int *p){
    std::cout<<" aDecay => sizeof array is passing by value : "<< sizeof(p) <<std::endl;
}


// function to show that array decay hapens => even if we use pointer
void pDecay(int (*p)[7]){
    std::cout<<" pDecay => sizeof array is passing by pointer : "<< sizeof(p) <<std::endl;
}


// function to solve decay by passing reference of pointer
void solutionDecay(int (&p)[7]){
    std::cout<<" solution of Decay => sizeof array by passing reference : " << sizeof(p) << std::endl;
}



void Decay(){
    int a[7] = {1,2,3,4,5,6,7};
    std::cout <<" actual size of array : " << sizeof(a) << std::endl;
    aDecay(a);
    pDecay(&a);
    solutionDecay(a);
}

void basicRef(){
    int x  = 10;

    // ref is a reference to x
    int& ref = x;

    // value of x is now change
    ref = 20;
    std::cout << " x = "<< x << std::endl;

    // value of x is now change
    x = 30;
    std::cout << " ref = " << ref << std::endl;
}


// 1. modify the passed parameters in a function
void swap(int& first, int&second){
    int tmp = first;
    first = second;
    second = tmp;
}

void refSwap(){
    int a = 2, b = 3;
    std::cout<<"before swap => a:" << a <<"\t"<< "b:" << b << std::endl;
    swap(a,b);
    std::cout<<"after swap => a:" << a <<"\t" <<"b:" << b << std::endl;
}


// avoiding copy of large structures in struct
struct Student
{
    /* data */
    std::string name;
    std::string address;
    int rollNo;
};

void cetak(const Student &s){
    std::cout <<s.name<<"\t"<<s.address<<"\t"<<s.rollNo<<std::endl;
}


// modify elements br ereferences
void modif(){
    std::vector<int> vect = {10, 20, 30, 40};
    // modify element by element if we use references
    for(int &x:vect){
        x = x+5;
    }

    for(int x:vect){
        std::cout<<x<<std::endl;
    }
}

// avoid copy of objects
void modif2(){
    std::vector<std::string> vect = {
        "geeks for geeks practices",
        "geeks for geeks write",
        "geeks for geeks ide"
    };
    
    // we avoid copy of the whole string
    // object by using reference.
    for(const auto &x : vect){
        std::cout<<x<<std::endl;
    }

    // manually print out
    for(auto x:vect){
        std::cout<<x<<std::endl;
    }
}


// for passing large sized arguments by class
class Employee {
    private:
        std::string name;
        std::string address;

    public:
        std::string getName(){
            return name;
        }

        std::string getAdress(){
            return address;
        }

        void set(std::string str_name, std::string str_address){
            this->name    = str_name;
            this->address = str_address;
        }
};

void printEmpDetails(Employee emp){
    std::cout << emp.getName() << "\t" << emp.getAdress() << std::endl;
}
/*
The problem with above code is: every time printEmpDetails() is called, a new Employee object is constructed that involves creating a copy of all data members
*/

// passing parameters by reference
void prinEmpDetRef(Employee &emp){
    std::cout<<"passing by reference \n";
    std::cout << emp.getName() << "\t" << emp.getAdress() << std::endl;
}

void ImplEmp(){
    Employee suhada;
    suhada.set("ade suhada", "yogyakarta");
    printEmpDetails(suhada);
    prinEmpDetRef(suhada);
}


// avoid object slicing

class Pet {
    public:
        virtual std::string getDescription() const {
            return "this is pet class";
        }
};

class Dog : public Pet {
    public:
        virtual std::string getDescription() const {
            return "this is dog class";
        }
};

void describeW(Pet p){ // slice the derived class object
    std::cout<< " slice the derived class object " << std::endl;
    std::cout<<p.getDescription() << std::endl;
}

void describeR(Pet &p){
    std::cout<< " doesn't slice the derived class object " << std::endl;
    std::cout<<p.getDescription() << std::endl;
}

void cekAvoid(){
    Dog d;
    Pet p;
    // describeW(d);
    describeR(d);
    describeR(p);
}

int main(){
    std::string basic = " basic of pointer";
    std::string arrayDecay = " array decay";
    std::string ref = " basic of references";
    std::string refSwapstr = " swap value by references";
    std::string ref2 = " reference : avoiding large structures";
    std::string ref3 = " modify elements by ereferences";
    std::string ref4 = " avoid copy of objects";
    std::string ref5 = " ref avoiding large structure in class";
    std::string ref6 = " membedakan parents dengan inheritance object class";

    std::string batas = "================================================";

    std::cout << basic << std::endl;
    basicPointer();

    std::cout<<batas<<std::endl;
    std::cout<<arrayDecay<<std::endl;
    Decay();

    std::cout<<batas<<std::endl;
    std::cout<<ref<<std::endl;
    basicRef();

    std::cout<<batas<<std::endl;
    std::cout<<refSwapstr<<std::endl;
    refSwap();

    std::cout<<batas<<std::endl;
    std::cout<<ref2<<std::endl;
    Student ade;
    ade.name = "ade suhada";
    ade.address = "Yogyakarta";
    ade.rollNo = 63;
    cetak(ade);

    std::cout<<batas<<std::endl;
    std::cout<<ref3<<std::endl;
    modif();

    std::cout<<batas<<std::endl;
    std::cout<<ref4<<std::endl;
    modif2();

    std::cout<<batas<<std::endl;
    std::cout<<ref5<<std::endl;
    ImplEmp();

    std::cout<<batas<<std::endl;
    std::cout<<ref6<<std::endl;
    cekAvoid();

    return 0;
}
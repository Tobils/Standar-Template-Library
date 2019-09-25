#include <iostream>
#include <memory>

template <class T>
class Smartptr {
    T *ptr; // actual pointer

    public :
        // constructor
        explicit Smartptr(T *p = NULL){ptr = p;}


        // destructor
        ~Smartptr() { delete(ptr);}

        // overloading derefencing operator
        T & operator *() { return *ptr;}

        T * operator -> () { return ptr;}
};


class A {
    public:
        void show() {std::cout<< "A::show()" << std::endl;}
};



int main(){
    // Smartptr ptr(new int());
    Smartptr<int> ptr(new int());
    *ptr = 20;
    std::cout<< *ptr <<std::endl;


    // std::auto_ptr
    std::cout<<"std::auto_ptr"<<std::endl;
    
    // p1 is an auto_ptr of type A
    std::auto_ptr<A> p1(new A);
    p1->show();

    // returns the memory address of p1
    std::cout<<p1.get()<<std::endl;

    // copy constructor called, this make p1 empty
    std::auto_ptr<A> p2(p1);
    p2->show();

    // p1 is empty now
    std::cout<<p1.get()<<std::endl;

    // p1 gets copied in p2
    std::cout<<p2.get()<<std::endl;

    std::cout<<"<-------------- batas ------------------>\n";

    std::unique_ptr<A> up1(new A);
    up1->show();

    // return the memory address
    std::cout<<up1.get()<<std::endl;

    std::cout<<"<-------------- batas ------------------>\n";

    // transfer ownership to up2
    std::unique_ptr<A> up2 = move(up1);
    up2->show();
    std::cout<<up1.get()<<std::endl;
    std::cout<<up2.get()<<std::endl;
    
    std::cout<<"<-------------- batas ------------------>\n";
    // transfer ownership to up3
    std::unique_ptr<A> up3 = move(up2);
    up3->show();
    std::cout<<up1.get()<<std::endl;
    std::cout<<up2.get()<<std::endl;
    std::cout<<up3.get()<<std::endl;

    std::cout<<"<-------------- batas ------------------>\n";   
    std::shared_ptr<A> sp1(new A);
    std::cout<<sp1.get()<<std::endl;
    sp1->show();
    std::shared_ptr<A> sp2(sp1); // share pointer
    sp2->show();
    std::cout<< sp1.get() <<std::endl;
    std::cout<< sp2.get() << std::endl;

    // return teh number of shared_ptr objects
    // referring to the same managed object
    std::cout<< sp1.use_count() << std::endl;
    std::cout<< sp2.use_count() << std::endl;

    // Relinquishes ownership of p1 on the object
    // and pointer becomes null
    sp1.reset();
    std::cout<< sp1.get() << std::endl;
    std::cout<< sp2.use_count() << std::endl;
    std::cout<< sp2.get() << std::endl;

    return 0;
}
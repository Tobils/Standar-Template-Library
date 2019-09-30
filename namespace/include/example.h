namespace first
{

}

namespace ns
{
    class geek
    {
        public:
            void display();
            void tampilkan();
    };
}

// class and namespace #2
namespace ns2
{
    class geek;
}

class ns2::geek
{
    public:
    void display();
};


//class and namespace #3
namespace ns3
{
    void display();
    class geek
    {
        public :
        void display();
    };
}


// nested namespace
namespace name1
{
    namespace name2
    {
        namespace name3
        {
            int var;
        }
    }
}


// nested namesapce and class

namespace ade{
    namespace suhada{
        class tobil{
            public:
                void display();
        };
    }
}
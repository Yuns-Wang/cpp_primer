#ifndef C07E35
#define C07E35

#include <string>

typedef std::string Type;
Type initVal(); //std::string

struct Exercise
{
    public:
    typedef double Type;
    Type setVal(Type); //double
    Type initVal(){return val;} //double
    private:
    int val;
};

//Type Exercise::setVal(Type para) 
//错误定义中，第一个使用std::string，第二个使用double
Exercise::Type Exercise::setVal(Type para) //Exercise::Type
{
    val = para + initVal();
    return val;
}

#endif
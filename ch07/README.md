#### 练习 7.1

[c07e01.cp](c07e01.cpp)

#### 练习 7.2

[Sales_data.h](Sales_data.h)

#### 练习 7.3

[c07e03.cpp](c07e03.cpp)

#### 练习 7.4

[Person.cpp](Person.cpp)

#### 练习 7.5

[Person.cpp](Person.cpp)

#### 练习 7.6

[Sales_data.h](Sales_data.h)

#### 练习 7.7

[c07e07.cpp](c07e07.cpp)

#### 练习 7.8

* read将会改变Sales_data数据，不能const
* print不会改变Sales_data数据，使用const保证安全

#### 练习 7.9

[Person.cpp](Person.cpp)

#### 练习 7.10

连续读入两个数据存入data1和data2

#### 练习 7.11

[c07e11.cpp](c07e11.cpp) | [Sales_data.h](Sales_data_711.h)

#### 练习 7.12

[Sales_data.h](Sales_data_712.h)

#### 练习 7.13

[c07e13.cpp](c07e13.cpp) | [Sales_data.h](Sales_data_712.h)

#### 练习 7.14

`Sales_data():units_sold(0), revenue(0){}`

#### 练习 7.15

[Person.h](Person.h)

#### 练习 7.16

* 没有限定

* 可以供类外部分访问、使用的接口部分

* 类的实现细节

#### 练习 7.17

* class : 默认 private

* struct : 默认 public

#### 练习 7.18

* 封装 : 将一些实现设置为private，从而隐藏细节

* 用处 ：保护数据安全、方便重构程序而不影响使用者

#### 练习 7.19

[Person.h](Person_719.h)

#### 练习 7.20

需要类外成员访问类的私有成员时

#### 练习 7.21

[Sales_data.h](Sales_data_721.h)

#### 练习 7.22

[Person.h](Person_722.h)

* **友元声明只是指定了访问权限，而不是真正意义上的声明，在使用友元之前，必须先进行声明。如`Person`和`Sales_data`中的`read`函数**

* **有些编译器并没有上述要求，但是依旧要按照上述要求编写程序**:

#### 练习 7.23

[Screen.h](Screen.h)

#### 练习 7.24

[Screen.h](Screen.h)

#### 练习 7.25

可以依赖，内置类型、string类型可以使用默认值

#### 练习 7.26

[Sales_data.h](Sales_data_726.h)

#### 练习 7.27

[c07e27.cpp](c07e27.cpp) | [Screen.h](Screen_727.h)

#### 练习 7.28

两次display调用结果不同。

#### 练习 7.29

[c07e29.cpp](c07e29.cpp) | [Screen.h](Screen_729.h)

#### 练习 7.30

* 使用this的优点：意图明显、**当*成员函数参数*与*成员参数*同名时，可以区分开二者**

* 使用this的缺点：多余、

#### 练习 7.31

[c07e31.cpp](c07e31.cpp)

#### 练习 7.32

[c07e32.cpp](c07e32.cpp)

#### 练习 7.33

`pos`无法找到

#### 练习 7.34

`pos`无法找到，返回类型、参数列表中出现的名字需要已经声明。

#### 练习 7.35

[c07e35.h](c07e35.h)

类型不应该重复定义，虽然编译器不会报错。

#### 练习 7.36

```c++
strrct X {
    X(int i, int j) : base(i), rem(i % j) {}
    int rem, base;
};
```

#### 练习 7.37

```c++
Sales_data fist_item(cin); //Sales_data(std::istream &is);
内容为cin的输入内容
```

```c++
Sales_data next; //Sales_data(std::string = "");
bookNo : ""
units_sold : 0
revenue : 0
```

```c++

Sales_data last("999-999-999"); //Sales_data(std::stirng = "");
bookNo : "999-999-999"
units_sold : 0
revenue : 0
```

#### 练习 7.38

`Sales_data(std::istream &is = std::cin);`

#### 练习 7.39

不合法，需要默认初始化时无法区分两个构造函数。

#### 练习 7.40

[Vehicle.h](Vehicle.h)

#### 练习 7.41

[Sales_data_741.h](Sales_data_741.h) | [c07e41.cpp](c07e41.cpp)

#### 练习 7.42

[Vehicle.h](Vehicle.h)

#### 练习 7.43

```c++
C()
{
    nd = NoDefault(i);
}
```

#### 练习 7.44

不合法，NoDefault无默认构造函数，无法执行默认初始化

#### 练习 7.45

合法，C有默认构造函数

#### 练习 7.46

(a) 错误，没有构造函数时，编译器会生成一个默认构造函数

(b) 错误，`A(std::string = "")`

(c) 错误，

(d) 错误，只有当没有定义任何构造函数时，编译器才会生成

#### 练习 7.47

依据情况而定，如果Sales_data代表一本书，则可以使用explicit。如果代表一条记录则不能使用explicit

缺点是：explicit丧失了一部分灵活性

#### 练习 7.48

**两种情况均不涉及隐式转换**

`Sales_item item1(null_isbn)` **正常调用单string的构造函数**

`Sales_item item2("9-99-999-9")` **正确，cosnt char\* 转换为 string, 然后正常调用构造**

#### 练习 7.49

(a) s被隐式转换为临时Sales_data，后者被值传递给函数之后销毁

(b) **错误，不能执行 临时对象到非常量引用 的转换**

(c) 声明错误，const函数不能返回非常量Sales_data

#### 练习 7.50

[Person_750.h](Person_750.h)

#### 练习 7.51

vector 使用隐式转换，意义不明

string 从const char * 到 string 的转换则很正常

#### 练习 7.52

聚合类特点：

* 所有成员都是public

* 没有任何构造函数

* 没有任何类内初始值

* 没有基类，也没有virtual函数

所以，应该取消Sales_data 的类内初始值。

#### 练习 7.53

[Debug.h](Debug.h)

#### 练习 7.54

c++11中，constexpr函数默认是const的，所以set** 函数不能声明为constexpr的

#### 练习 7.55

不是，string不是字面值类型

#### 练习 7.56

static成员：不属于任何一个对象，而是属于整个类。

优点：可以应用于一些特殊用途，如计数、不需要每个类对象要开辟空间存储、一次改变后所有类都可以使用

区别：static成员可以使用类名访问、static成员不能再类内初始化，也不能用构造函数初始化、static成员可以作为默认参数、是不完全类型

#### 练习 7.57

[Account.h](Account.h)

#### 练习 7.58

```c++
class Example {
    public:
    static constexpr double rate = 6.5;
    static const int vecSize = 20;
    static vector<double> vec();
};

double d = Example::rate;
vector<double> Example::vec(Exaple::vecSize);
```

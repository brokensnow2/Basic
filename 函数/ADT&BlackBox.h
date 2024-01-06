/**
黑盒测试又称为“功能测试”，是将测试对象看做一个黑盒，
在并不考虑软件产品的内部结构和处理过程的基础上对软件产品
进行功能测试。黑盒测试注重软件产品的“功能性需求”。  
*/


/*
** 地址列表模块的声明。
*/

/*
** 数据特征
**　各种数据的最大长度（包括结尾的NUL字节）和地址的最大数量。
*/

//允许出现的最长名字
#define NAME_LENGTH 30
//允许出现的最长地址
#define ADDR_LENGTH 100
//允许出现的最长电话号码
#define PHONE_LENGTH 11
//允许出现的最多地址个数
#define MAX_ADDRESSES 1000
/*
** 地址列表模块的声明。
*/

/*
** 接口函数
**
**　给出一个名字，查找对应的地址。
*/
char const *
lookup_address( char const *name );

/*
**　给出一个名字，查找对应的电话号码。
*/
char const *
lookup_phone( char const *name );

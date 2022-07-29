

#define LIST_MAX_SIZE 100
#define LISTINCREMENT 10

//顺序表数据结构C++类声明（基类）

template <typename ElemType>
class SqList
{
public:
    //有序顺序表折半查找
    int bin_Search(ElemType key);

    //顺序表置空
    void clear();
    //删除第i个元素
    Status deleteElem(int i, ElemType &e);
    //取第i个元素
    Status getElem(int i, ElemType &e);
    //求顺序表中元素的个数
    int getLength();
    //取顺序表中存储空间的大小
    int getListSize();
    //在第i个元素之前插入一个元素
    Status insert(int i, ElemType e);
    //判断顺序表是否为空
    bool isEmpty();
    //查找第一个与e满足compare()关系的元素的序号
    int locateElem(ElemType e, Status (*compare)(ElemType, ElemType));
    //返回某元素的后继
    Status nextElem(ElemType e, ElemType& next_e);
    //重载赋值运算符的定义
    SqList<ElemType> operator=(SqList<ElemType> rightL);
    //返回某元素的前驱
    Status priorElem(ElemType e, ElemType& prior_e);
    //在顺序表中顺序查找某元素
    int sequentialSearch(ElemType e);
    
    
    //顺序表构造函数
    SqList();
    //顺序表析构函数
    virtual ~SqList();
    //顺序表拷贝初始化构造函数
    SqList(const SqList<ElemType>& otherL);
protected:
    //顺序表动态存储空间的首地址
    ElemType *elem;
    //顺序表当前已分配的存储空间大小
    int listSize;
    //顺序表当前元素的个数
    int n;

};

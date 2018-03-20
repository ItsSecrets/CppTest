//
//  VectorObj.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/19.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef VectorObj_hpp
#define VectorObj_hpp

#include <stdio.h>
#include <vector>
#include "AbstractProduct.hpp"

/*
 vector 的基本接口
 vectorObject.at(index)         返回向量vectorObject中指定索引index所指的数据元素
 vectorObject.back()            返回向量vectorObject中最后一个数据元素
 vectorObject.begin()           返回指向向量vectorObject中第一个元素的迭代器
 vectorObject.capacity()        返回向量vectorObject中元素的个数
 vectorObject.clear()           清空向量vectorObject中的数据元素
 vectorObject.empty()           判断向量vectorObject是否为空，为空则返回true值
 vectorObject.end()             返回指向向量vectorObject最后一个数据元素的迭代器
 vectorObject.erase(loc)        删除当前向量loc位置数据元素，返回下一个数据元素位置
 vectorObject.erase(start,end)  删除从start到end区间的元素，包含start不包含end，并返回下一个数据元素位置
 vectorObject.insert(pos,elem)  当前向量中pos位置插入元素elem，并返回新数据的位置
 vectorObject.insert(pos,n,elem)当前向量中pos位置插入n个elem数据元素，不返回任何值
 vectorObject.insert(pos,start,end)当前向量中pos位置处插入区间在start到end之间的数据元素，包含start但不包含end，无任何返回值
 vectorObject.pop_back()        删除当前向量最后一个数据元素
 vectorObject.push_back(elem)   当前向量尾部添加一个数据元素
 operator[]                     重载下标操作符，用于访问指定向量中的元素
 */
using namespace std;
class VectorObj{
public:
    VectorObj();
    ~VectorObj();
    void addProduct(AbstractProduct*);
    void removeProduct(AbstractProduct*);
    void sortProduct();
    AbstractProduct* getProduct(int index);
    void printProductInfo();
private:
    vector<AbstractProduct*> productArr;
    vector<AbstractProduct*>::iterator iterator;
};



#endif /* VectorObj_hpp */

//
//  AbstractProduct.hpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#ifndef AbstractProduct_hpp
#define AbstractProduct_hpp

#include <stdio.h>

class AbstractProduct{
public:
    AbstractProduct(int);
    virtual ~AbstractProduct();

    virtual void operation() = 0;
    int getProductId();
private:
    int id = 0;
};

//productA
class ProductA:public AbstractProduct{
public:
    ProductA(int);
    virtual ~ProductA();

    void operation();
};

//productB
class ProductB:public AbstractProduct{
public:
    ProductB(int);
    virtual ~ProductB();
    
    void operation();
    
};


#endif /* AbstractProduct_hpp */

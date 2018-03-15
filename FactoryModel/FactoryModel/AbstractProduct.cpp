//
//  AbstractProduct.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include "AbstractProduct.hpp"
#include <iostream>

AbstractProduct::AbstractProduct(){

}
AbstractProduct::~AbstractProduct(){
    
    
}

//A
ProductA::ProductA(){


}
ProductA::~ProductA(){

}

void ProductA::operation(){
    std::cout<<"ProductA operation"<<std::endl;
}


//B
ProductB::ProductB(){
    
    
}
ProductB::~ProductB(){
    
}
void ProductB::operation(){
    std::cout<<"ProductB operation"<<std::endl;
}

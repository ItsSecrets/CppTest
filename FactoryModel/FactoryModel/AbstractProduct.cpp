//
//  AbstractProduct.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/14.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include "AbstractProduct.hpp"
#include <iostream>

AbstractProduct::AbstractProduct(int _id){
    id = _id;
}
AbstractProduct::~AbstractProduct(){
    
    
}
int AbstractProduct::getProductId(){
    return id;
}
//A
ProductA::ProductA(int _id):AbstractProduct(_id){
    
}
ProductA::~ProductA(){

}

void ProductA::operation(){
    std::cout<<"ProductA operation"<<std::endl;
}


//B
ProductB::ProductB(int _id):AbstractProduct(_id){
    
    
}
ProductB::~ProductB(){
    
}
void ProductB::operation(){
    std::cout<<"ProductB operation"<<std::endl;
}

//
//  SortManager.cpp
//  FactoryModel
//
//  Created by zwf on 2018/3/15.
//  Copyright © 2018年 zwf. All rights reserved.
//

#include "SortManager.hpp"
#include <iostream>

void SortManager::insert_sort(int*a, int len){
    for (int j = 1; j < len; j++)
    {
        int key = a[j]; //待排序第一个元素
        int i = j - 1;  //代表已经排过序的元素最后一个索引数
        while (i >= 0 && key < a[i])
        {
            //从后向前逐个比较已经排序过数组，如果比它小，则把后者用前者代替，
            //其实说白了就是数组逐个后移动一位,为找到合适的位置时候便于Key的插入
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = key;//找到合适的位置了，赋值,在i索引的后面设置key值。
    }
}

void SortManager::quick_sort(int*p, int startPos, int endPos){
    if (startPos<endPos) {
        int key = SortManager::getPart(p, startPos, endPos);

        SortManager::quick_sort(p, startPos, key - 1);
        SortManager::quick_sort(p, key + 1, endPos);
    }
    
}
int SortManager::getPart(int*p, int startPos, int endPos){
    int low = startPos,high=endPos;
    int key = p[endPos];
    while (low<high) {
        //从左到右查大于key的值
        while (low<high&&key>=p[low]) {
            low++;
        }
        SortManager::swapPos(p[low], p[high]);
        
        //从右到左查小于key的值，
        while (high>low&&key<=p[high]) {
            high--;
        }
        SortManager::swapPos(p[low], p[high]);

    }
    return low;
}
void SortManager::swapPos(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}


void SortManager::bubble_sort(int*p, int len){
    for (int i=0; i<len; i++) {
        for (int j=0; j<len-i-1; j++) {
            if (p[j]>p[j+1]) {
                std::swap(p[j], p[j+1]);
            }
        }
    }
}

void SortManager::select_sort(int*p, int len){
    for (int i=0; i<len; i++) {
        int min = i;
        //选出带排序序列中最小的元素
        for (int j=i+1; j<len; j++) {
            if (p[j]<p[min]) {
                min = j;
            }
        }
        if (min != i) {
            std::swap(p[i], p[min]);
        }
    }
}


void SortManager::logArr(int*p, int len){
    if (len<=0) {
        std::cout<<"数组null！！"<<std::endl;
        return;
    }
    for (int i=0; i<len; i++) {
        std::cout<<" "<<p[i];
        if (i==len-1) {
            std::cout<<std::endl;
        }
    }
}

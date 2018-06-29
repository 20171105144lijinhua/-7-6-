//
//  矩形面积周长.cpp
//  joj1
//
//  Created by 李锦华 on 18/6/27.
//  Copyright © 2018年 李锦华. All rights reserved.
//

#include <iostream>
using namespace std;
class cr{
public:
    int w,h;
    cr(int a){
        w=a;
        h=1;
        };
    cr(int a,int b){
        w=a;
        h=b;
    };
    int area();
    int perimeter();
    };
int cr::area()
{
    return w*h;
    
}
int cr::perimeter()
{
    return 2*(w+h);
    
}

int main()
{
    int a,b;
    cin>>a>>b;
    cr r(a),t(a,b);
    cout<<"mianji"<<r.area()<<endl;
    cout<<"zhouchang"<<r.perimeter()<<endl;
    cout<<"minaji"<<t.area()<<endl;
    cout<<"zhouchang"<<t.perimeter()<<endl;
    return 0;
}

#include<bits/stdc++.h>
#include "src/Singleton.h"

using namespace std;

 
int main(){
    Singleton& object1 = Singleton:: getInstance();
    Singleton& object2 = Singleton:: getInstance();
    cout<<"Before Increment Data of both variables : \n";
    object1.printStatus();
    object2.printStatus();

    object1.increment();


    cout<<"After Increment Data of both variables : \n";

    object1.printStatus();
    object2.printStatus();
    return 0;
}
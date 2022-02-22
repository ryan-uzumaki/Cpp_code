//
// Created by ryand on 9/24/2021.
//

#include <iostream>
using namespace std;

void num_sperato(int numbers){
    int numbers_1 = numbers % 10;
    int numbers_2 = numbers - numbers_1;
    int numbers_3 = (numbers_2 % 100) / 10;
    int numbers_4 = numbers_2 -numbers_3 * 10;
    int numbers_5 = (numbers_4 % 1000) / 100;
    int numbers_6 = numbers_4 - numbers_5 * 100;
    int numbers_7 = numbers_6 /1000;
    cout<<numbers_7<<"   "<<numbers_5<<"   "<<numbers_3<<"   "<<numbers_1<<"   "<<endl;
}

int fuck(){
    int number = 0;
    cout<<"Enter the number"<<endl;
    cin>>number;
    num_sperato(number);

    return 0;
}

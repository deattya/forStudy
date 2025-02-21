#include <iostream>
using namespace std; //Задано натуральне число n і дійсні числа а1, а2,…, аn. Написати програми знаходження:
                          //a) min(a1.a2......an);
int main(){
int n;
cout<<"введіть кількість чисел: "<<endl;
cin>>n;

double min, num;
cout<<"Введіть число 1: ";
cin>>min;
for(int i = 2; i<=n; i++){
cout<<"Введіть число "<<i<<":";
cin>>num;
if (num<min){
    min = num;
}
}
cout<<"Найменше число з введених: "<<min;

return 0;
}
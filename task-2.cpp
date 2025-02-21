#include <iostream>
using namespace std; //Написати програму визначення кількості тризначних натуральних
                      //чисел, сума цифр яких дорівнює n (n ≥ 1). У програмі не використовувати
      int main() {    //операцію ділення!
      int n;
      cout<<"Введіть суму цифр: "<<endl;
      cin>>n;
      int count = 0;

for(int i = 0; i<=9; i++){
    int secondNum = 0;

while (secondNum<=0){
    secondNum++;
    for(int firstNum=0; firstNum<=9; firstNum++){
if(i+secondNum + firstNum == n){
    count++;
}
    }
}
}
cout<<"Кількість тризначних(натуральних)чисел: "<<count;
return 0;
}



    
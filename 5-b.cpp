   #include <iostream>   
   #include <cmath>    //Задано натуральне число n і дійсні числа а1, а2,…, аn. 
  using namespace std;          //Написати програми знаходження:
        int main(){                 //6) max( |a1|....|an| )

int n;
cout<<"введіть кількість чисел: "<<endl;
cin>>n;

double max, num;
cout<<"Введіть число 1: ";
cin>>max;
max = fabs(max);
for(int i = 2; i<=n; i++){
cout<<"Введіть число "<<i<<":";
cin>>num;
if (fabs(num)>max){
    max = fabs(num);
}
}
cout<<"Найбільше число з введених(по модулю): "<<max;




return 0;
        }             

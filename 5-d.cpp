#include <iostream>              //Задано натуральне число n і дійсні числа а1, а2,…, аn. 
  using namespace std;          //Написати програми знаходження:
#include <cmath>                   // д) mах(а1.а2.а4 a8.....):

            int main(){                 
int n;
cout<<"введіть кількість чисел: "<<endl;
cin>>n;

double num, max;
bool square = false;
cout<<"Введіть число 1: ";
cin>>max;
for(int i = 2; i<=n; i++){
cout<<"Введіть число "<<i<<": ";
cin>>num;
if (i%2 == 0){
   if (i & (i-1) ==0) {
    if(!square){
                max = num;
                square = true;
    }
            } else if (num > max) {
                max = num;
            }
           }
}
cout<<"Найбільше число з тих, де індекс є степенем двійки у квадраті "<<max;
      return 0;       
        }                                          


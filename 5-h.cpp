 #include <iostream>   
   #include <cmath>    //Задано натуральне число n і дійсні числа а1, а2,…, аn. 
  using namespace std;          //Написати програми знаходження:
        int main(){                 //r) min(a1,a3,....);


int n;
cout<<"введіть кількість чисел: "<<endl;
cin>>n;

double min, num;
bool isIndex = true;
cout<<"Введіть число 1: ";
cin>>min;
for(int i = 2; i<=n; i++){
cout<<"Введіть число "<<i<<": ";
cin>>num;
if (i%2 != 0){
   if (isIndex) {
                min = num;
                isIndex = false;
            } else if (num < min) {
                min = num;
            }
}
}

cout<<"Найменше число з введених(з непарним індексом): "<<min;

return 0;
        }             

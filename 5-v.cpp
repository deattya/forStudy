 #include <iostream>   
   #include <cmath>    //Задано натуральне число n і дійсні числа а1, а2,…, аn. 
  using namespace std;          //Написати програми знаходження:
        int main(){                 //в) mах(а2.а4....);

int n;
cout<<"введіть кількість чисел: "<<endl;
cin>>n;

double max, num;
bool isIndex = true;
cout<<"Введіть число 1: ";
cin>>max;
for(int i = 2; i<=n; i++){
cout<<"Введіть число "<<i<<": ";
cin>>num;
if (i%2 == 0){
    if (isIndex) {
                max = num;
                isIndex = false;
            } else if (num > max) {
                max = num;
            }
}
}
cout<<"Найбільше число з введених(з парним індексом): "<<max;
return 0;
        } 



            

 #include <iostream>   
   #include <cmath>    //Задано натуральне число n і дійсні числа а1, а2,…, аn. 
  using namespace std;          //Написати програми знаходження:
        int main(){                 //ґ) min(a2.a4....) + max(1₁, a3, ....);
int n;
cout<<"введіть кількість чисел: "<<endl;
cin>>n;

double min, num, max;
bool firstI = false, secondI = false;
cout<<"Введіть число 1: ";
cin>>min;
for(int i = 2; i<=n; i++){
cout<<"Введіть число "<<i<<": ";
cin>>num;
if (i%2 == 0){
   if (!secondI) {
                min = num;
                secondI = true;
            } else if (num < min) {
                min = num;
            }
            else { 
            if (!firstI) {
                max = num;
                firstI = true;
            } else if (num > max) {
                max = num;
            }
}
}
}
double result = max+min;
cout<<"Сума найменшого числа з парним індексом і найбільшого з непарним: "<<min<<" + "<<max;
cout<<" = "<<result;

return 0; 
        }
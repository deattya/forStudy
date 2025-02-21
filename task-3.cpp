#include <iostream>
using namespace std; //Дано n цілих чисел. Створити програму, що визначає, яка
                      //кількість з них більша за своїх сусідів, тобто за попереднє та наступне
                       //числа.
int main(){
int n;
cout<<"Введіть кількість чисел: "<<endl;
cin>>n;

int num[n];
cout<<"Введіть "<<n<<" чисел: "<<endl;
for(int i = 0; i<n; i++){
    cin>>num[i];
 } 
 int count = 0, i = 1;
 while(i<n-1)  {
    i++;
    if(num[i]>num[i-1] && num[i]>num[i+1]){
        count++;
    }
 }
cout<<"Кількість таких чисел: "<<count<<endl;

    return 0;
}
<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    cout<<"hello world!";
    return 0;
=======
#include <iostream>
using namespace std; // Скласти програму для обчислення добутку двох натуральних
 int main(){        //чисел m і n, використовуючи тільки операцію додавання.

int n, m;
cout<<"Введіть множники: "<<endl;
cin>>n>>m;

int dobutok = 0;
for(int i=0; i<n; i++){
    dobutok+=m;

}
cout<<"Результат 1: "<<dobutok<<endl;
int dobutok2 = 0;
int i = 0;
while(i<n){
    dobutok2+=m;
    i++;
    
}
cout<<"Результат 2: "<<dobutok2<<endl;
    return 0;
>>>>>>> a821315 (first)
}
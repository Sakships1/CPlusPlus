// Which Value is greater------------->1
// BASIC PROGRAMMING


#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<< "enter number a: ";
    cin>>a;
    cout<<"enter number b: ";
    cin>>b;
    if(a>b){
        cout<<"a is greater than b";
    }
    else if(b>a){
        cout<<"b is greater than a";
    }
    else{
        cout<<"a is equal to b";
    }
}


// A<20 = child, A<=60 = senior citizen else adult----------------->2

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:"<<endl;
    cin>>age;
    if(age<20){
        cout<<"child";
    }
    else if(age>=60){
        cout<<"senior citizen";
    }
    else{
        cout<<"adult";
    }
}


// A-Z This is Upper Case, a-z This is Lower case, 0-9 This is numeric----------------->3

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"This is UPPER CASE";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"This is lower case";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"This is numeric";
    }
    else{
        cout<<"others";
    }
}



//  while loop 1 to n------------------>4

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int i = 1;
    while(i<=n){
        cout<<i<<" ";
        i=i+1;
    }
}


// Sum from 1 to n using while loop------------------>5

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        // i=i+1;
        sum=sum+i;
        i=i+1;
    }
    cout<<"Sum from 1 to "<<n<<" is: "<<sum;
}

//Sum of even numbers from 1 to n using while loop------------------>6

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"Sum of even numbers from 1 to "<<n<<" is: "<<sum;
}


// Sum of odd numbers from 1 to n using while loop------------------>7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2!=0){
            sum=sum+i;
        }
        i=i+1;
    }
    cout<<"Sum of odd number from 1 to" << n << "is;" << sum <<endl;
    return 0;
}


// Celsiud to Fahrenheit conversion using while loop------------------>8

#include<iostream>
using namespace std;
int main(){
    int celsius;
    cout<<"enter the temp in celsius:"<<endl;
    cin>>celsius;
    int farenheit = (celsius * 9/5) + 32;
    cout<<"The temp in farenheit is:"<< farenheit <<endl;
    return 0;
}

//Prime number -------------------->9

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool isPrime = true;
    if(n<=1){
        isPrime = false;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}


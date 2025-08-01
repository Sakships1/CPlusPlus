// * ---------->3*3

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of pattern:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" * ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of pattern:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}


// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of pattern:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }

}


// 1 2 3
// 4 5 6
// 7 8 9

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of pattern;";
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<< " ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}


// *
// * * 
// * * *
// * * * *

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the size of pattern:";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*" <<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}

// 1
// 2 3
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of pattern: ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        int count = i;
        while(j<=i){
            cout << count << " ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}

// a a a
// b b b
// c c c

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of pattern: ";
    cin >> n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch = 'a' + i-1;
        while(j<=n){
            cout<<ch<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}


// a b c
// a b c
// a b c

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of pattern: ";
    cin >> n;
    int i=1;
    while(i<=n){ 
        int j=1;
        char ch='a';
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
}















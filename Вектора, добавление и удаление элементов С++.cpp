/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> v;
    for(int i = 0; i < 5; i++){
        v.push_back(i);
        
        v[i] = 1 + rand() % (10 - 1 + 1);
    }
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    
    v.insert(v.begin() + 2, 11);
    v.insert(v.begin() + 2, 13);
    
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    v.erase(v.begin() + 3);
     v.erase(v.begin() + 4);
    
     for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
     }

    return 0;
}

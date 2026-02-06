#include <iostream>
using namespace std;

// void fullpyramid(int n)
// {
//     // int n = 5;
//     for (int i = 0; i < n; i++)
//     {
//         // spaces first
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// void invertedFullPyramid(int n){
//     for(int i = n; i > 0; i--){
     
//         for(int j = 0; j< n-i; j++){
//             cout<<" ";
//         }
//            for(int j = 0; j < i-1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

void invertedFullDiamondPyramid(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i-1; j++){
            cout<< " ";
        }
        for(int j =0; j<i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int i = n; i > 0; i--){
     
        for(int j = 0; j< n-i+1; j++){
            cout<<" ";
        }
           for(int j = 0; j < i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

int main()
{
    // Pattern1: fullpyramid()   
    // fullpyramid(5);

    //Pattern2 : invertedFullPyramid()
    // invertedFullPyramid(5);

    //Pattern3 : DiamondPattern()
    invertedFullDiamondPyramid(5);
}
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

// void invertedFullDiamondPyramid(int n){
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n-i-1; j++){
//             cout<< " ";
//         }
//         for(int j =0; j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//      for(int i = n; i > 0; i--){

//         for(int j = 0; j< n-i+1; j++){
//             cout<<" ";
//         }
//            for(int j = 0; j < i-1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

// }

// void HollowPyramid(int n)
// {
//     // int n = 5;
//     for (int i = n-1; i >=0; i--)
//     {
//         // spaces first
//         for (int j = 0; j < n - i - 1; j++)
//             cout << " ";

//         for (int j = 0; j < i + 1; j++)
//         {
//             if (i == 0 || i == n - 1 || j == 0 || j == i + 1 - 1)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }
// }

// void HollowDiamond(int n)
// {
//      for (int i = 0; i <n-1; i++)
//     {
//         // spaces first
//         for (int j = 0; j < n - i - 1; j++)
//             cout << " ";

//         for (int j = 0; j < i + 1; j++)
//         {
//             if (i == 0 || i == n - 1 || j == 0 || j == i + 1 - 1)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }
//     // int n = 5;
//     for (int i = n-1; i >=0; i--)
//     {
//         // spaces first
//         for (int j = 0; j < n - i - 1; j++)
//             cout << " ";

//         for (int j = 0; j < i + 1; j++)
//         {
//             if (j == 0 || j == i + 1 - 1)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }

// }

// void MixPyramid(int n){
//     for(int i = 0; i< n; i++){
//         for(int j =0  ; j<n-i; j++){
//             cout<<"*";
//         }
//         for(int j = 0; j<2*i+1; j++){
//             cout<<" ";
//         }
//          for(int j =0  ; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void MixDiamondPyramid(int n){
//     for(int i = 0; i< n; i++){
//         for(int j =0  ; j<n-i; j++){
//             cout<<"*";
//         }
//         for(int j = 0; j<2*i+1; j++){
//             cout<<" ";
//         }
//          for(int j =0  ; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//      for(int i = n-1; i>= 0; i--){
//         for(int j =0  ; j<n-i; j++){
//             cout<<"*";
//         }
//         for(int j = 0; j<2*i+1; j++){
//             cout<<" ";
//         }
//          for(int j =0  ; j<n-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// void Fancy12Pattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i+1;
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
// }

// void FullFancy12Pattern(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i+1;
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
//      for (int i = n; i > 0; i--)
//     {
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             if (j % 2 == 0)
//             {
//                 cout << i+1;
//             }
//             else
//             {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
// }
int main()
{
    // Pattern1: fullpyramid()
    // fullpyramid(5);

    // Pattern2 : invertedFullPyramid()
    // invertedFullPyramid(5);

    // Pattern3 : DiamondPattern()
    //  invertedFullDiamondPyramid(5);

    // Pattern4 : HollowPyramid()
    // HollowPyramid(5);

    // Pattern5 : HollowDiamond()
    // HollowDiamond(5);

    // Pattern6 : MixPyramid()
    // MixPyramid(5);

    // Pattern7 : MixDiamondPyramid()
    // MixDiamondPyramid(10);

    // Pattern8 : Fancy12Pattern()
    // Fancy12Pattern(10);

    //Pattern9:FullFancy12Pattern()
    // FullFancy12Pattern(10);
    char ch ='A'-1+1;
    cout<<ch++;
        cout<<ch++;

            cout<<ch++;

}
//wap to calculate two matrices

#include<iostream>
using namespace std;


int main(){

    int mat_1[20][20];
    int mat_2[20][20];
    int mat_3[20][20];

    int r1,r2,c1,c2;

    cout<<"Enter number of rows of first and second matrix : ";
    cin>>r1>>r2;

    cout<<"Enter number of columns of first and second matrix : ";
    cin>>c1>>c2;

    if(r1 == r2 && c1 == c2){
        cout<<"Enter the elements of first matrix : ";
        for(int i =0;i<r1;i++){
            for(int j =0;j<c1;j++){
                cin>>mat_1[i][j];
            }
        }

         cout<<"Enter the elements of second matrix : ";
        for(int i =0;i<r2;i++){
            for(int j =0;j<c2;j++){
                cin>>mat_2[i][j];
            }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            mat_3[i][j] = mat_1[i][j] + mat_2[i][j];
        }
    }

    cout<<"Matrix after addition : ";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<mat_3[i][j] <<"  ";
        }
    }



    }
   
return 0;
}
#include<iostream>
using namespace std;

int main(){

 int sparceMatrix[5][6]={
                            {0,8,0,0,9,0},
                            {0,0,0,3,0,0},
                            {4,0,0,0,0,5},
                            {0,6,9,2,0,0},
                            {0,0,0,0,0,0}


 };

 //Finding Total Non-Zero  Elements
 int nonZeroVal= 0;
 for(int i=0; i<5; i++)
    for (int j = 0; j<6; j++){
       if(sparceMatrix[i][j]!=0)
            nonZeroVal++;
    }

    cout<<"Non-Zero Elements : "<<nonZeroVal;

   //Defining triplet Matrix
   //3 x p , (3-> row, col, value) (p->non_zero elements)
    
   int tripletMatrix[3][nonZeroVal];
    
   //Generate Triplet Matrix

   int k= 0;
   for(int i=0; i<5; i++)
      for (int j = 0; j<6; j++){
            if(sparceMatrix[i][j]!=0){
               tripletMatrix[0][k]=i;
               tripletMatrix[1][k]=i;
               tripletMatrix[2][k]=sparceMatrix[i][j];
               k++;
            }
      }
    return 0;
}
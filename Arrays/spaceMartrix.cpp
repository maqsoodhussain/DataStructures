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
    

    return 0;
}
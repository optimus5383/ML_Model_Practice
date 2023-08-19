// This is for simple 5 * 8 * 8 * 1 DNN It isn't consider about broadcasting for speed 

# include <stdio.h>
# include <math.h>
float Norm(float num){
    float max = 5;
    float min = 0;
    float Norm_value;
    
    if (num > max){
        return 1;
    }
    else if (num<min) {
        return 0;
    }
    else{
        Norm_value = (num-min)/(max-min);
        return Norm_value;
    }
}

void add_matrices(int row,int column, float A[row][column],float B[row][column],float C[row][column]) {
    // row and colmun add
     for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            C[i][j] = A[i][j] + B[i][j];
                }
            }
        }

void multiply_matrices(int row1,int column1,int row2,int column2,float A[row1][column1], float B[row2][column2], float Mul[row1][column2]) {
    float sum;
    for(int i=0; i<row1; i++) {
        for(int j=0; j<column2; j++) {
            sum = 0;
            for(int k=0; k<column1; k++)
                sum += a[i][k] * b[k][j];
            mul[i][j] = sum;
        }
    }
}

int main(void){

    // first it must normaize data for ML
    float input[5][1];
    float output[1][1];

    float w1[5][8];
    float w2[8][8];
    float w3[1][8];

    float b1[8][1];
    float b2[8][1];
    float b3[1][1];

    float Layer1[8][1]
    float Layer2[8][1]

    
    
    
    // data import part but in this code use number for testing
    
    float data[5] ={-0.4 , 4, 1, 2, 2};
    for (int i=0; i<5;i++){
        data[i] = Norm(data[i]);
    }
    // first Layer Pass it going to 5*1 input 8*1 output 
    multiply_matrices(5,8,8,1,w1,input,Layer1);
    add_matrices(8,1,Layer1,b1);

    multiply_matrices(8,8,8,1,w2,Layer1,Layer2);
    add_matrices(8,1,Layer2,b2);

    multiply_matrices(1,8,8,1,w3,Layer2,output);
    add_matrices(1,1,output,b3);


    return 0;
}
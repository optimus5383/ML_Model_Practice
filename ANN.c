# include <stdio.h>
# include <math.h>

float Norm(float num){
    float max = ;
    float min = ;
    float Norm_value;
    
    Norm_value = (num-min)/(max-min);
    return Norm_value
     
}

int main(void){
    float num =3.55;
    float value = Norm(num);
    printf("%d",value);
    return 0;
}
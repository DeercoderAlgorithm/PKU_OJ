#include <stdio.h>
#include <math.h>


float getValue(float Vr, float r, float c, float w)
{
    
    float va1 =  1.0f / pow(c * w * r, 2.0f);
    float value = sqrt(pow(Vr, 2.0f) / (1 + va1));
    return value;
}



int main()
{
    float Vr, r, c;
    int size;
    float w;

    while(scanf("%f %f %f %d", &Vr, &r, &c, &size) != EOF){
        for (int i = 0; i < size; i++) {
            scanf("%f", &w);
            printf("%.3f\n", getValue(Vr, r, r, w));
        }    
    }
    
    return 0;
}



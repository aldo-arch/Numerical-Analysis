///integrimi i funksionit duke perdorur metoden trapezoidale
// vendos 3,2,1
#include<stdio.h>
float y(float x){
    return 1/(1+x*x);
}
int main(){
    float x0,xn,h,s;
    int i,n;
    printf("vendosni x0, xn, numrin e nenintervaleve: ");
    scanf("%f%f%d",&x0,&xn,&n);
    h = (xn-x0)/n;
    s = y(x0) + y(xn);
    for(i = 1; i < n; i++){
        s += 2*y(x0+i*h);
    }
    printf("vlera e integralit eshte: %6.4f\n",(h/2)*s);
    return 0;
}
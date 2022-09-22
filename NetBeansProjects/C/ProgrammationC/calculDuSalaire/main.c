int binaire(int n){
int s=0,i=0;
while(n>0){
s+=(n%10)*pow(2,i);
n/=10;i++;
}
return s;
} 
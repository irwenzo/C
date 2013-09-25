#include <stdio.h>
main(int argc, char*argv[]) 
{
printf("Kodutoo 10 valemit\n");

/*1.ohmiseadus, kus U on pinge; R on takistus; I on voolutugevus */

float U,R,I;
U=10;
R=5;
I=U/R;
printf("voolutugevus: %s %f\n","I=", I);

/*2. kineetilise energia valem, kus Ek on energia; m on mass, v on kiirus; */

float Ek,m,v;
m=25;
v=20;
Ek=m*v*v/2;
printf("Kineetiline energia: %s %f\n", "Ek=", Ek);

/*3. Albert Einsteini relatiivusteeoria valem, kus E on energia; m on mass; c on valguse kiirus vaakumis; */

float E,m1,c;

m1=75.6;
c=25;
E=m1*c*c;
printf("Energia: %s %f\n", "E=", E);

/*4. Kiiruse valem, kus v on kiirus; s on teepikkus; t on aeg */

float v1,s,t;

v1=90;
t=2;
s=90*2;
printf("teepikkus: %s %f\n", "s=", s);

/*5. Raskusjou valem, kus Fr on raskusjoud; m on mass, g on raskuskiirendus */

float Fr,m2,g;

Fr=15;
g=9.8;
m=Fr/g;
printf("mass: %s %f\n", "m=", m);

/*6. Trapetsi pindala valem, a ja b on aluste pikkused; h on korgus; S on pindala.*/

float a,b,h,S;

a=15;
b=10;
h=7;
S=a*b/2*h; 
printf("trapetsipindala: %s %f\n", "S=", S);

/*7. Rombi pindala valem, kus d1 ja d2 on diagonaalid; S on rombipindala */

float d1,d2,S1;

d1=8;
d2=6;
S1=d1*d2/2;
printf("rombipindala: %s %f\n", "S1=", S1);

/*8. Too ehk mehaanilise too valem, kus A on too; F on joud; s on nihe.*/

float F,A,s1;

F=20;
s1=1.5;
A=F*s1;
printf("Too: %s %f\n", "A=", A);

/*9. Laine sageduse valem, kus f on sagedus; v on laine levimiskiirus; L on lainepikkus.*/

float f,v2,L;

v2=330;
L=20;
f=v2/L;
printf("laine sagedus: %s %f\n", "f=", f);

/*10. Voimsuse valem, kus P on voimsus; A on too; t on ajavahemik; */

float P,A1,t1;

A1=10;
t1=2;
P=A/t1;
printf("voimsus: %s %f\n", "P=", P);
}



#include <iostream>
using namespace std;

char sMensaje[1000];
int main () {

cout<<"Texto a encriptar:"<<endl;
cin.getline(sMensaje, 1000);

for (int c=0; c<=1000; c++) {

switch (sMensaje[c]) {
{
case 'm':
sMensaje[c]=48;
break;}
{
case 'u':
sMensaje[c]=49;
break;}
{
case 'r':
sMensaje[c]=50;
break;}
{
case 'c':
sMensaje[c]=51;
break;}
{
case 'i':
sMensaje[c]=52;
break;}
{
case 'e':
sMensaje[c]=53;
break;}
{
case 'l':
sMensaje[c]=54;
break;}
{
case 'a':
sMensaje[c]=55;
break;}
{
case 'g':
sMensaje[c]=56;
break;}
{
case 'o':
sMensaje[c]=57;
break;}
default:
sMensaje[c]=sMensaje[c];
}
}
cout<<"Texto Encriptado: "<<sMensaje;

}
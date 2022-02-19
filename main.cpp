#include <iostream>
#include <cstdlib>
#include <climits>
#include <math.h>
#include <string>

using namespace std;

void progres()
{
    int z=0,k=0,u=25,x=0;
    cout<<"Se proceseaza: ";
    cout<<"[                         ]";
    for(int w=0;w<=24;w++)
    {for(int y=0;y<=20000000;y++)
      if(y==0){
      while(k<=u){cout<<'\b';k++;}
      while(x<=z){cout<<(char)254;x++;}
      z++;u--;}
    }
    cout<<"\n\n\n";
}

void ecuatiegrad1(int a,int b)
{
            cout<<"--> ("<<a<<")*x+("<<b<<")=0"<<endl;
            cout<<"--> ("<<a<<")*x="<<"-("<<b<<")"<<endl;
            cout<<"--> x="<<"-("<<b<<")/("<<a<<")"<<endl;
            cout<<"--> x="<<(float)-b/a<<endl;
}

int main()
{
    system ("color 4F");
    int x,delta,g,n,ptwh=1,whfct1,whfct2,whprog,whtrigo;
    float r1,r2,rad,a,b,c;
    char var[1],varfct1[1],varfct2[1],varprog[1],vartrigo[1],exit[6];
    while(ptwh==1){system("cls");whfct1=1;whfct2=1;whprog=1;whtrigo=1;

//MENIU

    cout<<"~~~ E.G.B. - PROGRAMEL MATE 2016 ~~~"<<endl;cout<<endl;
    cout<<"Bun venit! Alege una dintre variante:"<<endl;cout<<endl;
    cout<<"1. Progresii matematice"<<endl;
    cout<<"2. Functia de gradul I"<<endl;
    cout<<"3. Functia de gradul II"<<endl;
    cout<<"4. Trigonometrie"<<endl;
    cout<<"5. Iesire"<<endl;
    cout<<endl;
    cout<<"Varianta... ";cin.getline(var,200);

//CITIRE

while(var[0]==NULL){
cin.getline(var,200);}
while(((int)var[0]!=49||var[1]==NULL||(int)var[0]!=50||(int)var[0]!=51||(int)var[0]!=52||(int)var[0]!=52||(int)var[0]!=53))
{
if((int)var[0]==49&&var[1]==NULL||(int)var[0]==50&&var[1]==NULL||(int)var[0]==51&&var[1]==NULL||(int)var[0]==52&&var[1]==NULL||(int)var[0]==53&&var[1]==NULL||(int)var[0]==50&&(int)var[1]==54&&(int)var[2]==NULL){break;}
cout<<endl;cout<<"*Data viitoare alege una dintre variante!"<<endl<<endl;
cout<<"Varianta... ";
cin.getline(var,200);
while(var[0]==NULL){
cin.getline(var,200);}}

//FCT GRAD I

    if((int)var[0]==50&&(int)var[1]==NULL)
    {
    while(whfct1==1){system("cls");
        cout<<"***********************"<<endl;
        cout<<"* FUNCTIA DE GRADUL I *"<<endl;
        cout<<"***********************"<<endl;
        cout<<endl;cout<<"Forma functiei: f(x)=a*x+b"<<endl;cout<<endl;
        cout<<"1. Monotonia functiei de gradul I"<<endl;
        cout<<"2. Imaginea functiei de gradul I"<<endl;
        cout<<"3. Ecuatia functiei de gradul I"<<endl;
        cout<<"4. Inapoi la meniu"<<endl<<endl;
        cout<<"Introdu - ";cin.getline(varfct1,200);
while(varfct1[0]==NULL){
cin.getline(varfct1,200);}
while(((int)varfct1[0]!=49||varfct1[1]==NULL||(int)varfct1[0]!=50||(int)varfct1[0]!=51||(int)varfct1[0]!=52))
{
if((int)varfct1[0]==49&&varfct1[1]==NULL||(int)varfct1[0]==50&&varfct1[1]==NULL||(int)varfct1[0]==51&&varfct1[1]==NULL||(int)varfct1[0]==52&&varfct1[1]==NULL){break;}
cout<<endl;cout<<"*Data viitoare alege una dintre variante!"<<endl<<endl;
cout<<"Introdu -  ";
cin.getline(varfct1,200);
while(varfct1[0]==NULL){
cin.getline(varfct1,200);}}

//MONOTONIA

        if((int)varfct1[0]>=49&&(int)varfct1[0]<=51&&(int)varfct1[1]==NULL){
        cout<<"\nAlege valorile coeficientilor:"<<endl;
        cout<<"a= ";cin>>a;cout<<"b= ";cin>>b;
        cout<<"--> f(x)=("<<a<<")*x+("<<b<<")\n\n";}
        if((int)varfct1[0]==49&&(int)varfct1[1]==NULL)
        {

            progres();

            if(a>0)cout<<"a > 0 ==>> functie crescatoare"<<endl;
            if(a==0)cout<<"a = 0 ==>> functie constanta"<<endl;
            if(a<0)cout<<"a < 0 ==>> functie descrescatoare"<<endl;
        }

//IMAGINEA

        if((int)varfct1[0]==50&&(int)varfct1[1]==NULL){

            cout<<"Pentru x= ";cin>>x;cout<<'\n';

            progres();

            cout<<"==>>"<<endl;cout<<"f("<<x<<")=("<<a<<")*("<<x<<")+("<<b<<")"<<endl;
            cout<<"f("<<x<<")="<<a*x<<"+("<<b<<")"<<endl;
            cout<<"f("<<x<<")="<<a*x+b<<endl;
        }

//ECUATIA

        if((int)varfct1[0]==51&&(int)varfct1[1]==NULL){
        cout<<"Ecuatia de forma a*x+b=0\n\n";
        if(a==0&&b!=0)cout<<"Ecuatia nu are solutii!\n";
        else if(a==0&&b==0)cout<<"Ecuatia are o infinitate de solutii!\n";
        else
        {

            progres();

            ecuatiegrad1(a,b);
        }
        }

//LA MENIU

        if((int)varfct1[0]==52&&(int)varfct1[1]==NULL)whfct1=0;
     if(whfct1!=0){cout<<'\n';system("pause");}
    }}

//FCT GRAD II

    if((int)var[0]==51&&(int)var[1]==NULL)
    {
        while(whfct2==1){system("cls");
        cout<<"************************"<<endl;
        cout<<"* FUNCTIA DE GRADUL II *"<<endl;
        cout<<"************************"<<endl;
        cout<<endl;cout<<"Forma functiei: f(x)=a*x^2+b*x+c"<<endl;cout<<endl;
        cout<<"1. Monotonia functiei de gradul II"<<endl;
        cout<<"2. Imaginea functiei de gradul II"<<endl;
        cout<<"3. Ecuatia functiei de gradul II"<<endl;
        cout<<"4. Suma si produsul radacinilor ecuatiei"<<endl;
        cout<<"5. Inapoi la meniu"<<endl<<endl;
        cout<<"Introdu - ";cin.getline(varfct2,200);
while(varfct2[0]==NULL){
cin.getline(varfct2,200);}
while(((int)varfct2[0]!=49||varfct2[1]==NULL||(int)varfct2[0]!=50||(int)varfct2[0]!=51||(int)varfct2[0]!=52||(int)varfct2[0]!=53))
{
if((int)varfct2[0]==49&&varfct2[1]==NULL||(int)varfct2[0]==50&&varfct2[1]==NULL||(int)varfct2[0]==51&&varfct2[1]==NULL||(int)varfct2[0]==52&&varfct2[1]==NULL||(int)varfct2[0]==53&&varfct2[1]==NULL){break;}
cout<<endl;cout<<"*Data viitoare alege una dintre variante!"<<endl<<endl;
cout<<"Introdu -  ";
cin.getline(varfct2,200);
while(varfct2[0]==NULL){
cin.getline(varfct2,200);}}

//MONOTONIA

        if((int)varfct2[0]>=49&&(int)varfct2[0]<=52&&(int)varfct2[1]==NULL){
        cout<<"\nAlege valorile coeficientilor:"<<endl;
        cout<<"a= ";cin>>a;cout<<"b= ";cin>>b;cout<<"c= ";cin>>c;
        cout<<"--> f(x)=("<<a<<")*x^2+("<<b<<")*x+("<<c<<")"<<endl;cout<<endl;}
        if((int)varfct2[0]==49&&(int)varfct2[1]==NULL){
        if(a!=0){

            progres();

            if(a>0)
            {
                cout<<"x -> (-oo; "<<(float)-b/(2*a)<<") => functie descrescatoare"<<endl;
                cout<<"x -> ("<<(float)-b/(2*a)<<"; +oo) => functie crescatoare"<<endl;
            }
            if(a<0)
            {
                cout<<"x -> (-oo; "<<(float)-b/(2*a)<<") => functie crescatoare"<<endl;
                cout<<"x -> ("<<(float)-b/(2*a)<<"; +oo) => functie descrescatoare"<<endl;
            }
        }
        else {cout<<"a = 0 ==>> f(x)=("<<b<<")*x+("<<c<<")"<<endl;
        cout<<endl;cout<<"Functie de gradul I... Ne oprim aici..."<<endl;}
        }

//IMAGINEA

        if((int)varfct2[0]==50&&(int)varfct2[1]==NULL){
        if(a!=0){

            progres();

            if(a>0)cout<<"a > 0 ==>> Imf = ("<<-((b*b)-4*(a*c))<<"/"<<(4*a)<<"; +oo)"<<endl;
            if(a<0)cout<<"a < 0 ==>> Imf = (-oo; "<<-((b*b)-4*(a*c))<<"/"<<(4*a)<<")"<<endl;
        }
        else {cout<<"a = 0 ==>> f(x)=("<<b<<")*x+("<<c<<")"<<endl;
        cout<<endl;cout<<"Functie de gradul I... Ne oprim aici..."<<endl;}
        }

//ECUATIA

        if((int)varfct2[0]==51&&(int)varfct2[1]==NULL){
        if(a!=0){
        cout<<"Ecuatia de forma a*x^2+b*x+c=0\n\n";

           progres();

           cout<<"("<<a<<")*(x)^2+("<<b<<")*(x)+("<<c<<")=0"<<endl;cout<<endl;
           delta=(b*b)-4*(a*c);
           cout<<"D = b^2-4*a*c = "<<delta<<endl;
           if(delta>0)
           {
               cout<<"D > 0 =>"<<endl;
               r1=(-b+sqrt(delta))/(2*a);
               r2=(-b-sqrt(delta))/(2*a);
               cout<<"x1= "<<(float)r1<<endl;
               cout<<"x2= "<<(float)r2<<endl;
           }
           if(delta==0)
           {
               cout<<"D = 0 =>"<<endl;
               r1=-b/(2*a);
               cout<<"x1 = x2 = "<<(float)r1<<endl;
           }
           if(delta<0)
           {
               cout<<"D < 0 =>"<<endl;
               cout<<"S -> /O/"<<endl;
           }
        }
        else {cout<<"a = 0 ==>> f(x)=("<<b<<")*x+("<<c<<")"<<endl;
        cout<<endl;cout<<"Functie de gradul I... \n"<<endl;

        progres();

        ecuatiegrad1(b,c);}
        }

//SUMA/PRODUS

        if((int)varfct2[0]==52&&(int)varfct2[1]==NULL){
        if(a!=0){

            progres();

            cout<<"S = x1+x2 = -b/a = -("<<b<<")/("<<a<<") = "<<-b/a<<endl;
            cout<<"P = x1*x2 = c/a= ("<<c<<")/("<<a<<") = "<<c/a<<endl;
        }
        else {cout<<"a = 0 ==>> f(x)=("<<b<<")*x+("<<c<<")"<<endl;
        cout<<endl;cout<<"Functie de gradul I... Ne oprim aici..."<<endl;}
        }

//LA MENIU

        if((int)varfct2[0]==53&&(int)varfct2[1]==NULL)whfct2=0;
    if(whfct2!=0){cout<<'\n';system("pause");}
    }}

//TRIGONOMETRIE

    if((int)var[0]==52&&(int)var[1]==NULL)
    {
        while(whtrigo==1){system("cls");
        cout<<"*****************"<<endl;
        cout<<"* TRIGONOMETRIE *"<<endl;
        cout<<"*****************"<<endl;cout<<endl;
        cout<<"1. Transformare: Grade -> Radiani"<<endl;
        cout<<"2. Transformare: Radiani -> Grade"<<endl;
        cout<<"3. Valorile unghiurilor"<<endl;
        cout<<"4. Inapoi la meniu"<<endl<<endl;
        cout<<"Introdu - ";cin.getline(vartrigo,200);
while(vartrigo[0]==NULL){
cin.getline(vartrigo,200);}
while(((int)vartrigo[0]!=49||vartrigo[1]==NULL||(int)vartrigo[0]!=50||(int)vartrigo[0]!=51||(int)vartrigo[0]!=52))
{
if((int)vartrigo[0]==49&&vartrigo[1]==NULL||(int)vartrigo[0]==50&&vartrigo[1]==NULL||(int)vartrigo[0]==51&&vartrigo[1]==NULL||(int)vartrigo[0]==52&&vartrigo[1]==NULL){break;}
cout<<endl;cout<<"*Data viitoare alege una dintre variante!"<<endl<<endl;
cout<<"Introdu -  ";
cin.getline(vartrigo,200);
while(vartrigo[0]==NULL){
cin.getline(vartrigo,200);}}

//GRADE-RADIANI

        if((int)vartrigo[0]==49&&(int)vartrigo[1]==NULL)
        {
            cout<<"\nGradele: ";cin>>g;
            cout<<"-----------"<<endl;
            cout<<" PI ~ 3.14 "<<endl;
            cout<<"-----------\n"<<endl;

            progres();

            rad=((g*3.14)/180)/3.14;a=(g*3.14)/180;
            cout<<"==> "<<a<<" ~ "<<(float)rad<<"*PI Radiani"<<endl;
        }

//RADIANI-GRADE

        if((int)vartrigo[0]==50&&(int)vartrigo[1]==NULL)
        {
            cout<<"\nRadianii: ";cin>>rad;cout<<'\n';

            progres();

            cout<<"==> "<<"m(<L)="<<(180*rad)/3.14<<"*"<<endl;
        }

//UNGHIURI

        if((int)vartrigo[0]==51&&(int)vartrigo[1]==NULL)
        {
            cout<<"\nMasura unghiului (30* / 45* / 60*): ";cin>>g;
            if(g==30||g==45||g==60){

            cout<<'\n';
            progres();

            if(g==30)cout<<"sin: 0.5; cos: 0.866; tg: "<<0.5/0.866<<"; ctg: "<<0.866/0.5<<";"<<endl;
            if(g==45)cout<<"sin: 0.707; cos: 0.707; tg: "<<0.707/0.707<<"; ctg: "<<0.707/0.707<<";"<<endl;
            if(g==60)cout<<"sin: 0.866; cos: 0.5; tg: "<<0.866/0.5<<"; ctg: "<<0.5/0.866<<";"<<endl;}
            else cout<<"\nNu detin date despre unghiul de "<<g<<"*"<<endl;
        }

//LA MENIU

        if((int)vartrigo[0]==52&&(int)vartrigo[1]==NULL)whtrigo=0;
    if(whtrigo!=0){cout<<'\n';system("pause");}
    }}

//PROGRESII

    if((int)var[0]==49&&(int)var[1]==NULL)
    {
        while(whprog==1){system("cls");
        cout<<"************************"<<endl;
        cout<<"* PROGRESII MATEMATICE *"<<endl;
        cout<<"************************"<<endl;cout<<endl;
        cout<<"1. Suma primilor N termeni - Progresii Aritmetice"<<endl;
        cout<<"2. Suma primilor N termeni - Progresii Geometrice"<<endl;
        cout<<"3. Inapoi la meniu"<<endl<<endl;
        cout<<"Introdu - ";cin.getline(varprog,200);
while(varprog[0]==NULL){
cin.getline(varprog,200);}
while(((int)varprog[0]!=49||varprog[1]==NULL||(int)varprog[0]!=50||(int)varprog[0]!=51))
{
if((int)varprog[0]==49&&varprog[1]==NULL||(int)varprog[0]==50&&varprog[1]==NULL||(int)varprog[0]==51&&varprog[1]==NULL){break;}
cout<<endl;cout<<"*Data viitoare alege una dintre variante!"<<endl<<endl;
cout<<"Introdu -  ";
cin.getline(varprog,200);
while(varprog[0]==NULL){
cin.getline(varprog,200);}}

//SUMA-ARITMETICE

        if((int)varprog[0]==49&&(int)varprog[1]==NULL){
            cout<<"\nPrimii 2 termeni: ";cin>>a>>b;
            cout<<"N= ";cin>>n;
            if(n>=1)
            {

            cout<<'\n';
            progres();

            c=b-a;
            cout<<"==>>"<<endl;
            cout<<"Progresia: "<<a<<" "<<b<<" "<<b+c<<" "<<b+2*c<<" "<<b+3*c<<" s.a.m.d."<<endl;
            cout<<"Ratia: "<<(float)c<<endl;
            cout<<"S("<<n<<")="<<(float)((2*a+(n-1)*c)*n)/2<<endl;
            }
            else {cout<<"N <= 0 ==>> Suma nu poate fi calculata!"<<endl;
            cout<<endl;cout<<"Ne oprim aici..."<<endl;}
        }

//SUMA-GEOMETRICE

        if((int)varprog[0]==50&&(int)varprog[1]==NULL){
            cout<<"\nPrimii 2 termeni: ";cin>>a>>b;
            cout<<"N= ";cin>>n;
            if(a!=0&&n>=1)
            {

            cout<<'\n';
            progres();

            c=b/a;
            if(c==1)
            {
            cout<<"==>>"<<endl;
            cout<<"Progresia: "<<a<<" "<<b<<" "<<b*c<<" "<<b*c*c<<" "<<b*c*c*c<<" s.a.m.d."<<endl;
            cout<<"Ratia: "<<(float)c<<endl;
            cout<<"S("<<n<<")="<<(float)n*a<<endl;
            }
            else
            {
            cout<<"==>>"<<endl;
            cout<<"Progresia: "<<a<<" "<<b<<" "<<b*c<<" "<<b*c*c<<" "<<b*c*c*c<<" s.a.m.d."<<endl;
            cout<<"Ratia: "<<(float)c<<endl;
            cout<<"S("<<n<<")="<<(float)a*((1-pow(c,n)/(1-c)))<<endl;
            }
            }
            else {cout<<"N <= 0 sau b1 = 0 ==>> Suma nu poate fi calculata!"<<endl;
            cout<<endl;cout<<"Ne oprim aici..."<<endl;}
        }

//LA MENIU

        if((int)varprog[0]==51&&(int)varprog[1]==NULL)whprog=0;
    if(whprog!=0){cout<<'\n';system("pause");}
    }}

//IESIRE

    if((int)var[0]==53&&(int)var[1]==NULL){
            cout<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<"|    @ 2016 Gaspar Nicolae    |"<<endl;
        cout<<"| Toate drepturile rezervate. |"<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<endl;
        cout<<"\nScrie 'iesire' pentru a inchide... ";cin.getline(exit,200);
if((exit[0]=='i'&&exit[1]=='e'&&exit[2]=='s'&&exit[3]=='i'&&exit[4]=='r'&&exit[5]=='e'&&exit[6]==NULL)||(exit[0]=='I'&&exit[1]=='E'&&exit[2]=='S'&&exit[3]=='I'&&exit[4]=='R'&&exit[5]=='E'&&exit[6]==NULL))ptwh=0;
while((exit[0]!='i'&&exit[0]!='I')||(exit[1]!='e'&&exit[1]!='E')||(exit[2]!='s'&&exit[2]!='S')||(exit[3]!='i'&&exit[3]!='I')||(exit[4]!='r'&&exit[4]!='R')||(exit[5]!='e'&&exit[5]!='E')||exit[6]!=NULL)
{
cout<<"\n! IESIRE !\n\n";
cin.getline(exit,200);
}
    ptwh=0;
    }

//CAMERA SECRETA

    if((int)var[0]==50&&(int)var[1]==54&&(int)var[2]==NULL){
        cout<<"\nAi scris numarul 26, bravo!\n";
        cout<<"\n*Asta e o camera secreta... Nu chiar... \n";
        cout<<"\n^Eu zic sa apesi X-ul rosu, n-ai nimic de vazut aici... (^_*)\n\n";
        cin.getline(exit,200);
while(1>0)
{
cout<<"\n! COLTUL DREAPTA - SUS !\n\n";
cin.getline(exit,200);}ptwh=0;
    }
    }

//THE END

    return 0;
}

/*
PROGRAMA HECHO POR CHRISTIAN SAPON PEREZ
UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA
*/
#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>


using namespace std;

/////////////////////////////RECURSOS
int suma(int a, int b);
int resta(int a, int b);
float division(float a,float b);
int multiplicacion(int a, int b);
float km_millas(int a);
float millas_km(int a);
float metro_pulgadas(int a);
float pulgadas_metro(int a);
float lib_kg(int a);
float kg_lib(int a);
void operaciones();
void decimal(int parteDecimal);
void binario(int n);
void hexadecimal(int n);
void gotoxy(int x,int y);
void depositar(int cantidad);
void retirar(int cantidad);
float cateto(int a, int b);
int mcd(int num1, int num2);
void calculadoracateto ();
int saldo_actual=100,cantidad;
void calculadoramcd ();


int main(){
    int opcion;
    cout<<"20 PROGRAMAS EN C++"<<endl;

    cout<<"1. Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
    cout<<"2. Determinar si un numero es par o impar"<<endl;
    cout<<"3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
    cout<<"4. Determinar si una palabra o un número es palíndromo."<<endl;
    cout<<"5. Conversión de números arábigos a romanos (mínimo 1,000)"<<endl;
    cout<<"6. Conversión de números enteros a letras"<<endl;
    cout<<"7. Conversión de números enteros con decimal a letras"<<endl;
    cout<<"8. Una tabla de multiplicar"<<endl;
    cout<<"9. Todas las tablas de multiplicar del 1 al 10"<<endl;
    cout<<"10. Crear de forma gráfica la multiplicación manual"<<endl;
    cout<<"11. Conversión de números decimales a binario"<<endl;
    cout<<"12. Conversión de números decimales a hexadecimales"<<endl;
    cout<<"13. Crear Figuras Geométricas Básicas.s"<<endl;
    cout<<"14. Mover un punto en toda la pantalla"<<endl;
    cout<<"15. Simulación de un Cajero (Automata)"<<endl;
    cout<<"16. Calcular la hipotenusa"<<endl;
    cout<<"17. Calcular Numero cateto"<<endl;
    cout<<"17. MCD ingresar num1 y num2"<<endl;
    cout<<"19. Horas trabajadas"<<endl;
    cout<<"20. Programa DESCANSADOR DE PANTALLA"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    ////////////////////////////////////////////////////////////////////////
    case 1:
        
        int op;

        float a,b,x;

        cout<<"bienvenido al Programa que opera con 2 numeros"<<endl;
        cout<<"Ingrese el valor de a"<<endl;
        cin>>a;
        cout<<"ingrese el valor de b"<<endl;
        cin>>b;

        cout<<"1. SUMAR"<<endl;
        cout<<"2. RESTAR"<<endl;
        cout<<"3. MULTIPLICAR"<<endl;
        cout<<"4. DIVIDIR"<<endl;
        cout<<"ingrese Opcion: ";
        cin>>op;    

        switch(op){

            case 1: x=suma(a,b);
            cout<<"\nel resultado es: "<<x<<endl;
            break;

            case 2: x=resta(a,b);
            cout<<"\nel resultado es: "<<x<<endl;
            break;

            case 3: x=multiplicacion(a,b);
            cout<<"\nel resultado es: "<<x<<endl;
            break;

            case 4: x=division(a,b);
            cout<<"\nel resultado es: "<<x<<endl;
            break;

            default:
            cout<<"opcion invalida...!"<<endl;

            }

        cout<<"*********FIN DEL PROGRAMA / PRESIONA CUALQUIER TECLA PARA CONTINUAR***********"<<endl;
        getch();
        break;
    ///////////////////////////////////////////////////////////////////////////////////



    ///////////////////////////////////////////////////////////////////////////////////
    case 2:
            int ab;

            cout<<"BIENVENIDO AL PROGRAMA QUE DETERMINA SI UN NUMERO ES PAR O IMPAR"<<endl;

            cout<<"Ingrese un valor para a: ";
            cin>>ab;

            if(ab%2==1)
            cout<<"\nel numero es impar"<<endl;

            if(ab%2==0)
            cout<<"\nel numero es par"<<endl;

            cout<<"*************FIN DEL PROGRAMA / PRESIONA CUALQUIER TECLA PARA CONTINUAR*******************"<<endl;
            getch();
        
    break;
    ////////////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////////
    case 3:
        int repetir;
	    cout<<"PROGRAMA QUE CONVIERTE UNIDADES DE LONGITUD, MASA"<<endl;

		operaciones();
	    cout<<"*******************GRACIAS VUELVA PRONTO / PRESIONES CUALQUIER TECLA PARA SALIR***************************";
	    getch();
        break;

    ////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////////
    case 4:

        {
        string palabra;

        cout<<"PROGRAMA QUE DETERMINA SI UNA PALABRA O NUMERO ES PALINDROMO O NO"<<endl;

        cout<<"\nINGRESE PALABRA"<<endl;
        cin>>palabra;
        size_t longitud= palabra.length()-1;
        size_t i=0;
        bool esPalindromo = true;
        for(i=0; i<palabra.length()/2 && esPalindromo;i++){

        if(palabra[i]!=palabra[longitud-i]){
            esPalindromo=false;
            }
        }
        cout<<((true==esPalindromo) ? "es palindromo" : "no es palindromo")<<endl;
        getch();
        }break;
    //////////////////////////////////////////////////////////////
    
    ////////////////////////////////////////////////////////////////////////
    case 5:

        {int numero, uni,dec,cen,mil;

        //numero =2152
        cout<<"digite un numero: ";
        cin>>numero;

        uni= numero%10; numero /=10;   //unidades =2 ; numero=215
        dec= numero%10; numero /=10;   //decenas = 5; numero = 21
        cen= numero%10; numero /=10;   //centena = 1; numero = 2
        mil= numero%10; numero /=10;   //millar = 2 ; numero = 0


        cout<<"EN ROMANO: \t";

        switch (mil)
        {
            case 1:
            cout<<"M";
            break;

            case 2:
            cout<<"MM";
            break;

            case 3:
            cout<<"MMM";
            break;
            }

        switch(cen)
        {
            case 1:
                cout<<"C";
            break;
            case 2:
                cout<<"CC";
            break;
            case 3:
                cout<<"CCC";
            break;
            case 4:
                cout<<"CD";
             break;
            case 5:
                cout<<"D";
            break;
            case 6:
                cout<<"DC";
            break;
            case 7:
                cout<<"DCC";
            break;
            case 8:
                cout<<"DCCC";
            break;
            case 9:
                cout<<"CM";
            break;
        }

        switch(dec)
        {
            case 1:
                cout<<"X";
            break;
            case 2:
                cout<<"XX";
            break;
            case 3:
                cout<<"XXX";
            break;
            case 4:
                cout<<"XL";
            break;
            case 5:
                cout<<"L";
            break;
            case 6:
                cout<<"LX";
            break;
            case 7:
                cout<<"LXX";
            break;
            case 8:
                cout<<"LXXX";
            break;
            case 9:
                cout<<"XC";
            break;
        }

        switch(uni)
        {
            case 1:
                cout<<"I";
            break;
            case 2:
                cout<<"II";
            break;
            case 3:
                cout<<"III";
            break;
            case 4:
                cout<<"IV";
            break;
            case 5:
                cout<<"V";
            break;
            case 6:
                cout<<"VI";
            break;
            case 7:
                cout<<"VII";
            break;
            case 8:
                cout<<"VIII";
            break;
            case 9:
                cout<<"IX";
            break;
        }


        cout<<"\n\n";
        cout<<"*********************************FIN DEL PROGRAMA / PRESIONA CUALQUIER TECLA PARA CONTINUAR****************************"<<endl;
        getch();}
        break;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    case 6:
    {
    int num,m,c,d,u;
    cout<<"PROGRAMA QUE CONVIERTE NUMEROS A LETRAS"<<endl;
      cout<<"ingrese un numero: ";
      cin>>num;

      m=num/1000;
      c=((num%1000)/100);
      d=(((num % 1000)%100)/10);
      u = num % 10;
      string s;  //////////unidades
      string ss;  ////////decenas
      string sss; ////////centas
      string ssss; //////////millar

      switch (u)
      {
		case	1: s="uno";
                  break;
		
            case	2: s="dos";
                  break;
		
            case	3: s="tres";
                  break;
		
            case	4: s="cuatro";
                  break;
		
            case	5: s="cinco";
                  break;
		
            case	6: s="seis";
                  break;
		
            case	7: s="siete";
                  break;
		
            case	8: s="ocho";
                  break;
		
            case	9: s="nueve";
                  break;
      }

      switch (d)
      {
		case	1: ss="diez";
            switch (u)
                {
                case 0:
                    ss="diez";
                    s="";
                    break;
                case 1:
                    ss="once";
                    s="";
                    break;
                case 2:
                    ss="doce";
                    s="";
                    break;
                case 3:
                    ss="trece";
                    s="";
                    break;
                case 4:
                    ss="catorce";
                    s="";
                    break;
                case 5:
                    ss="quince";
                    s="";
                    break;
                default:
                    ss="dieci";
                    break;
                }

            break;
		
            case	2:
                  ss =  u>0 ?  "veinti": "veinte";
                  break;
		
            case	3: ss="treinta";
                  ss =  u>0 ?  "treinta y ": "treinta";
                  break;
		
            case	4:
                  ss =  u>0 ?  "cuarenta y ": "cuarenta";
                  break;
		
            case	5:
                  ss =  u>0 ?  "cincuenta y ": "cincuenta";
                  break;
		
            case	6:
                  ss =  u>0 ?  "sesenta y ": "sesenta";
                  break;
		
            case	7:
                  ss =  u>0 ?  "setenta y ": "setenta";
                  break;
		
            case	8:
                  ss =  u>0 ?  "ochenta y ": "ochenta";
                  break;
		
            case	9:
                  ss =  u>0 ?  "noventa y ": "noventa";
                  break;
      }

      switch (c)
      {
            case 1:
                  {
                  sss = d==0 && u ==0 ? "cien" : "ciento ";
                  break;
                  }
            break;
            
            case 2:
                  sss="doscientos " ; break;
        
            case 3:
                  sss="trescientos " ; break;
        
            case 4:
                  sss="cuatroscientos "; break;
        
            case 5:
                  sss="quinientos " ; break;
        
            case 6:
                  sss="seiscientos "; break;
        
            case 7:
                  sss="setecientos "; break;
        
            case 8:
                  sss="ochocientos "; break;
        
            case 9:
                  sss="novescientos "; break;
      }

      switch (m)
      {
		case	1: ssss="mil ";
                  break;
		
            case	2: ssss="dos mil ";
                  break;
		
            case	3: ssss="tres mil ";
                  break;
		
            case	4: ssss="cuatro mil ";
                  break;
		
            case	5: ssss="cinco mil ";
                  break;
		
            case	6: ssss="seis mil ";
                  break;
		
            case	7: ssss="siete mil ";
                  break;
		
            case	8: ssss="ocho mil ";
                  break;
		
            case	9: ssss="nueve mil ";
                  break;
      }
////////////////////////////////
    cout<<ssss;
    cout<<sss;
    cout<<ss;
    cout<<s;
    cout<<endl;
    getch();
    }
    break;
///////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
    case 7:
    {
    double num;
    int mil,cen,dec,uni;
    int parteEntera, parteDecimal;
    cout<<"PROGRAMA QUE CONVIERTE NUMEROS A LETRAS"<<endl;


    cout<<"ingrese un numero: ";
    cin>>num;
    //separo la parte entera de la decimal
    parteEntera=num;
    parteDecimal=(num-parteEntera)*100;
    //separo los numeros entre su MOD y divido para encontrar su valor en coma correspondiente

    string s;  //////////unidades
    string ss;  ////////decenas
    string sss; ////////centas
    string ssss; //////////millar


    uni = parteEntera%10 ; parteEntera/=10;
    dec = parteEntera%10 ; parteEntera/=10;
    cen = parteEntera%10 ; parteEntera/=10;
    mil = parteEntera%10 ; parteEntera/=10;

    
    

      switch (uni)
      {
		case	1: s="uno";
                  break;
		
            case	2: s="dos";
                  break;
		
            case	3: s="tres";
                  break;
		
            case	4: s="cuatro";
                  break;
		
            case	5: s="cinco";
                  break;
		
            case	6: s="seis";
                  break;
		
            case	7: s="siete";
                  break;
		
            case	8: s="ocho";
                  break;
		
            case	9: s="nueve";
                  break;
      }

      switch (dec)
      {
		case	1: ss="diez";
            switch (uni)
                {
                case 0:
                    ss="diez";
                    s="";
                    break;
                case 1:
                    ss="once";
                    s="";
                    break;
                case 2:
                    ss="doce";
                    s="";
                    break;
                case 3:
                    ss="trece";
                    s="";
                    break;
                case 4:
                    ss="catorce";
                    s="";
                    break;
                case 5:
                    ss="quince";
                    s="";
                    break;
                default:
                    ss="dieci";
                    break;
                }

            break;
		
            case	2:
                  ss =  uni>0 ?  "veinti": "veinte";
                  break;
		
            case	3: ss="treinta";
                  ss =  uni>0 ?  "treinta y ": "treinta";
                  break;
		
            case	4:
                  ss =  uni>0 ?  "cuarenta y ": "cuarenta";
                  break;
		
            case	5:
                  ss =  uni>0 ?  "cincuenta y ": "cincuenta";
                  break;
		
            case	6:
                  ss =  uni>0 ?  "sesenta y ": "sesenta";
                  break;
		
            case	7:
                  ss =  uni>0 ?  "setenta y ": "setenta";
                  break;
		
            case	8:
                  ss =  uni>0 ?  "ochenta y ": "ochenta";
                  break;
		
            case	9:
                  ss =  uni>0 ?  "noventa y ": "noventa";
                  break;
      }
    /////////////////////////////////fin si
//////////////////////////////////////////
      switch (cen)
      {
            case 1:
                  {
                  sss = dec==0 && uni ==0 ? "cien" : "ciento ";
                  break;
                  }
            break;
            
            case 2:
                  sss="doscientos " ; break;
        
            case 3:
                  sss="trescientos " ; break;
        
            case 4:
                  sss="cuatroscientos "; break;
        
            case 5:
                  sss="quinientos " ; break;
        
            case 6:
                  sss="seiscientos "; break;
        
            case 7:
                  sss="setecientos "; break;
        
            case 8:
                  sss="ochocientos "; break;
        
            case 9:
                  sss="novescientos "; break;
      }

      switch (mil)
      {
		case	1: ssss="mil ";
                  break;
		
            case	2: ssss="dos mil ";
                  break;
		
            case	3: ssss="tres mil ";
                  break;
		
            case	4: ssss="cuatro mil ";
                  break;
		
            case	5: ssss="cinco mil ";
                  break;
		
            case	6: ssss="seis mil ";
                  break;
		
            case	7: ssss="siete mil ";
                  break;
		
            case	8: ssss="ocho mil ";
                  break;
		
            case	9: ssss="nueve mil ";
                  break;
      }
        cout<<ssss;
        cout<<sss;
        cout<<ss;
        cout<<s;
        decimal(parteDecimal);
        cout<<endl;
        getch();
    }
        break;
///////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
    case 8:
      {
        int i;
        cout<<"INGRESE UN NUMERO: ";
        cin>>i;
        int j=0;
    
        do
        {
        
            cout<<i<<" x "<<j<<" = "<<(i*j);
            cout<<"\n";
            j++;

        } while (j<=10);

        cout<<"*************FIN DEL PROGRAMA/PRESIONA CUALQUIER TECLA PARA CONTINUAR*******************************";
        getch();
      }
      break;

////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////
    case 9:
        {
        cout<<"BIENVENIDO AL PROGRAMA CON LAS TABLAS DE MULTIPLICAR"<<endl;
        cout<<"___________________________________________________________________________________"<<endl;

        for(int ii=1;ii<=10;ii++){
            cout<<"\nTABLA DEL "<<ii<<"\n";

            for(int jj=1;jj<=10;jj++){
                cout<<ii<<" x "<<jj<<" = "<<ii*jj<<endl;
            }
        }

        cout<<"*************FIN DEL PROGRAMA/PRESIONA CUALQUIER TECLA PARA CONTINUAR*******************************";
        getch();
        }
        break;

//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
      case 10:
      {
            cout<<"Crear de forma gráfica la multiplicación manual"<<endl;
            getch();
            break;
      }
      /////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
      case 11:
            {
            int entero=0;
            int opp;
            int vector[8];
            cout<<"PROGRAMA PARA CONVERTIR NUMEROS DEL S. DECIMAL A BINARIO Y VICEVERSA"<<endl;
    
            cout<<"seleccione una opcion"<<endl;
            cout<<"1. binario a decimal"<<endl;
            cout<<"2. decimal a binario"<<endl;
            cin>>opp;

            switch (opp)
            {
            case 1:
                  int n;
                  cout<<"ingrese cantidad tamanio del numero: ";
                  cin>>n;
                  for(int i = n-1 ; i>=0; i--){
                        cout<<"ingrese la "<< i <<" posicion del vector (solo 0/1)"<<endl;
                        cin>> vector[i];
                        }
                  for(int j=0; j<=n; j++){
                        if(vector[j]==1){
                        entero=(entero+(1*pow(2,j)));
                        }
                  }
                  cout<<"en decimal es: "<<entero<<endl;
            break;
    
            case 2:
            int decimal;
            do
                  {
                  cout<<"ingrese un numero: ";
                  cin>> decimal;
                  if(decimal<0) cout<<"numero invalido! "<<endl;
            } while (decimal<0);
            cout<<"DECIMAL -> "<<decimal<<endl;
            cout<<"BINARIO -> ";
            binario(decimal);
            break;
            }

            cout<<"\n";
            getch();
            }
            break;
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
      case 12:
      {
           cout<<"\tBIENVENIDO AL PROGRAMA QUE CONVIERTE DECIMALES A HEXADECIMALES"<<endl;
            cout<<"__________________________________________________________________________________________"<<endl;

      int num;
            do
                  {
                  cout<<"ingrese un numero: ";
                  cin>> num;
                  if(num<0) cout<<"numero invalido! "<<endl;
            } while (num<0);
            cout<<"DECIMAL -> "<<num<<endl;
            cout<<"HEXADECIMAL -> ";
            hexadecimal(num);
            cout<<"\n";
            getch();
      }
      break;
/////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
      case 13:
      {
      char UMG[1]={'*'};
      int m=30;
      int n=30;

      cout<<UMG<<endl;
      for(int i=1;i<=m;i++){
            gotoxy(30-i,i);
            cout<<UMG;
            Sleep ((100));
            
            gotoxy(30+i,i);   
            cout<<UMG;
            Sleep(100);

            gotoxy(0+(i*2),30);
            cout<<UMG;
            Sleep ((10));
            
      if(i==m){
      getch();
      }
      }
      }
      break;
//////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////
      case 14:
      {
            string UMGG={""};
            cout<<"\t\tingrese una palabra, letra, simbolo: ";
            cin>>UMGG;
            
            
            for(int i=0; i<=30; i++){
                  system("COLOR 10");
                  cout<<UMGG;
                  gotoxy(2*i,i);
                  Sleep(100);
            }
            for(int j=30; j>=0;j--){
                  system("COLOR 13");
                  cout<<UMGG;
                  gotoxy(2*(j),30-j);
                  Sleep(100);

            }
            
            getch();
      }
      break;
/////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
      case 15:
      {
            bool valor=true;
            int oppp;
            string password ="";
        
            cout<<"POR FAVOR INSERTE SU TARJETA"<<endl;
            getch();
            cout<<"LEYENDO..."; Sleep(5000);
            do
            {
                  system("cls");
                  cout<<"Ingrese contrasenia: "<<endl;
                  cin>>password;
                  if(password!="1234") {
                  cout<<"Contrasenia invalida, por favor verifique ...!"<<endl;
                  getch();
                  }
            } while (password!="1234");

      do{
      cout<<"\n\nBIENVENIDO"<<endl;
      cout<<"\n1. Consultar saldo"<<endl;
      cout<<"2. Depositar dinero"<<endl;
      cout<<"3. Retirar Dinero"<<endl;
      cout<<"4. Salir"<<endl;
      cout<<"Seleccion"<<endl;
      cin>>oppp;


      //INICIAMOS SWITCH
      switch(oppp){
            case 1:
            cout<<"\nSu saldo actual es: Q"<<saldo_actual<<endl;
            break;

            case 2:
                  cout<<"\nCuanto dinero desea depositar: "<<endl;
                  cin>>cantidad;
                  depositar(cantidad);
                  break;

            case 3:
                  cout<<"\nCuanto dinero desea retirar: "<<endl;
                  cin>>cantidad;
                  retirar(cantidad);
                  break;

            case 4:
                  cout<<"Espere..."; Sleep(5000);
                  cout<<"Retire su tarjeta"<<endl;
                  valor=false;
                  break;

            default:
                  cout<<"\nOpcion Invalida, por favor VERIFIQUE!"<<endl;
      }   

        
      } while (valor!=false);
      getch();
      }
      break;
///////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////
      case 16:
      {
            cout<<"Programa que calcula la hipotenusa de un numero"<<endl;

            double a,b,x;

            cout<<"ingrese cateto a"<<endl;
            cin>>a;
            cout<<"ingrese cateto b"<<endl;
            cin>>b;

            x=sqrt((pow(a,2)+pow(b,2)));
            cout<<"la hipotenusa es: "<<x<<endl;

            getch();
      }
      break;
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
      case 17:
      {
            bool ciclo=true;
            while(!ciclo==0)
            {
            
            int aa,bb,resultado,opcion1;
            cout<<"\ningrese ocpion"<<endl;
            cout<<"17. calcular cateto"<<endl;
            cout<<"18. calcular mcd"<<endl;
            cout<<"3. SALIR"<<endl;
            cin>>opcion1;
            if(opcion1==17)
                  calculadoracateto();
            
            if(opcion1==18)
                  calculadoramcd();

            if(opcion1==3)
                  ciclo=false;
            }
            
            cout<<"FIN DEL PROGRAMA..."<<endl;
            getch();
      }
      break;
/////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
      case 19:
            {
            float horas_trabajadas, valorporhora;
            float porcentaje, subtotal, total;

            cout<<"ingrese horas trabajadas"<<endl;
            cin>>horas_trabajadas;
            cout<<"ingrese valor por hora"<<endl;
            cin>>valorporhora;
            cout<<"ingrese porcentaje del impuesto"<<endl;
            cin>>porcentaje;

            subtotal=horas_trabajadas*valorporhora;
            total=subtotal-(subtotal*(porcentaje/100));

            cout<<"su salario neto es: Q";

            cout<<total;
            getch();
            }
      break;
////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////
      case 20:
            {
            char UMGGG[4]={'U','M','G','\0'};
            int mm=30;
            int nn=30;

            cout<<UMGGG<<endl;
            for(int i=1;i<=mm;i++){
                  gotoxy(0,i*1);
                  cout<<UMGGG;
                  Sleep ((mm*5)-(i*4));
                  
                  gotoxy(0,i-1);   
                        //system("cls");
                        cout<<UMGGG;
                        Sleep(100);
                        system("cls"); 
                              
                        if (i==mm)
                        {
                        for(int i=1;i<=mm;i++){
                        gotoxy(i*3,i);
                        cout<<UMGGG;
                        Sleep ((mm*5)-(i*4));
                        gotoxy(0,i-1);   
                        cout<<UMGGG;
                        Sleep(100);
                        system("cls"); 
                              
                        }
                        
                        if (i==mm)
                        {
                        for(int i=1;i<=mm;i++){
                        gotoxy(i-1,0);
                        cout<<UMGGG;
                        Sleep ((mm*5)-(i*4)); 
                        gotoxy(0,i+2);   
                        cout<<UMGGG;
                        Sleep(100);
                        system("cls"); 
                              
                        } 
                        }   
                        }
                        }
      }
      break;
////////////////////////////////////////////////////////////////////////////



        ////////////////////////////////////////////////////////
        default:
            cout<<"opcion invalida... verifique!"<<endl;
            system("pause");
            break;
        }

}
///////////////////////////////////////////////////////////////////////////////////////////////

int suma(int a, int b){

    int c;
    c=a+b;
    return c;
}

int resta(int a, int b){

    int c;
    c=a-b;
    return c;
}

float division(float a,float b){

    float c;
    c=a/b;
    return c;
}

int multiplicacion(int a, int b){

    int c;
    c=a*b;
    return c;
}

/////////////////////////////////////////////////////////////////////////////////

float km_millas(int a){
	float x;
	x=a*0.6214;
	return x;
	}

float millas_km(int a){
	float x;
	x=a*1.60927;
	return x;
	}

float metro_pulgadas(int a){
	float x;
	x=((a*100)/2.54);
	return x;
	}

float pulgadas_metro(int a){
	float x;
	x=a*0.0254;
	return x;
	}

float lib_kg(int a){
	float x;
	x=(a/2.20462);
	return x;
	}

float kg_lib(int a){
	float x;
	x=(a*2.20462);
	return x;
}

void operaciones(){
	int opcion,a;	
	bool repetir = true;
	do
	{	
	system("cls");
	cout<<"\ningrese opcion"<<endl;
	cout<<"1. km a millas"<<endl;
	cout<<"2. millas a km"<<endl;
	cout<<"3. metros a pulgadas"<<endl;
	cout<<"4. pulgadas a metros"<<endl;
	cout<<"5. libras a kilos"<<endl;
	cout<<"6. kilos a libras"<<endl;
	cout<<"7. SALIR"<<endl;
	cin>>opcion;

		switch(opcion)
		{
			
			case 1:
			cout<<"\ningrese km: ";
			cin>>a;
			cout<<"\nen millas: "<<km_millas(a);
			break;

			case 2:
			cout<<"\ningrese millas: ";
			cin>>a;
			cout<<"\nen km: "<<millas_km(a);
			break;

			case 3:
			cout<<"\ningrese metros: ";
			cin>>a;
			cout<<"\nen pulgadas: "<<metro_pulgadas(a);
			break;

			case 4:
			cout<<"\ningrese pulgadas: ";
			cin>>a;
			cout<<"\nen metros: "<<pulgadas_metro(a);
			break;

			case 5:
			cout<<"\ningrese libras: ";
			cin>>a;
			cout<<"\nen kg: "<<lib_kg(a);
			break;

			case 6:
			cout<<"\ningrese kilos: ";
			cin>>a;
			cout<<"\nen lb: "<<kg_lib(a);
			break;

			case 7:
			repetir=0;
			break;

			default:
			cout<<"OPCION INVALIDA... VERIFIQUE!!!!!";
			break;
		}
	getch();
	}
	while (repetir);
}

void decimal(int parteDecimal){

    int dec,uni;
    if(parteDecimal<100){


    uni = parteDecimal%10 ; parteDecimal/=10;
    dec = parteDecimal%10 ; parteDecimal/=10;

    string p;  //////////unidades
    string pp;  ////////decenas
    cout<<" CON ";

      switch (uni)
      {
		case	1: p="uno";
                  break;
		
            case	2: p="dos";
                  break;
		
            case	3: p="tres";
                  break;
		
            case	4: p="cuatro";
                  break;
		
            case	5: p="cinco";
                  break;
		
            case	6: p="seis";
                  break;
		
            case	7: p="siete";
                  break;
		
            case	8: p="ocho";
                  break;
		
            case	9: p="nueve";
                  break;
      }

      switch (dec)
      {
		case	1: pp="diez";
            switch (uni)
                {
                case 0:
                    pp="diez";
                    p="";
                    break;
                case 1:
                    pp="once";
                    p="";
                    break;
                case 2:
                    pp="doce";
                    p="";
                    break;
                case 3:
                    pp="trece";
                    p="";
                    break;
                case 4:
                    pp="catorce";
                    p="";
                    break;
                case 5:
                    pp="quince";
                    p="";
                    break;
                default:
                    pp="dieci";
                    break;
                }

            break;
		
            case	2:
                  pp =  uni>0 ?  "veinti": "veinte";
                  break;
		
            case	3: 
                  pp =  uni>0 ?  "treinta y ": "treinta";
                  break;
		
            case	4:
                  pp =  uni>0 ?  "cuarenta y ": "cuarenta";
                  break;
		
            case	5:
                  pp =  uni>0 ?  "cincuenta y ": "cincuenta";
                  break;
		
            case	6:
                  pp =  uni>0 ?  "sesenta y ": "sesenta";
                  break;
		
            case	7:
                  pp =  uni>0 ?  "setenta y ": "setenta";
                  break;
		
            case	8:
                  pp =  uni>0 ?  "ochenta y ": "ochenta";
                  break;
		
            case	9:
                  pp =  uni>0 ?  "noventa y ": "noventa";
                  break;
      }

    cout<<pp;
    cout<<p;
    }/////////////////////////////////fin si
    
}

void binario(int n){

    if(n>1) binario(n/2);
    cout<<" "<<n%2<<" ";
}

void hexadecimal(int n){
    int aux;
    if(n>15) hexadecimal(n/16);

        aux=n%16;
        switch (aux)
        {
        case 10: cout<<"A";
            break;
        case 11: cout<<"B";
            break;
        case 12: cout<<"C";
            break;
        case 13: cout<<"D";
            break;
        case 14: cout<<"E";
            break;
        case 15: cout<<"F";
            break;
        default:
            cout<<n%16;
            break;
    }
}

void gotoxy(int x,int y){ 
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);
    }

void depositar(int cantidad){
    saldo_actual+=cantidad;
    cout<<"\nHas depositado exitosamente Q"<<cantidad<<" ,tu saldo actual es de Q"<<saldo_actual<<endl;
}

void retirar(int cantidad){
    if(cantidad<=saldo_actual){
        saldo_actual-=cantidad;
        cout<<"\nHas retirado exitosamente Q"<<cantidad<<" ,tu saldo actual es: Q"<<saldo_actual<<endl;
    }
    else    cout<<"No tienes suficientes fondos. Tu saldo actual es: Q"<<saldo_actual<<endl;
}

float cateto(int a, int b){
	float x=sqrt((pow(a,2)-pow(b,2)));
	return x;
	
}

int mcd(int num1, int num2){
	int a, b, res;
	a=std::max(num1,num2);
	b=std::min(num1,num2);
	do
	{
		res=b;
		b=a%b;
		a=res;
	} while (b!=0);
	return res;
	
}

void calculadoracateto (){
	int a,b,resultado;
	
	cout<<"ingrese HIPOTENUSA"<<endl;
	cin>>a;
	cout<<"ingrese CATETO CONOCIDO"<<endl;
	cin>>b;
	resultado=cateto(a,b);
	cout<<resultado;
	getch();
}

void calculadoramcd (){
	
	int num1, num2,resultado;
	cout<<"ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	resultado=mcd(num1,num2);
	cout<<resultado;
	getch();
}
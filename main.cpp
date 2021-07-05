#include <iostream>
using namespace std;
//1.Una funcion recibe 3 numeros enteros.La funcion debe devolver el mayor de ellos. No debe utilizar condiciones compuestas (AND , ni OR)

int mayor(int num1, int num2, int num3)
{
    int may;
    if(num1 > num2 )
        if(num1 > num3)
            may=num1;
        else
            may=num3;
    else
        if(num2 > num3)
            may=num2;
        else
            may=num3;
    return may;
}
//2. Una funcion recibe como parametro un numero entero, que representa el mes del año. La funcion debe devolver el nombre del mes
// por ejemplo si el mes es 2 debe devolver "febrero"

string nombre_mes(int mes)
{
    string aux="";
    if(mes==1)
        aux="Enero";
    else if(mes==2)
        aux="Febrero";
    else if(mes==3)
        aux="Marzo";
    else if(mes==4)
        aux="Abril";
    else if(mes==5)
        aux="Mayo";
    else if(mes==6)
        aux="Junio";
    else if(mes==7)
        aux="Julio";
    else if(mes==8)
        aux="Agosto";
    else if(mes==9)
        aux="Septiembre";
    else if(mes==10)
        aux="Octubre";
    else if(mes==11)
        aux="Noviembre";
    else if(mes==12)
        aux="Diciembre";
    else
        aux="Mes fuera de rango";
    return aux;
}
//3.Diseñe una funcion que genere un rectangulo.La funcion debe recibir un entero que indica el numero de filas del rectangulo
//y un caracter que indica el relleno del rectangulo.

string cuadrado(int fila, string relleno)
{
    string aux="";
    for(int i=1; i<=fila; i++)
    {
        for(int j=1; j<=10; j++)
            aux=aux + relleno;
        aux=aux+ "\n";
    }
    return aux;
}

void cuadrado2(int fila, char relleno)
{
    for(int i=1; i<=fila; i++)
    {
        for(int j = 1; j <= 10; j++)
            cout<<relleno;
        cout<<endl;
    }
}
//4. Diseñe una funcion que imprima los primeros n numeros primos. El parametro indica el total de primos a imprimir.

bool esPrimo(int num)
{
    int cont=2;
    bool flat=true;
    while(cont <= num/2 && flat==true ){
        if(num % cont == 0)
            flat = false;
        cont ++;
    }
    return flat;

}

void imprimePrimos(int n)
{
    int i=1; int j=1;
    while(i<=n)
    {
        j++;
        if (esPrimo(j)==true)
        {
            cout<<" "<<j;
            i++;
        }
    }
}

//5. Diseñe la funcion que devuelva la sumatoria de los n primeros numeros primos.El parametro n indica el total de primos a sumar.

int sumatoriaprimos(int n)
{
    int i=1; int j=1; int suma=0;
    while(i<=n)
    {
        j++;
        if (esPrimo(j))
        {
            suma+=j; i++;
        }
    }
    return suma;
}
//6. Diseñe una funcion que recibe un entero que representa el mes del año.La funcion debe retornar el dia maximo que trae ese mes

int diamaximodelmes(int mes, int anio) {
    int limite = 0;
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        limite = 31;
    else if (mes==2){
        if(anio % 4 == 0)
            limite = 29;
        else
            limite = 28;
    }
    else
        limite = 30;

    return limite;
}
int main() {
    cout << endl << "El mayor de 20,10,8 es: " << mayor(20, 10, 8);
    cout << endl << "El mayor de 20,30,18 es: " << mayor(20, 30, 18);

    cout << endl << "El mes 5 corresponde a " << nombre_mes(5);
    cout << endl << "El mes 1 corresponde a " << nombre_mes(1);
    cout << endl << "El mes 12 corresponde a " << nombre_mes(12);
    cout << endl << "El mes 15 corresponde a " << nombre_mes(15);

    cout << endl;
    cout << "IMPRIMIENDO FIGURAS" << endl;
    cout << cuadrado(5, "a");
    cout << endl;
    cout << cuadrado(3, "+");
    cout<<endl;
    cuadrado2(3,'-');

    cout<<endl<<"Impresion de primos";
    imprimePrimos(10);

    cout<<endl<<"La sumatoria de los 5 primeros primos es: ";
    int suma= sumatoriaprimos(5);
    cout<<suma;

    cout<<endl<<"Enero trae "<<diamaximodelmes(1,2021)<<" dias ";
    cout<<endl<<"Noviembre trae "<<diamaximodelmes(11,2003)<<" dias ";
    cout<<endl<<"Diciembre trae "<<diamaximodelmes(12,2020)<<" dias ";
    cout<<endl<<"Febrero trae "<<diamaximodelmes(2,2021)<<" dias ";






    return 0;
}

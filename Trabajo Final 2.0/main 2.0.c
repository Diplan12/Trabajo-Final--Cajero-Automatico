#include <stdio.h>
#include <stdlib.h>
#include  "MisFunciones.h"

char * leer();
void imprimeM ();
int identifica (int x);
int identifica2 (int x);
int identifica3 (int x);
int identifica4 (int x);
int identifica5 (int x);
int identifica6 (int x);
int identifica7 (int x);
int identifica8 (int x);
int retiro (int saldo,int * saldoNuevo);
void reduccion(int * dinero, int * dinerot);
void reduccion2(int * dinero, int * dinerot);
void reduccion3(int * dinero, int * dinerot);
void reduccion4( int * dinerot, int retiraro);
void NuevoSaldo( int * cuentaBANK, int cantidad);
void finTransfer( int * cuentaE,int *cuentaR, int cantidad);
int transfer (int ncuenta1,int ctransferir, int saldo, int * cuentaR,int * cuentaE);
void memoria (char * cuenta1,char * cuenta2,char * cuenta3,char * cuenta4,char * cuenta5,
              char * cuenta6,char * cuenta7,char * cuenta8);




char * leer()
{
    char c, *prt;
    int i=0;
    prt = (char *) malloc(1 * sizeof(char));
    *prt = '\0';
    while ((c=getchar())!='\n')
    {
        prt = (char *) realloc(prt, (i + 2) * sizeof(char));
        prt[i++] = c;
        prt[i] = '\0';
    }
    return prt;
}

typedef struct
{
    char * nombre  ;
    int cedula;
    char * direccion  ;
    int celular ;
    int deposito ;
} info1;


info1 * leer_Guardar_cuenta(int n)    // Función para añadir Memoria Dinamica y Guargar la informacion del usuario
{
    info1 * mi_cuenta = (info1 *) calloc(n, sizeof(info1));
    for (int i = 0; i < n; ++i)
    {
        printf("Digite su nombre completo: ");
        mi_cuenta[i].nombre=leer();
        printf("Digite su direcci%cn : ",162);
        mi_cuenta[i].direccion=leer();

        printf("Digite su c%cdula (SIN GUION): ",130);
        scanf("%d", &mi_cuenta[i].cedula);
        printf("Digite su n%cmero telef%cnico: ",163,162);
        scanf("%d",  &mi_cuenta[i].celular);
        printf("Digite su valor inicial de ingreso: ");
        scanf("%d",  &mi_cuenta[i].deposito);

        FILE*cuentaN;
        cuentaN= fopen("Mi_nueva_cuenta.txt","wt");
        if (cuentaN == NULL)
            printf("No se pudo abrir el archivo.\n");
        else
        {
            fprintf(cuentaN,"Nombre: %s \n",mi_cuenta[i].nombre);
            fprintf(cuentaN,"Direccion: %s \n",mi_cuenta[i].direccion);
            fprintf(cuentaN,"Cedula: %d\n",mi_cuenta[i].cedula);
            fprintf(cuentaN,"Celular: %d\n",mi_cuenta[i].celular);
            fprintf(cuentaN,"Valor a depositar %d RD$",mi_cuenta[i].deposito);
            fclose(cuentaN);
        }
        system("CLS");
        printf("SU INFORMACION SE HA ENVIADO DE MANERA EXITOSA\n");
        printf("DIRIJASE  A LA OFICINA PARA SER ATENDIDO \n");
        printf("GRACIAS POR ELEGIRNOS,VUELVA PRONTO \n");
        system("Pause");
        system("CLS");
        getchar();

        return (main());
    }
}


struct estado_atm
{
    int  quinientos;
    int mil;
    int  dos_mil;
    int  total;
} estado1 = { 1000,600,500,2100000};

struct cuenta1
{
    char nombre[100];
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta1= { "Rafael Diplan Suazo",405123963,987,10000 };

struct cuenta2
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta2 = { "Francisco Garcia",206985621,963,20000 };

struct cuenta3
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta3 = { "Angela Suazo Diplan",306951357,654,5000 };

struct cuenta4
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta4 = { "Luisa Velazquez",709354961,951,20000 };

struct cuenta5
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta5= { "Domingo Lopez",103396012,456,500 };

struct cuenta6
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta6 = { "Ivan Tactuk",753669224,5025,35000 };

struct cuenta7
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta7 = { "Rafael Suazo",325556330,630,8900 };

struct cuenta8
{
    char nombre[100] ;
    int tarjeta  ;
    int codigo  ;
    int saldo ;
} cuenta8 = { "Alyda Santos ",69400394,4077,7800 };



void reduccion(int * dinero, int * dinerot)    //Función por referencia para reducir el dinero (500) del cajero automático
{
    *dinero=*dinero-1;
    *dinerot=*dinerot-500;

    getch ();
    system("CLS");
    return (main());
}
void reduccion2(int * dinero, int * dinerot)   //Función por referencia para reducir el dinero (1000) del cajero automático
{
    *dinero=*dinero-1;
    *dinerot=*dinerot-1000;

    getch ();
    system("CLS");
    return (main());




}
void reduccion3(int * dinero, int * dinerot)  //Función por referencia para reducir el dinero (2000) del cajero automático
{
    *dinero=*dinero-1;
    *dinerot=*dinerot-2000;

    getch ();
    system("CLS");
    return (main());




}
void reduccion4( int * dinerot, int retiraro)  //Función por referencia para reducir el dinero (usuario digite ) del cajero automático
{

    *dinerot=*dinerot-retiraro;

    getch ();
    system("CLS");
    return (main());




}

void NuevoSaldo( int * cuentaBANK, int cantidad)  //Función por referencia para reducir el dinero (usuario digite ) de la cuenta del ususario
{

    *cuentaBANK=*cuentaBANK-cantidad;

    getch ();
}


void memoria (char * cuenta1,char * cuenta2,char * cuenta3,char * cuenta4,char * cuenta5,char * cuenta6,char * cuenta7,char * cuenta8)
{
    *cuenta1=leer();
    *cuenta2=leer();
    *cuenta3=leer();
    *cuenta4=leer();
    *cuenta5=leer();
    *cuenta6=leer();
    *cuenta7=leer();

}


int retiro (int saldo,int * saldoNuevo) //Función para retirar , recibe un puntero para poder descontar tanto a la cuenta como al cajero
{
    int total;
    int retiraro;
    int menu;
    int opcion;
    int cajero;
    int a=500;
    int b=1000;
    int c=2000;

    printf("%c Cu%cnto dinero desea retirar %c",168,160,63);
    printf("\n1. 500 RD$");
    printf("\n2. 10000 RD$");
    printf("\n3. 20000 RD$");
    printf("\n4. Otra cantidad \n");
    printf("\n5. Salir\n");
    printf("\n\nLa opci%cn que eligi%c es: ",162,162);
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:
        if  (estado1.total>saldo)
        {
            if (estado1.quinientos>= 1)
            {
                if (a>saldo)
                {
                    system ("CLS");
                    printf ("No dispone de tanto dinero en su cuenta\n");
                    printf ("El saldo que dispone son: %d RD$",saldo);
                }
                else
                {
                    system ("CLS");
                    saldo=saldo-a;
                    printf ("Ha retirado %d RD$\n",a);
                    printf ("Su saldo final es de : %d RD$\n",saldo);
                    printf(" \t  GRACIAS POR PREFERIRNOS\n ");
                    printf(" \t  VUELVA PRONTO\n");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    NuevoSaldo(saldoNuevo,a);
                    reduccion(&estado1.quinientos,&estado1.total);
                    system("CLS");
                    return (main());
                }
            }
            else
                printf ("EL CAJERO AUTOMATICO NO CUENTA CON SUFICIENTES PAPELETAS DE 500\n");
        }
        else
            printf ("EL CAJERO AUTOMATICO NO CUENTA CON DINERO SUFICIENTE\n");
        break;

    case 2:
        if  (estado1.total>saldo)
        {
            if (estado1.mil>= 1)
            {
                if (b>saldo)
                {
                    system ("CLS");
                    printf ("No dispone de tanto dinero en su cuenta\n");
                    printf ("El saldo que dispone son: %d RD$",saldo);
                }
                else
                {
                    system ("CLS");
                    saldo=saldo-b;
                    printf ("Ha retirado %d RD$\n",b);
                    printf ("Su saldo final es de : %d RD$\n",saldo);
                    printf(" \t  GRACIAS POR PREFERIRNOS\n ");
                    printf(" \t  VUELVA PRONTO\n");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    NuevoSaldo(saldoNuevo,b);
                    reduccion2(&estado1.mil,&estado1.total);
                }
            }
            else
                printf ("EL CAJERO AUTOMATICO NO CUENTA CON SUFICIENTES PAPELETAS DE 1000\n");
        }
        else
            printf ("EL CAJERO AUTOMATICO NO CUENTA CON DINERO SUFICIENTE\n");
        break;


    case 3:
        if  (estado1.total>saldo)
        {
            if (estado1.dos_mil>= 1)
            {
                if (c>saldo)
                {
                    system ("CLS");
                    printf ("No dispone de tanto dinero en su cuenta\n");
                    printf ("El saldo que dispone son: %d RD$",saldo);
                }
                else
                {
                    system ("CLS");
                    saldo=saldo-c;
                    printf ("Ha retirado %d RD$\n",c);
                    printf ("Su saldo final es de : %d RD$\n",saldo);
                    printf(" \t  GRACIAS POR PREFERIRNOS\n ");
                    printf(" \t  VUELVA PRONTO\n");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    printf(" .........RETIRAR LA TARJETA........\n ");
                    NuevoSaldo(saldoNuevo,c);
                    reduccion3(&estado1.dos_mil,&estado1.total);
                }
            }
            else
                printf ("EL CAJERO AUTOMATICO NO CUENTA CON SUFICIENTES PAPELETAS DE 2000\n");
        }
        else
            printf ("EL CAJERO AUTOMATICO NO CUENTA CON DINERO SUFICIENTE\n");
        break;


    case 4:

        system ("CLS");
        printf ("Introduzca la cantidad a retirar: ");
        scanf ("%d",&retiraro);
        if (estado1.total>retiraro)
        {
            if (retiraro>saldo)
            {
                system ("CLS");
                printf ("No dispone de tanto dinero en su cuenta\n");
                printf ("El saldo que dispone son: %d RD$",saldo);
            }
            else
            {
                system ("CLS");
                saldo=saldo-retiraro;
                printf ("Ha retirado %d RD$\n",retiraro);
                printf ("Su saldo final es de : %i RD$\n",saldo);
                printf(" \t  GRACIAS POR PREFERIRNOS\n ");
                printf(" \t  VUELVA PRONTO\n");
                printf(" .........RETIRAR LA TARJETA........\n ");
                printf(" .........RETIRAR LA TARJETA........\n ");
                printf(" .........RETIRAR LA TARJETA........\n ");
                printf(" .........RETIRAR LA TARJETA........\n ");
                NuevoSaldo(saldoNuevo,retiraro);
                reduccion4(&estado1.total,retiraro);
            }
        }
        else
            printf("NO HAY SUFICIENTE DINERO EN EL CAJERO AUTOMATICO");
        break;

    case 5:
        system("CLS");
        return (main());

    default:
        printf("La opcion elegida no es reconocida");
        break;
    }
    getch ();
    return saldo;
}


void finTransfer( int * cuentaE,int *cuentaR, int cantidad) //Función por referencia que reduce y aumenta el saldo de las cuentas al transferir
{
    *cuentaE=*cuentaE-cantidad;
    *cuentaR=*cuentaR+cantidad;

    getch ();
    system("CLS");
    return (main());
}


int transfer (int ncuenta1,int ctransferir, int saldo, int * cuentaR,int * cuentaE)    // Función para transferencia ,recibe punteros para poder descontar y mandar el dinero
{
    int transferir, cambio,usuario2;
    printf ("Introduzca la cantidad a transferir:\n ");
    scanf ("%d",&transferir);
    if (transferir>saldo)
    {
        printf ("No dispone de tanto dinero en su cuenta\n");
        printf ("El saldo que dispone son: %d RD$",saldo);
    }

    if  (saldo>transferir)
    {
        int si=si;
        int no=no;
        system ("CLS");
        printf( "%c SEGURO QUE DESEA TRANSFERIR AL NUMERO DE CUENTA %d \n ",168,ncuenta1);
        printf("CON EL MONTO DE :%d RD$ %c \n", transferir,63);
        printf( "\n1. Para confirmar  \n2. Para denegar  ");
        scanf("%d",&si);

        if ( si==1)
        {
            system ("CLS");
            saldo=saldo-transferir;
            printf ("Ha tranfesrido %d RD$ a la cuenta %d \n ",transferir, ncuenta1);
            printf ("Su saldo final son: %d RD$\n",saldo);
            printf(" VUELVA PRONTO\n");
            printf(" .........RETIRAR LA TARJETA........\n ");
            printf(" .........RETIRAR LA TARJETA........\n ");
            printf(" .........RETIRAR LA TARJETA........\n ");
            printf(" .........RETIRAR LA TARJETA........\n ");
            finTransfer(cuentaE,cuentaR,transferir);
        }
        if( si==2)
        {
            system ("CLS");
            printf(" ERROR EN LA TRANSFERENCIA\n ");
            printf(" ERROR EN LA TRANSFERENCIA\n ");
            printf(" ERROR EN LA TRANSFERENCIA \n");
        }
        getch ();
    }
}


void imprimeM ()
{
    printf("Escoja una opci%cn del men%c:",162,163);
                printf("\n1. MONTO TOTAL DE LA CUENTA");
                printf("\n2. RETIRO");
                printf("\n3. TRANSFERENCIA ");
                printf("\n4. SALIR");
                printf("\n\nLa opci%cn que eligi%c es: ",162,162);
  }




int main()
{
    int ncuent,ncuent2,ncuent3,ncuent4,ncuent5,ncuent6,ncuent7,ncuent8;
    int tarjeta,pass;

    printf("\t \t Bienvenidos al Banco Estrella:\n\n\n");
    int opc, menu;
    printf("Escoja una opci%cn del men%c:",162,163);
    printf("\n1. Acceder a una  cuenta bancaria");
    printf("\n2. Formulario para cuenta bancaria");
    printf("\n3. Estado del cajero autom%ctico",160);
    printf("\n\nLa opci%cn que eligio es: ",162);
    scanf("%d", &menu);

    switch(menu)
    {
    case 1:
        system("CLS");
        printf("\t \t USUARIO (Inserte la Tarjeta) :");
        scanf("\t \t %d",&tarjeta);

        if ( tarjeta==cuenta1.tarjeta)  // Los IFs van a comparar con los numeros de tarjeta existente
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta1.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf("CONTRASEÑA INCORRECTA \n");

        }


        if (tarjeta==cuenta2.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta2.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf("CONTRASEÑA INCORRECTA \n");

        }
        if (tarjeta==cuenta3.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta3.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf(" CONTRASEÑA INCORRECTA \n");
        }

        if (tarjeta==cuenta5.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta5.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf(" CONTRASEÑA INCORRECTA \n");
        }

        if (tarjeta==cuenta4.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta4.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf(" CONTRASEÑA INCORRECTA \n");
        }

        if (tarjeta==cuenta6.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta6.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf(" CONTRASEÑA INCORRECTA \n");
        }

        if (tarjeta==cuenta7.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta7.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf(" CONTRASEÑA INCORRECTA \n");
        }

        if (tarjeta==cuenta8.tarjeta)
        {
            printf("\t \t CONTRASE%cA:",165);
            scanf("%d",&pass);

            if (pass==cuenta8.codigo)
            {
                printf("......... ACCEDIENDO A LA CUENTA ............\n");
                system("CLS");
            }
            else
                printf(" CONTRASEÑA INCORRECTA \n");
        }

        if (tarjeta != cuenta1.tarjeta && tarjeta != cuenta2.tarjeta  &&tarjeta != cuenta3.tarjeta &&tarjeta != cuenta5.tarjeta &&tarjeta != cuenta4.tarjeta &&tarjeta != cuenta6.tarjeta &&tarjeta != cuenta7.tarjeta &&tarjeta != cuenta8.tarjeta)
        {
            printf("..........ERROR AL DIGITAR LA CUENTA......... \n......... REVISE DE NUEVO SUS DATOS.........\n");
            printf(".......... NUMERO DE TARJETA NO REGISTRADO.........\n");
            printf("..........VUELVA AL MENU PRINCIPAL..........\n");
            getch();
            system("CLS");
            return(main()) ;
        }


        if ( tarjeta==cuenta1.tarjeta)   // Estos Ifs contienen los menus cuando entra a su cuenta
        {
            if (pass==cuenta1.codigo)
            {

                printf(" \t \t Bienvenido se%cor RAFAEL DIPLAN :\n\n\n",164);
                int opc1, menu2;
                imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD \n", cuenta1.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n\n\n\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta1.saldo,&cuenta1.saldo);
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent);
                    identifica(ncuent);
                    system("CLS");
                    return (main());
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }
            else
                printf("CONTRASEÑA INCORRECTA\n");
            getch();
            system("CLS");
            return(main());
        }

        if( tarjeta==cuenta2.tarjeta)
        {
            if (pass==cuenta2.codigo)
            {
                printf(" \t \t Bienvenido se%cor FRANCISCO GARCIA :\n\n\n",164);
                int opc1, menu2;
               imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta2.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta2.saldo,&cuenta2.saldo);
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent2);
                    identifica2(ncuent2);
                    system("CLS");
                    return (main());
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }
            else
                printf("CONTRASEÑA INCORRECTA\n");
        }

        if ( tarjeta==cuenta3.tarjeta)
        {
            if (pass==cuenta3.codigo)
            {
                printf(" \t \t Bienvenida se%cora ANGELA SUAZO :\n\n\n",164);
                int opc1, menu2;
                imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta3.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta3.saldo,&cuenta3.saldo);
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent3);
                    identifica3(ncuent3);
                    system("CLS");
                    return (main());
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }

            else
                printf("CONTRASEÑA INCORRECTA\n ");
        }

        if ( tarjeta==cuenta4.tarjeta)
        {
            if (pass==cuenta4.codigo)
            {
                printf(" \t \t Bienvenido se%cora Luisa Velazquez:\n\n\n",164);
                int opc1, menu2;
              imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta4.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta4.saldo,&cuenta4.saldo);
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent4);
                    identifica4(ncuent4);
                    system("CLS");
                    return (main());
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }

            else
                printf("CONTRASEÑA INCORRECTA\n ") ;
            getch();
            system("CLS");
            return (main());
        }

        if ( tarjeta==cuenta6.tarjeta)
        {
            if (pass==cuenta6.codigo)
            {
                printf(" \t \t Bienvenido se%cor Ivan Tactuk :\n\n\n",164);
                int opc1, menu2;
                imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta6.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta6.saldo,&cuenta6.saldo);
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent6);
                    identifica6(ncuent6);
                    system("CLS");
                    return (main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }

            else
                printf("CONTRASEÑA INCORRECTA\n ");
            getch();
            system("CLS");
            return (main());
        }

        if ( tarjeta==cuenta7.tarjeta)
        {
            if (pass==cuenta7.codigo)
            {
                printf(" \t \t Bienvenido se%cor Rafael Suazo :\n\n\n",164);
                int opc1, menu2;
                imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta7.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta7.saldo,&cuenta7.saldo);
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent7);
                    identifica7(ncuent7);
                    system("CLS");
                    return (main());
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }

            else
                printf("CONTRASEÑA INCORRECTA\n ");
            getch();
            system("CLS");
            return (main());
        }

        if ( tarjeta==cuenta8.tarjeta)
        {
            if (pass==cuenta8.codigo)
            {
                printf(" \t \t Bienvenido se%cora Alyda Santos :\n\n\n",164);
                int opc1, menu2;
                imprimeM();
                scanf("%d", &menu2);

                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta8.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta8.saldo,&cuenta8.saldo);
                    system("CLS");
                    return (main());
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent8);
                    identifica8(ncuent8);
                    system("CLS");
                    return (main());
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }

            else
                printf("CONTRASEÑA INCORRECTA\n ");
            getch();
            system("CLS");
            return (main());
        }

        if ( tarjeta==cuenta5.tarjeta)
        {
            if (pass==cuenta5.codigo)
            {
                printf(" \t \t Bienvenido se%cor DOMINGO LOPEZ:\n\n\n",164);
                int opc1, menu2;
                imprimeM();
                scanf("%d", &menu2);


                switch(menu2)
                {
                case 1:
                    system ("CLS");
                    printf("Su valor total dentro de la cuenta es de %d $RD\n", cuenta5.saldo);
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    printf(" .........RETIRAR LA TARJETA.........\n ");
                    getch ();
                    system("CLS");
                    return (main());
                    break;

                case 2:
                    system ("CLS");
                    printf("\t \t Retirar\n\n\n");
                    retiro(cuenta5.saldo,&cuenta5.saldo);
                    break;

                case 3:
                    system ("CLS");
                    printf("\t \t TRASNFERENCIA \n\n\n");
                    printf(" Escriba el n%cmero de cuenta a transferir: ",163);
                    scanf("%d",&ncuent5);
                    identifica5(ncuent5);
                    break;

                case 4:
                    system("CLS");
                    return(main());
                    break;

                default:
                    printf("La opci%cn elegida no es reconocida",162);
                    getch();
                    system("CLS");
                    return (main());
                    break;
                }
            }
            else
                printf("CONTRASEÑA INCORRECTA\n");
            getch();
            system("CLS");
            return(main());
        }
        break;


    case 2 :                //Formulario que se guardara con las informaciones del ususario
        system("CLS");
        printf("  \t \tPor favor llenar las informaciones necesarias\n\n\n :");
        leer_Guardar_cuenta(1);
        break;

    case 3:
        system("CLS");
        printf("Papelta de 500 RD$....................%d \n",estado1.quinientos );
        printf("Papelta de 1000 RD$....................%d \n",estado1.mil );
        printf("Papelta de 2000 RD$....................%d \n ",estado1.dos_mil );
        printf("\t \t TOTAL....................%d RD$ \n",estado1.total );
        system("Pause");
        system("CLS");
        getchar();
        return (main());
        break;

    default:
        printf("La opci%cn elegida no es reconocida",162);
        getch();
        system("CLS");
        return(main());
        break;
    }
}


int identifica (int x)  //Las Funciones identifica son para saber si el numero de cuenta de transferencia es válido
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Garc%ca:\n",164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta1.saldo,&cuenta2.saldo,&cuenta1.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora Angela Suazo:\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta1.saldo,&cuenta3.saldo,&cuenta1.saldo);
    }

    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora Luisa Velazquez:\n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta1.saldo,&cuenta5.saldo,&cuenta1.saldo);
    }

    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez \n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta1.saldo,&cuenta5.saldo,&cuenta1.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor Iv%cn Tactuk:\n",164,161);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta1.saldo,&cuenta6.saldo,&cuenta1.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Suazo:\n",164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta1.saldo,&cuenta7.saldo,&cuenta1.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta1.saldo,&cuenta8.saldo,&cuenta1.saldo);
    }

    if (x!=usuario2 && x!=usuario3&& x!=usuario4 && x!=usuario5 && x!=usuario6 && x!=usuario7 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

int identifica2 (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta2.saldo,&cuenta1.saldo,&cuenta2.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora Angela Suazo:\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta2.saldo,&cuenta3.saldo,&cuenta2.saldo);
    }


    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora Luisa Velazquez:\n",164);
        transfer(cuenta4.tarjeta,cuenta4.saldo,cuenta2.saldo,&cuenta4.saldo,&cuenta2.saldo);
    }


    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez:\n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta2.saldo,&cuenta5.saldo,&cuenta2.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor Iv%cn Tactuk:\n",164,160);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta2.saldo,&cuenta6.saldo,&cuenta2.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Suazo:\n",164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta2.saldo,&cuenta7.saldo,&cuenta2.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta2.saldo,&cuenta8.saldo,&cuenta2.saldo);
    }

    if (x!=usuario1 && x!=usuario3&& x!=usuario4 && x!=usuario5 && x!=usuario6 && x!=usuario7 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

int identifica3 (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta3.saldo,&cuenta1.saldo,&cuenta3.saldo);
    }

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Garc%ca\n",164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta3.saldo,&cuenta2.saldo,&cuenta3.saldo);
    }

    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora Luisa Velazquez:\n",164);
        transfer(cuenta4.tarjeta,cuenta4.saldo,cuenta3.saldo,&cuenta4.saldo,&cuenta3.saldo);
    }

    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez:\n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta3.saldo,&cuenta5.saldo,&cuenta3.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor Iv%n Tactuk:\n",164,160);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta3.saldo,&cuenta6.saldo,&cuenta3.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Suazo:\n",164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta3.saldo,&cuenta7.saldo,&cuenta3.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta3.saldo,&cuenta8.saldo,&cuenta3.saldo);
    }

    if (x!=usuario1 && x!=usuario2 && x!=usuario4 && x!=usuario5 && x!=usuario6 && x!=usuario7 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}
int identifica4 (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta4.saldo,&cuenta1.saldo,&cuenta4.saldo);
    }

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Garc%ca:\n",164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta4.saldo,&cuenta2.saldo,&cuenta4.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora Angela Suazo: :\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta4.saldo,&cuenta3.saldo,&cuenta4.saldo);
    }

    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez:\n",164,160);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta4.saldo,&cuenta5.saldo,&cuenta4.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor  Iv%n Tactuk:\n",164,160);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta4.saldo,&cuenta6.saldo,&cuenta4.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor  Rafael Suazo:\n",164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta4.saldo,&cuenta7.saldo,&cuenta4.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta4.saldo,&cuenta8.saldo,&cuenta4.saldo);
    }

    if (x!=usuario1 && x!=usuario2 && x!=usuario3 && x!=usuario5 && x!=usuario6 && x!=usuario7 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

int identifica5 (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta5.saldo,&cuenta1.saldo,&cuenta5.saldo);
    }

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Garc%ca:\n",16164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta5.saldo,&cuenta2.saldo,&cuenta5.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora Angela Suazo:\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta5.saldo,&cuenta3.saldo,&cuenta5.saldo);
    }

    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora Luisa Velazquez:\n",164);
        transfer(cuenta4.tarjeta,cuenta4.saldo,cuenta5.saldo,&cuenta4.saldo,&cuenta5.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor Iv%cn Tactuk:\n",164,160);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta5.saldo,&cuenta6.saldo,&cuenta5.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Suazo:\n",164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta5.saldo,&cuenta7.saldo,&cuenta5.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta5.saldo,&cuenta8.saldo,&cuenta5.saldo);
    }

    if (x!=usuario1 && x!=usuario2 && x!=usuario3 && x!=usuario4 && x!=usuario6 && x!=usuario7 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

int  identifica6   (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta6.saldo,&cuenta1.saldo,&cuenta6.saldo);
    }

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Gar%a:\n",164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta6.saldo,&cuenta2.saldo,&cuenta6.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora  Angela Suazo:\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta6.saldo,&cuenta3.saldo,&cuenta6.saldo);
    }

    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora Luisa Velazquez:\n",164);
        transfer(cuenta4.tarjeta,cuenta4.saldo,cuenta6.saldo,&cuenta4.saldo,&cuenta6.saldo);
    }

    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez:\n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta6.saldo,&cuenta5.saldo,&cuenta6.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Suazo:\n",16164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta6.saldo,&cuenta7.saldo,&cuenta6.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta6.saldo,&cuenta8.saldo,&cuenta6.saldo);
    }

    if (x!=usuario1 && x!=usuario2 && x!=usuario3 && x!=usuario4 && x!=usuario5 && x!=usuario7 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

int  identifica7   (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta7.saldo,&cuenta1.saldo,&cuenta7.saldo);
    }

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Garc%ca:\n",164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta7.saldo,&cuenta2.saldo,&cuenta7.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora  Angela Suazo:\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta7.saldo,&cuenta3.saldo,&cuenta7.saldo);
    }

    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora  Luisa Velazquez:\n",164);
        transfer(cuenta4.tarjeta,cuenta4.saldo,cuenta7.saldo,&cuenta4.saldo,&cuenta7.saldo);
    }

    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez:\n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta7.saldo,&cuenta5.saldo,&cuenta7.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor Iv%cn Tactuk:\n",164,160);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta7.saldo,&cuenta6.saldo,&cuenta7.saldo);
    }

    if (x==usuario8)
    {
        system("CLS");
        printf("Transferencia a la se%cora  Alyda Santos:\n",164);
        transfer(cuenta8.tarjeta,cuenta8.saldo,cuenta7.saldo,&cuenta8.saldo,&cuenta7.saldo);
    }

    if (x!=usuario1 && x!=usuario2 && x!=usuario3 && x!=usuario4 && x!=usuario5 && x!=usuario6 && x!=usuario8)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

int  identifica8   (int x)
{
    int usuario1=405123963;
    int usuario2=206985621;
    int usuario3=306951357;
    int usuario4=709354961;
    int usuario5=103396012;
    int usuario6=753669224;
    int usuario7=325556330;
    int usuario8=69400394;

    if (x==usuario1)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Dipl%n:\n",164,160);
        transfer(cuenta1.tarjeta,cuenta1.saldo,cuenta8.saldo,&cuenta1.saldo,&cuenta8.saldo);
    }

    if (x==usuario2)
    {
        system("CLS");
        printf("Transferencia al se%cor Francisco Garc%ca:\n",164,161);
        transfer(cuenta2.tarjeta,cuenta2.saldo,cuenta8.saldo,&cuenta2.saldo,&cuenta8.saldo);
    }

    if (x==usuario3)
    {
        system("CLS");
        printf("Transferencia a la se%cora  Angela Suazo:\n",164);
        transfer(cuenta3.tarjeta,cuenta3.saldo,cuenta8.saldo,&cuenta3.saldo,&cuenta8.saldo);
    }

    if (x==usuario4)
    {
        system("CLS");
        printf("Transferencia a la se%cora Luisa Velazquez:\n",164);
        transfer(cuenta4.tarjeta,cuenta4.saldo,cuenta8.saldo,&cuenta4.saldo,&cuenta8.saldo);
    }

    if (x==usuario5)
    {
        system("CLS");
        printf("Transferencia al se%cor Domingo Lopez:\n",164);
        transfer(cuenta5.tarjeta,cuenta5.saldo,cuenta8.saldo,&cuenta5.saldo,&cuenta8.saldo);
    }

    if (x==usuario6)
    {
        system("CLS");
        printf("Transferencia al se%cor Iv%cn Tactuk:\n",164,160);
        transfer(cuenta6.tarjeta,cuenta6.saldo,cuenta8.saldo,&cuenta6.saldo,&cuenta8.saldo);
    }

    if (x==usuario7)
    {
        system("CLS");
        printf("Transferencia al se%cor Rafael Suazo:\n",164);
        transfer(cuenta7.tarjeta,cuenta7.saldo,cuenta8.saldo,&cuenta7.saldo,&cuenta8.saldo);
    }

    if (x!=usuario1 && x!=usuario2 && x!=usuario3 && x!=usuario4 && x!=usuario5 && x!=usuario6 && x!=usuario7)
    {
        system("CLS");
        printf("CUENTA NO EXISTENTE");
        getch();
        system("CLS");
        return(main());
    }
}

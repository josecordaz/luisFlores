//#include <curses.h>
//#include <ncurses.h>
#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
	/*Declaracion de constantes*/
	float costa=3.52, costb=4.71, costc=6.29, costd=7.34, coste=7.51, costf=8.91, costg=10.49, costh=11.54, costi=12.86, costj=13.11, costk=15.21, costl=17.14, costm=17.31, costn=20.46, costo=20.57, costp=22.67, costq=26.24, costr=28.34, costs=32.81, costt=35.27, costu=75.10, costv=125.50, costw=43.14, costx=5.99, costy=7.15, costz=8.40, costaa=9.99, costab=10.99, costac=12.25, costad=2.87, costae=4.31, costaf=5.38, costag=1.00, costah=14.50, costai=18.50, costaj=19.59;
	float pesa=0.25, pesb=0.30, pesc=0.50, pesd=0.50, pese=0.50, pesf=0.50, pesg=0.75, pesh=0.75, pesi=0.75, pesj=0.75, pesk=0.90, pesl=0.90, pesm=0.90, pesn=0.90, peso=0.90, pesp=0.90, pesq=0.90, pesr=0.90, pess=1.0, pest=1.0, pesu=1.90, pesv=2.0, pesw=1.25, pesx=0.50, pesy=0.50, pesz=0.50, pesaa=0.75, pesab=0.75, pesac=0.75, pesad=0.25, pesae=0.30, pesaf=0.50, pesag=0.10, pesah=0.75, pesai=0.90, pesaj=0.90;
	float preciomin=13.30, precioxkiloadd=2.5;
	int min=1;
	
	/*delcaracion de variables*/
	
	float costop, peson, costototal, ganancia, costopeso;
	int c, n;
	char cod;

	// Set terminal to raw mode 
  	//system("stty raw"); 

	/*Mensaje de bienvenida*/
	printf("\n\n\t Buen dia, calcularemos el costo del pedido\n\n\t");
	/*peticion de la cantidad de vinilos a pedir*/
	
	printf("\n\n\t Ingresa la cantidad de vinilos decorativos a pedir\n\n\t");
	scanf("%d", &n);
	 
	/*inicio del la estructura repetitiva for*/
	for (costop=0, peson=0, c=1; c<=n; c++){
		printf("\n\n\t Ingresa el codigo de del vinilo numero %d \n\n\t", c);
		
		getchar();
		cod = getchar();
		 
		/*Inicio de la estructura condicional*/
		if (cod == 'a'){
			printf("\n\n\t Entro en A \n\n\t");
			costop=costop+costa;
			peson=peson+pesa;
		} else if (cod == 'b') {
			printf("\n\n\t Entro en B \n\n\t");
			costop=costop+costb;
			peson=peson+pesb;
		} else if (cod =='c'){
			costop=costop+costc;
			peson=peson+pesc;
		} else if (cod == 'd'){
			costop=costop+costd;
			peson=peson+pesd;
		} else if (cod =='e'){
			costop=costop+coste;
			peson=peson+pese;
		} else if (cod =='f'){
			costop=costop+costf;
			peson=peson+pesf;
		} else if (cod =='g'){
			costop=costop+costg;
			peson=peson+pesg;
		} else if (cod =='h'){
			costop=costop+costh;
			peson=peson+pesh;
		} else if (cod =='i'){
			costop=costop+costi;
			peson=peson+pesi;
		} else if (cod =='j'){
			costop=costop+costj;
			peson=peson+pesj;
		} else if (cod =='k'){
			costop=costop+costk;
			peson=peson+pesk;
		} else if (cod =='l'){
			costop=costop+costl;
			peson=peson+pesl;
		} else if (cod =='m'){
			costop=costop+costm;
			peson=peson+pesm;
		} else if (cod =='n'){
			costop=costop+costn;
			peson=peson+pesn;
		} else if (cod =='o'){
			costop=costop+costo;
			peson=peson+peso;
		} else if (cod =='p'){
			costop=costop+costp;
			peson=peson+pesp;
		} else if (cod =='q'){
			costop=costop+costq;
			peson=peson+pesq;
		} else if (cod =='r'){
			costop=costop+costr;
			peson=peson+pesr;
		} else if (cod =='s'){
			costop=costop+costs;
			peson=peson+pess;
		} else if (cod =='t'){
			costop=costop+costt;
			peson=peson+pest;
		} else if (cod =='u'){
			costop=costop+costu;
			peson=peson+pesu;
		} else if (cod =='v'){
			costop=costop+costv;
			peson=peson+pesv;
		} else if (cod =='w'){
			costop=costop+costw;
			peson=peson+pesw;
		} else if (cod =='x'){
			costop=costop+costx;
			peson=peson+pesx;
		} else if (cod =='y'){
			costop=costop+costy;
			peson=peson+pesy;
		} else if (cod =='z'){
			costop=costop+costz;
			peson=peson+pesz;
		} else if (cod =='1'){
			costop=costop+costaa;
			peson=peson+pesaa;
		} else if (cod =='2'){
			costop=costop+costab;
			peson=peson+pesab;
		} else if (cod =='3'){
			costop=costop+costac;
			peson=peson+pesac;
		} else if (cod =='4'){
			costop=costop+costad;
			peson=peson+pesad;
		} else if (cod =='5'){
			costop=costop+costae;
			peson=peson+pesae;
		} else if (cod =='6'){
			costop=costop+costaf;
			peson=peson+pesaf;
		} else if (cod =='7'){
			costop=costop+costag;
			peson=peson+pesag;
		} else if (cod =='8'){
			costop=costop+costah;
			peson=peson+pesah;
		} else if (cod =='9'){
			costop=costop+costai;
			peson=peson+pesai;
		} else if (cod =='0'){
			costop=costop+costaj;
			peson=peson+pesaj;
		}
	}
	
	/*operaciones para determinar los costos*/
	if (peson>=min)
	costopeso= preciomin+((peson-min)*precioxkiloadd);
	else 
	costopeso=preciomin;
	
	costototal=costop+costopeso;
	ganancia=costototal*0.50;
	
	/*muestra de resultados*/	
	printf("\n\n\t El costo por envio es de $%.2f \n\n", costopeso);
	printf("\n\n\t El costo total del pedido es de $%.2f \n\n", costototal);
	printf("\n\n\t Las ganancias del pedido pueden ser de $%.2f \n\n", ganancia);
	
	/*Fin del programa*/	
}
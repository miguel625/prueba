Proceso sin_titulo
	Definir g,k,x,F,t,a,acum,max,min,i Como Real;
	max<-20;
	x<-0;
	min<--50;
	acum<-0;
	Escribir 'Este programa calculara la media de los datos que coloques ademas de comvertir tus grados';
	Repetir
		Escribir 'cuantas medidas desea agregar';
		Leer g;
		Si g>=1 Entonces
			Repetir
				acum<-acum+1;
				Escribir 'mencione el grado numero ',acum;
				Leer k;
				Si k>=-50 Entonces
					Si k<=20 Entonces
						F<-(k-32)/1.8+273.15;
						Escribir 'Tus ',k,' grados son ',F,' en kelvin';
						x<-x+k;
						Si min<k Entonces
							min<-k;
							Escribir 'el maximo es ',min;
						FinSi
						Si max>k Entonces
							max<-k;
							Escribir 'el minimo es ',max;
						FinSi
					Sino
						Escribir 'este numero no esta en mi rango, repitalo porfavor';
						acum<-acum-1;
					FinSi
				Sino
					Escribir 'este numero no esta en mi rango, repitalo porfavor';
					acum<-acum-1;
				FinSi
			Hasta Que acum>=g
		Sino
			Escribir 'solo numeros mayores a 0, repitalo porfavor';
		FinSi
	Hasta Que g>=1
	x<-x-min-max;
	g<-g-2;
	t<-x/g;
	Escribir 'Tu media es ',t;
	Escribir '------GRACIAS POR USAR NUESTRO PROGRAMA , HASTA LUEGO-------';
FinProceso


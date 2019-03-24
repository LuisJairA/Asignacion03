# Asignacion03
Algoritmo ejercicio02
	Leer T
	//Calculo de entrada
	tiempoHora<-(T/3600)
	tiempoMinuto<-(T%3600)/60
	tiempoSegundo<-(T%3600)%60
	//Mostrar resultado
	Escribir(tiempoMinuto)
	escribir(tiempoMinuto)
	escribir(tiempoSegundo)
FinAlgoritmo

Algoritmo ejercicios03
	Leer H
	Leer M
	Leer S
	//Calculo de entrada
	Si S<59 Entonces
		segundoFinal<-S+1
	SiNo
		segundoFinal<-00
	Fin Si
	Si M<59 Entonces
		minutoFinal<-M+1
	SiNo
		minutoFinal<-00
	Fin Si
	Si H<23 Entonces
		horaFinal<-H+1
	SiNo
		horaFinal<-00
	Fin Si
	//Mostrar resultado
	escribir(horaFinal)
	escribir(minutoFinal)
	escribir(minutoFinal)
FinAlgoritmo

Algoritmo ejercicio07
	Leer A
	Leer B
	Leer C
	//Calculo de entrada
	Si A>B Y A>C Y B>C Entonces
		finalA1<-"A es el mayor y C es el menor"
	Fin Si
	Si A>B Y A>C Y C>B Entonces
		finalA2<-"A es el mayor y B es el menor"
	Fin Si
	Si B>C Y B>A y A>C Entonces
		finalB2<-"B es mayor y C es el menor"
	Fin Si
	Si B>C Y B>A y C>A Entonces
		finalB1<-"B es mayor y A es el menor"
	Fin Si
	Si C>A Y C>B y B>A Entonces
		finalC2<-"C es mayor y A es el menor"
	Fin Si
	Si C>A Y C>B Y A>B Entonces
		finalC1<-"C es mayor y B es el menor"
	Fin Si
	//mostrar resultado
	Escribir(finalA1)
	Escribir(finalA2)
	Escribir(finalB2)
	Escribir(finalB1)
	Escribir(finalC1)
	Escribir(finalC2)
FinAlgoritmo

Algoritmo ejercicio08
	Leer A
	Leer B
	Leer C
	//Calculo de entrada
	Si A>B Y A>C Y B>C Entonces
		finalA1<-"A es el mayor,B es el medio y C es el menor"
	Fin Si
	Si A>B Y A>C Y C>B Entonces
		finalA2<-"A es el mayor,c es el medio y B es el menor"
	Fin Si
	Si B>C Y B>A y A>C Entonces
		finalB2<-"B es mayor, A es el medio y C es el menor"
	Fin Si
	Si B>C Y B>A y C>A Entonces
		finalB1<-"B es mayor, C es el medio y A es el menor"
	Fin Si
	Si C>A Y C>B y B>A Entonces
		finalC2<-"C es mayor,B es el medio y A es el menor"
	Fin Si
	Si C>A Y C>B Y A>B Entonces
		finalC1<-"C es mayor, A es el medio y B es el menor"
	Fin Si
	//mostrar resultado
	Escribir(finalA1)
	Escribir(finalA2)
	Escribir(finalB2)
	Escribir(finalB1)
	Escribir(finalC1)
	Escribir(finalC2)
FinAlgoritmo

Algoritmo ejercicio09
	Leer N
	//Calculo de entrada
	Si N<=20 y N>=19 Entonces
		finalN1<-"La nota del alumno es A"
	Fin Si
	Si N<=18 Y N>=16 Entonces
		finalA2<-"La nota del alumno es B"
	Fin Si
	Si N<=15 Y N>=13 Entonces
		finalN3<-"La nota del alumno es C"
	Fin Si
	Si N<=12 Y N>=10 Entonces
		finalN4<-"La nota del alumno es D"
	Fin Si
	Si N<=9 Y N>=1 Entonces
		finalN5<-"La nota del alumno es E"
	Fin Si
	//mostrar resultado
	Escribir(finalN1)
	Escribir(finalN2)
	Escribir(finalN3)
	Escribir(finalN4)
	Escribir(finalN5)
FinAlgoritmo

Algoritmo ejercicio11
	Escribir "Las entradas cuestan 30 o 20 o 10"
	Escribir "El limite de entradas es de 4 personas"
	Escribir "Ingrese el monto:"
	Leer M
	Escribir "El numero de entras es de:"
	Leer N
	//Calculo de entrada
	Si N=2 Entonces
		monto1<-(M*N)-(M*N)*0.1
		Escribir (monto1)  " Es el monto que de pagar"
	Fin Si
	Si N=3 Entonces
		monto2<-(M*N)-(M*N)*0.15
		Escribir (monto2)  " Es el monto que de pagar"
	Fin Si
	Si N=4 Entonces
		monto3<-(M*N)-(M*N)*0.2
		Escribir (monto3)  " Es el monto que de pagar"
	Fin Si
	Si N<2 O N>4 Entonces
		monto4<-"Error"
		Escribir (monto4)
	Fin Si
FinAlgoritmo

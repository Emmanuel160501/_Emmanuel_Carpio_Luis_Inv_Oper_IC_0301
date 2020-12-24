#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){
	/**@brief declaramos los valores para guardar los datos
	@param todos los valores son declarados de tipo flotante 
	@param exepto un que sera donde se guardara uno de tipo cadena
	@param este char cadena nos pedira letras */
    float landa;
	float MIU=0;
	float L;
	float lq;
	float w;
	float wq;
	float po;
	float p;
	char unidad;
	/**
	@brief declaramos un printf donde pedimos los datos de la hora
	@param con un scanf obtenemos el numero y lo guardamos en landa 
	@return un fflush para limpiar nuestro teclado 
	*/
	
	printf("dame las horas    ");
		scanf("%f", &landa);	fflush(stdin);
			/**
	@brief declaramos un printf donde pedimos los datos de los clientes 
	@param con un scanf obtenemos el numero y lo guardamos en MIU
	@return un fflush para limpiar nuestro teclado 
	*/
	
	printf("dame los clientes     ");
		scanf("%f", &MIU);	fflush(stdin);
			/**
	@brief declaramos un printf donde pedimos en que unidad e medida quiere que se calculen los resultados 
	@param con un scanf obtenemos el numero y lo guardamos en unidad ya que es de tipo cadena
	@return un fflush para limpiar nuestro teclado 
	*/
	
			printf("dame la unidad de medida(dias, horas,minutos)  ");
		scanf("%c", &unidad);	fflush(stdin);
		/**
		@brief aqui vamos a declarar las operaciones
		@param el primer operacion es una divicion para determinar los clientes que son atendido 
		@param declaramos un pow que devuelve, sobre el propio identificador de la función, el resultado que se obtiene de elevar el <operando_número_base> al <operando_exponente>.
		@return nos devuelve un valor de tipo flotante 
		@param la siguiente operacion es para ver los clientes que estan en espera del sistema 
		@param po lo declaramos para que nos muestre  si el sistema esta desocupado o no 
		@param la ultima funcion p la declaramos para poder decidir si el sistema esta ocupado 
		*/
		
					
			L=landa/(MIU-landa);
			lq=pow(landa,2)/(MIU*(MIU-landa));
			w=1/(MIU-landa);
			wq=landa/(MIU*(MIU-landa));
			po=1-(landa/MIU);
			p=landa/MIU;
			/**
			@brief aqui se mostraran los resultados de las operaciones 
			@param cada una con valor flotante  que mandara a llamar donde estan guardados
			@param imprimira los resultados de cada operacion
			@return que nos regresara el valor flotante
			
			*/
			
			printf("clientes siendo antendidos= %f\n",L);
			printf("clientes en la cola= %f\n",lq);
			printf("de espera en el sistema %f\n",w,unidad);
			printf("de espera en la cola %f\n",wq,unidad);
			printf("desocupado el sistema %f\n",po);
			printf("ocupado el sistema %f\n",p);
		
	}

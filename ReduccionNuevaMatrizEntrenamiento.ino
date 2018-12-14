#include"Nuevos_datos.h"

int i=0;
int j=0;
int n=0;
int on=0;
int suma1=0, suma2, suma3,  suma4;
int cont=0;
int prom1,prom2,prom3,prom4;
int distancia;
int norm[308];
int mayor=0;
int v1[308];
int si[308];
int criterio1 = 700;
int a=0;
int cont3=0;
int b=0;
int vectorR2[308][5];


void setup() {
  Serial.begin(9600);
  if(on==0){
   Serial.println("********MATRIZ DE ENTRENAMIENTO REDUCIDA********");
   Serial.println(" ");
      /*
       * Promedio de las filas, con el fin de obtener el centro de cada uno de los 3 grupos
       */
  for(;i<308;i++){
      suma1+=matriz[i][0];
      cont++;
     } 
    prom1=suma1/cont;
    cont=0;
    i=0;
        //Serial.println(prom1);
   for(;i<308;i++){
      suma2+=matriz[i][1];
      cont++;
     }
    prom2=suma2/cont;
    cont=0;
    i=0;
        //Serial.println(prom2);
  for(;i<308;i++){
      suma3+=matriz[i][2];
      cont++;
     }
    prom3=suma3/cont;
    cont=0; 
    i=0;
        //Serial.println(prom3);
    for(;i<308;i++){
      suma4+=matriz[i][3];
      cont++;
     }
    prom4=suma4/cont;
    i=0;
       //Serial.println(prom4);
    /*
     * Distancia entre un punto y el centro del conjunto(o los promedios)
     */
    for(int n;n<=cont-1;n++){
      distancia=sqrt(pow((matriz[n][0]-prom1),2)+
               pow((matriz[n][1]-prom2),2)+
               pow((matriz[n][2]-prom3),2)+
               pow((matriz[n][3]-prom4),2));
       v1[n]=distancia; 
           //Serial.println(v1[n]);
           //delay(100);
      }
      /*
       * Se omite la normalizacion debido a que el arduino MEGA no cuenta con la suficiente memoria
       */

    for(j=0;j<cont;j++){
          if(v1[j]<criterio1){   
           si[j]=1;
          cont3++;}}
          Serial.print("Filas en la nueva matriz: ");
         Serial.println(cont3);
         Serial.println(" ");
         
         if(si[j]=1){
        for(int y=0;y<cont3;y++){ //comparacion con criterios para posterior eliminacion  
            vectorR2[y][0]=y;
    for(int a =0;a<5;a++){
      vectorR2[y][a]=matriz[y][a]; //se guarda en la matriz vectorR2 las filas que estan entre el rango de criterios
     Serial.print(vectorR2[y][a]);
     Serial.print(" ");
              }
       Serial.println(" ");
       delay(100);
        }
        }
        
         on=1;}
}

void loop() {    
 
}

 

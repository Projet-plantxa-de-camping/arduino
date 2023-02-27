#include <WEMOS_Matrix_LED.h>
#include "Matrix.h"


CMatrice matrice;						//Objet matrice


void setup() {
  Serial.begin(115200);						//Débit de communicatio, 115200 bauds
  /*for(int i=0; i<8; i++)					
  {
    matrice.disBuffer[i]=0xff;  			//full screen
  }*/
  }
  

void loop() 
{
  for(int i=0;i<4;i++){
    matrice.display();
    delay(1000);
  }
  
 for(int i=0; i<100; i++)
  {
     matrice.Affiche(i);
     delay(1000);
  }
 
}

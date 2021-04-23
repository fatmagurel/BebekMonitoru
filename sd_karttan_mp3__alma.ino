#include <SD.h>
#include <SimpleSDAudio.h>
   
void setup()
{ 
   
 SdPlay.setSDCSPin(4); // sd kart cs pini
   
 if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))
 {
 while(1); 
 } 
   
 if(!SdPlay.setFile("Ninni.wav")) // müzik dosya adı
 {
 while(1); //dosya bulunamassa durdur
 } 
}
   
void loop(void) {
   
 SdPlay.play(); // seçilen dosyayı çal
   
 while(!SdPlay.isStopped()) { // müzik bittiğinde tekrar çal
 ; 
 }
}

const int ledPin[] = {A0, A1, A2, A3, A4, A5};
const int trigPin[] = {2, 4, 6, 8, 10, 12};
const int echoPin[] = {3, 5, 7, 9, 11, 13};


// Değişkenler
int i;
int sayi = 0;
long duration;
int distance;
int thresholdDistance = 10; // Tepki vereceğiniz mesafe (cm)

void setup() 
{
  for (i = 0; i < 6; i++) 
    {
      pinMode(trigPin[i], OUTPUT);
      pinMode(echoPin[i], INPUT);
      pinMode(ledPin[i], OUTPUT);
    }
    
  // Seri haberleşmeyi başlatma
  Serial.begin(9600);
}

void loop() 
{
  sayi = random(0,5);
  delay(100);

  switch (sayi)
  {
    case 0:
    {
      do 
       {
          digitalWrite(ledPin[0], HIGH); // 1. sensörün aktif olduğunu gösterir.
             // TRIG pinini temizleme
          digitalWrite(trigPin[0], LOW);
          delayMicroseconds(2);

            // TRIG pinine 10us HIGH sinyal gönderme
          digitalWrite(trigPin[0], HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin[0], LOW);

            // ECHO pininden yansıyan sinyali okuma
          duration = pulseIn(echoPin[0], HIGH);

            // Mesafeyi hesaplama
          distance = duration * 0.034 / 2;

            // Mesafeyi seri monitöre yazdırma
          Serial.print("1. sensor mesafesi: ");
          Serial.print(distance);
          Serial.println(" cm");


            // Kısa bir gecikme
          delay(100);
       } 
          while (distance >= thresholdDistance);
          digitalWrite(ledPin[0], LOW);
          break;
    }

    case 1:
    {
      do 
       {
          digitalWrite(ledPin[1], HIGH); // 2. sensörün aktif olduğunu gösterir.
            // TRIG pinini temizleme
          digitalWrite(trigPin[1], LOW);
          delayMicroseconds(2);

            // TRIG pinine 10us HIGH sinyal gönderme
          digitalWrite(trigPin[1], HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin[1], LOW);

            // ECHO pininden yansıyan sinyali okuma
          duration = pulseIn(echoPin[1], HIGH);

            // Mesafeyi hesaplama
          distance = duration * 0.034 / 2;

            // Mesafeyi seri monitöre yazdırma
          Serial.print("2. sensor mesafesi: ");
          Serial.print(distance);
          Serial.println(" cm");


            // Kısa bir gecikme
          delay(100);
       } 
          while (distance >= thresholdDistance);
          digitalWrite(ledPin[1], LOW);
          break;
    }

    case 2:
    {
      do 
       {
          digitalWrite(ledPin[2], HIGH); // 3. sensörün aktif olduğunu gösterir.
            // TRIG pinini temizleme
          digitalWrite(trigPin[2], LOW);
          delayMicroseconds(2);

            // TRIG pinine 10us HIGH sinyal gönderme
          digitalWrite(trigPin[2], HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin[2], LOW);

            // ECHO pininden yansıyan sinyali okuma
          duration = pulseIn(echoPin[2], HIGH);

            // Mesafeyi hesaplama
          distance = duration * 0.034 / 2;

            // Mesafeyi seri monitöre yazdırma
          Serial.print("3. sensor mesafesi: ");
          Serial.print(distance);
          Serial.println(" cm");


            // Kısa bir gecikme
          delay(100);
       } 
          while (distance >= thresholdDistance);
          digitalWrite(ledPin[2], LOW);
          break;
    }
  
    case 3:
    {
      do 
       {
          digitalWrite(ledPin[3], HIGH); // 4. sensörün aktif olduğunu gösterir.
            // TRIG pinini temizleme
          digitalWrite(trigPin[3], LOW);
          delayMicroseconds(2);

              // TRIG pinine 10us HIGH sinyal gönderme
          digitalWrite(trigPin[3], HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin[3], LOW);

            // ECHO pininden yansıyan sinyali okuma
          duration = pulseIn(echoPin[3], HIGH);

              // Mesafeyi hesaplama
          distance = duration * 0.034 / 2;

              // Mesafeyi seri monitöre yazdırma
          Serial.print("4. sensor mesafesi: ");
          Serial.print(distance);
          Serial.println(" cm");


             // Kısa bir gecikme
          delay(100);
       } 
          while (distance >= thresholdDistance);
          digitalWrite(ledPin[3], LOW);
          break;
    }


    case 4:
    {
      do 
       {
          digitalWrite(ledPin[4], HIGH); // 5. sensörün aktif olduğunu gösterir.
             // TRIG pinini temizleme
          digitalWrite(trigPin[4], LOW);
          delayMicroseconds(2);

             // TRIG pinine 10us HIGH sinyal gönderme
          digitalWrite(trigPin[4], HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin[4], LOW);

              // ECHO pininden yansıyan sinyali okuma
          duration = pulseIn(echoPin[4], HIGH);

              // Mesafeyi hesaplama
          distance = duration * 0.034 / 2;

                // Mesafeyi seri monitöre yazdırma
          Serial.print("5. sensor mesafesi: ");
          Serial.print(distance);
          Serial.println(" cm");


            // Kısa bir gecikme
          delay(100);
       } 
          while (distance >= thresholdDistance);
          digitalWrite(ledPin[4], LOW);
          break;
    }


    case 5:
    {
      do 
       {
          digitalWrite(ledPin[5], HIGH); // 6. sensörün aktif olduğunu gösterir.
             // TRIG pinini temizleme
          digitalWrite(trigPin[5], LOW);
          delayMicroseconds(2);

              // TRIG pinine 10us HIGH sinyal gönderme
          digitalWrite(trigPin[5], HIGH);
          delayMicroseconds(10);
          digitalWrite(trigPin[5], LOW);

               // ECHO pininden yansıyan sinyali okuma
          duration = pulseIn(echoPin[5], HIGH);

              // Mesafeyi hesaplama
          distance = duration * 0.034 / 2;

             // Mesafeyi seri monitöre yazdırma
          Serial.print("6. sensor mesafesi: ");
          Serial.print(distance);
          Serial.println(" cm");


            // Kısa bir gecikme
          delay(100);
       } 
          while (distance >= thresholdDistance);
          digitalWrite(ledPin[5], LOW);
          break;
    }
  
  }

}

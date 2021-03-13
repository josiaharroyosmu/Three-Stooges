int ThermistorPin = A0;
int Vo;
float R1= 1000;
float logR2, R2, T;
float A= 1.484778004e-03, B = 2.348962910e-04, C= 1.006037158e-07;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
 Vo = analogRead(ThermistorPin);
 R2 = R1*(1023.0/ (float)Vo - 1.0);
 logR2 = log(R2);
 T = (1.0/(A + B*logR2 + C*logR2*logR2*logR2));
 T = T- 273.15;

 Serial.print("Temperature:");
 Serial.print(T);

 delay(1000);
  // put your main code here, to run repeatedly:

}

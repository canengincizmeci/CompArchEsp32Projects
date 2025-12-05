
void setup() {
  Serial.begin(115200); 
  delay(1000);
  int result = 0; 
 
  asm volatile(
    "movi a2, 2\n" 
    "movi a3, 3\n" 
    "add a4, a2, a3\n" 
    "mov %0, a4\n" 
    : "=r" (result) 
    : 
    : "a2", "a3", "a4" 
  );
  Serial.print("2 + 3 = ");
  Serial.println(result); 
}

void loop() {       
}

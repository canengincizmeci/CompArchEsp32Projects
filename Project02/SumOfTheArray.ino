void setup() {
  Serial.begin(115200);
  delay(500);

  int arr[5] = {12, 5, 8, 20, 3};
  int sum = 0;
  int length = 5;

  asm volatile(
    "movi a2, 0\n"              
    "mov a3, %1\n"              
    "mov a4, %2\n"              

    "loop_start:\n"
    "beqz a4, loop_end\n"       

    "l32i a5, a3, 0\n"          
    "add a2, a2, a5\n"          

    "addi a3, a3, 4\n"          
    "addi a4, a4, -1\n"         

    "j loop_start\n"            

    "loop_end:\n"
    "mov %0, a2\n"             
    : "=r"(sum)
    : "r"(arr), "r"(length)
     : "a2", "a3", "a4", "a5"
  );

  Serial.print("Sum of the array: ");
  Serial.println(sum);
}

void loop() {
}

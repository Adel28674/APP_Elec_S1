int i = 0;

void setup() {
	//Initialize serial and wait for port to open:
	Serial.begin(9600);
	Serial.println(“Bonjour”);
}
void loop()
{
	Serial.println (“i = “);Serial.println(i++);
}

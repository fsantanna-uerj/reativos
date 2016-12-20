Botão
=====

![Screenshot](imagens/botao.png)

```
void setup() {                
  pinMode(13, OUTPUT);     
  pinMode( 2, INPUT);     
}

void loop() {
  int v = digitalRead(2);
  digitalWrite(13, v);
}
```

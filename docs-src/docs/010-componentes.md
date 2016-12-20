Botão de Pressão
================

![Screenshot](imagens/botao-01.png)

https://circuits.io/circuits/3568686-exercicio-1/

![Screenshot](imagens/botao-02.png)

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

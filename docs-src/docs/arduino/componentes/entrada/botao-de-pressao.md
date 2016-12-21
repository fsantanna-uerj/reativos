##### Botão de Pressão

<img src="../imagens/botao-01.jpg" align="right" width="200">

Um botão de pressão é similar a um interruptor de parede e é usado para fechar
ou abrir um circuito eléctrico.
Tipicamente, um  botão de pressão inclui um mecanismo que o retorna ao estado
de repouso quando a força de atuação não é mais aplicada.
Em seu estado de repouso, um botão pode ter os seus contatos abertos (i.e.,
*NO: normally open*) ou fechados (i.e., *NC: normally closed*).

No Arduino, um dos lados do botão de pressão deve ser conectado ao `5V` e o
outro ao `GND`.
Além disso, um dos lados deve ser contectado a um pino digital de `INPUT`,
fornecendo o estado do botão ao Arduino.

Caso o circuito do botão tenha sido montado como *NO*, a leitura do pino será
`LOW` no estado de repouso e `HIGH` no estado pressionado.
Caso o circuito do botão tenha sido montado como *NC*, a leitura do pino será
`HIGH` no estado de repouso e `LOW` no estado pressionado.

###### Exemplo

No exemplo a seguir, o botão é montado como *NO*, uma vez que a porta de
leitura é ligada .


No circuito a seguir, o botão está ligado como *NO*, uma vez que a leitura
<img src="../imagens/botao-02.png" width="400">

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

###### Links

- Wikipedia:   <https://pt.wikipedia.org/wiki/Bot%C3%A3o_de_press%C3%A3o>
- Arduino.cc:  <https://www.arduino.cc/en/Tutorial/Button>
- Circuits.io: <https://circuits.io/circuits/3568686-exercicio-1/>
- [LED](../saida/led.md)

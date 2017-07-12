### Botão de Pressão

<img src="../imagens/botao-01.jpg" align="right" width="200">

O botão de pressão é similar a um interruptor de parede e é usado para fechar
ou abrir um circuito eléctrico.
Tipicamente, o botão de pressão inclui um mecanismo que o retorna ao estado
de repouso quando a força de atuação não é mais aplicada.
Em seu estado de repouso, o botão pode ter os seus contatos abertos (i.e.,
*NO: normally open*) ou fechados (i.e., *NC: normally closed*).

No Arduino, um dos lados do botão de pressão deve ser conectado ao `5V` (fonte)
e o outro ao `GND` (terra).
Além disso, um dos lados deve ser contectado a um pino digital de `INPUT`,
fornecendo o estado do botão ao Arduino.
Os lados devem ser separados por um resistor para controlar a corrente.

Caso o circuito do botão tenha sido montado como *NO*, a leitura do pino será
`LOW` no estado de repouso e `HIGH` no estado pressionado.
Caso o circuito do botão tenha sido montado como *NC*, a leitura do pino será
`HIGH` no estado de repouso e `LOW` no estado pressionado.

#### Exemplo

O exemplo a seguir faz com que o LED embutido na placa do Arduino acompanhe o
estado do botão, ou seja, fique ligado caso o botão esteja pressionado e
desligado caso contrário.

O circuito usa um botão *NO* ligado ao pino `2`:

<img src="../imagens/botao-02.png" width="400">

O código configura o pino `13` (ligado ao LED da placa) como `OUTPUT` e o pino
`2` (ligado ao botão) como `INPUT`.
Em seguida, o `loop` do Arduino lê o estado do botão continuamente e o repassa
ao LED:

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

#### Links

- Wikipedia:   <https://pt.wikipedia.org/wiki/Bot%C3%A3o_de_press%C3%A3o>
- Arduino.cc:  <https://www.arduino.cc/en/Tutorial/Button>
- Circuits.io: <https://circuits.io/circuits/3568686-botao-de-pressao>
- [LED](../saida/led.md)

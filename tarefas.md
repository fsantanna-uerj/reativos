<title>Disciplina de Sistemas Reativos - Tarefas</title>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>

Tarefas
=======

Tarefa 4 (05/09):
-----------------

* Fazer um jogo qualquer com menos de 250 loc
    * Teclado e/ou Mouse
    * Imagens e/ou Retângulos
    * Animações (i.e., tempo como input)

Tarefa 3 (29/08):
-----------------

* Implementar uma API de "Programação Orientada a Eventos"
    * Tratador para botões
    * 2 timers

* Reimplementar os exemplos com orientação a eventos:
    * Hello World: Input
    * Tarefa 2

```
/* Funções de registro: */

void button_listen (int pin) {
   <...>                    // “pin” passado deve gerar notificações
}

void timer_set (int ms) {
   <...>                    // timer deve expirar após “ms” milisegundos
}

/* Callbacks */

void button_changed (int pin, int v);  // notifica que “pin” mudou para “v”
void timer_expired (void);             // notifica que o timer expirou

/* Programa principal: */

void setup () {
    <...>                   // inicialização da API
    init();                 // inicialização do usuário
}

void loop () {
    <...>                   // detecta novos eventos
    button_changed(...);    // notifica o usuário
    <...>                   // detecta novos eventos
    timer_expired(...);     // notifica o usuário
}
```

Tarefa 2 (22/08):
-----------------

* Piscar o LED a cada 1 segundo
* Botão 1: Acelerar o pisca-pisca a cada pressionamento
* Botão 2: Desacelerar a cada pressionamento
* Botão 1+2 (em menos de 500ms): Parar

Tarefa 1 (21/08):
-----------------

* Cadastrar-se na lista da turma
    https://groups.google.com/d/forum/reativos

* Criar um projeto no github
    * Criar uma conta no github.com (caso não tenha)
    * Criar um projeto "reativos"
    * Mandar um e-mail para a lista com o link do seu projeto

* Instalar o Arduino IDE
    http://www.arduino.cc/en/Main/Software

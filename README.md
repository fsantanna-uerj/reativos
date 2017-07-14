<title>Sistemas Reativos</title>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/></p>

Sistemas Reativos
=================

<!--
Apresentação
------------
-->

Sistemas reativos interagem continuamente e em tempo real com o ambiente sob os
quais estão inseridos.
Eles representam um campo amplo de aplicações e plataformas: de jogos
eletrônicos em *desktops*, passando por *apps* em celulares, até a emergente
internet das coisas em sistemas embarcados.

Neste curso iremos abordar os sistemas reativos sob diversos aspectos de
software, tais como modelos de concorrência, linguagens de programação,
técnicas de programação, e aplicações em múltiplas plataformas de hardware.

Ementa:
Sistemas Reativos, Modelos de Concorrência Síncrono e Assíncrono, Programação
Orientada a Eventos, Callbacks e o Padrão *Observer*, Máquinas de Estado,
Co-rotinas, Programação Reativa Funcional, Programação Reativa Estruturada,
Jogos, Arduino, Redes de Sensores sem Fio, Projetos.

Projetos Antigos
----------------

### 2016.2

#### Projetos Finais

- Adrianno e Giancarlo
    - Descrição:
    O projeto consiste na criação de um pequeno jogo top down de ação que
    consistirá em um cenário com obstáculos estáticos (alinhados a uma grade)
    e um jogador que poderá se movimentar horizontalmente e verticalmente no
    plano de forma livre usando as teclas do teclado.
    Espalhados pelo cenário estarão vários inimigos que tentarão alcançar o
    jogador, andando lentamente. Para isso, usaremos um algoritmo de
    pathfinding a ser decidido (provavelmente derivado de A*) que iremos
    adaptar para não comprometer a reatividade do jogo.
    O jogador também será capaz de eliminar os inimigos atirando projéteis
    que irão na direção do cursor do mouse, ao clicar na tela.
    - Repositório: [GitHub](https://github.com/gVirtu/reativos/tree/master/code/Projeto-Final)
    - Vídeo: [YouTube](https://youtu.be/lajxHnxROjU)

- Lucas e Rafael
    - Descrição:
    O objetivo do projeto é de fornecer controle para a área do conjunto de
    salas na 6023-F, na UERJ (Universidade do Estado do Rio de Janeiro).
    Tem como objetivo facilitar o acesso de todas as Pessoas as salas 6023-F.
    Enquanto todos que estão presentes no Banco de Dados tem acesso a sala,
    somente o Professor consegue adicionar ou remover Pessoas do Banco de
    Dados, dando a essas permissão de entrada na sala ou removendo-as da lista
    de acesso.
    - Repositório: [GitHub](https://github.com/LucasAmaralPIres/reativos/tree/master/Projeto%20Final)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=Hbsrv0DB-GQ)

- Camila e Renato
    - Descrição:
    O Beach Raid é um jogo baseado em um famoso jogo de Atari dos anos 80, o
    River Raid. O jogo consiste em uma nave com combustível e munição infinitos
    que sobrevoa um deserto e precisa evitar ser atingida por seus inimigos
    (tanque de guerra, torre de guerra e helicóptero), que podem matá-la com
    tiros ou por colisão.  O objetivo do jogo é sobreviver o máximo de tempo
    possível, havendo um record para cada nível de dificuldade (fácil, médio,
    difícil). A nave pode ser controlada via teclado ou pelo controlador
    Arduino. 
    - Repositório: [GitHub](https://github.com/camila-cg/reativos/tree/master/ProjetoFinal)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=n7ZNI_0yXJI)

- Matheus e Rodrigo
    - Descrição:
    Fazer um jogo de labirinto no computador, que fosse controlado pelo arduino
    e tivesse um elemento de interatividade com o ambiente.
    - Repositório: [GitHub](https://github.com/matheusstutzel/reativos/tree/master/tarefas/Projeto_Final)
    - Vídeo: [GoogleDrive](https://drive.google.com/file/d/0B1HVVfussc4FMnRBMzJ6RExKNkE/view)

- Anny e Leonardo
    - Descrição:
    Este projeto é um jogo baseado no Dance Dance Revolution, e é escrito em
    Céu utilizando SDL e Arduino.
    A parte gráfica e sonora será feita por meio de SDL, enquanto que um
    teclado de membrana será usado, no Arduino, para simular um tapete de
    dança.
    - Repositório: [GitHub](https://github.com/AnnyCaroline/reativos/blob/master/tarefas/projeto-final/PROJECT.md)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=traHrfkfJ_c&list=PL-Vy8N4zUqm6epgmOByDoAEiEwYhebnui)

- Gustavo e Luiz Henrique
    - Descrição:
    A partir da leitura de cartões RFID no Arduino, usaremos o Unity3D para
    exibir os modelos 3D das imagens das cartas.
    - Repositório: [GitHub](https://github.com/LuizAndrade/Projeto-Final-Reativos/)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=iZgaKInIocU)

- Daniel e Diego
    - Descrição:
    Jogo Snake feito em Arduino (Gameduino) e controlado por Android.
    - Repositório: [GitHub](https://github.com/diegocbcastro07/reativos/tree/master/Projeto%20Final)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=EY720cZBS9U)

- Rodrigo
    - Descrição:
    Será criado um carro robô com sensores HC-SRO4, seu sistema irá detectar
    objetos e irá desviar ou evitar obstáculos. O carro se movimentará sempre
    pra frente, caso não possa irá desviar para os lados.
    - Repositório: [GitHub](https://github.com/rasantana/reativos/tree/master/Projeto-final)
    - Vídeo: [OneDrive](https://onedrive.live.com/?authkey=!AOhBkrDuB7wQuO4&cid=0BA1A0ECC405F433&id=BA1A0ECC405F433!4424&parId=BA1A0ECC405F433!164&o=OneUp
)

- Antônio
    - Descrição:
    Criação de uma pequena game engine construída com SDL e C++.
    O jogo desenvolvido será um platformer 2D, utilizando integrações
    sensoriais com o Arduino.
    - Repositório: [GitHub](https://github.com/schonmann/reativos/tree/master/ProjetoFinal)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=xb1ja0I6Pl8)

- Carlos e Vitória
    - Descrição:
    O projeto será uma melhora do mini-sdl(Pegue o Pombo).
    O jogo terá mais dinâmica e mecânica e a dificuldade será crescente.
    Usaremos um Joystick Arduino 3 Eixos para criar um controlador do mini-sdl.
    - Repositório: [GitHub](https://github.com/carlinhoh/reativos/tree/master/Projeto-Final)
    - Vídeo: [GitHub](https://github.com/carlinhoh/reativos/raw/master/Projeto-Final/team.mp4)

- José
    - Descrição:
    O projeto é um jogo de plataforma 2D no estilo survival, baseado em pontos.
    O jogador deve matar os monstros que aparecem na tela e evitar que eles o
    matem.
    O jogador pode pular, andar, atirar (apenas parado), recarregar e trocar de
    armas.
    A pontuação sobe para cada monstro morto. Depois de mortos eles tem chances
    de deixar cair munição.
    Os monstros seguem o jogador apenas pelo eixo x e dão dano ao enconstá-lo.
    Ao Receber dano o jogador é também empurrado para trás.
    Cada tiro acertado paralisa os monstros por um tempo, use isso a seu favor!
    - Repositório: [GitHub](https://github.com/moghat/reativos/tree/master/Projeto/projeto%20final)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=lh999-sAWpE)

- Igor e Tiago
    - Descrição:
    Projeto baseado no jogo “Frogger” em que foi utilizado o arduino como
    controle para o jogo. O joystick realiza a movimentação enquanto um botão
    se encarrega dos disparos do personagem.
    O objetivo do jogo é atravessar três sequências de obstáculos sem ser
    atingido por nenhum deles. O jogador tem direito a disparar sua arma três
    vezes para auxiliar na travessia. Ao concluir o objetivo o próximo nível é
    liberado.
    - Repositório: [GitHub](https://github.com/igortouguinho/reativos/tree/master/tarefas/projetofinal)
    - Vídeo: [YouTube](https://youtu.be/Qs9gQZG1X1k)

- Lucas e Yago
    - Descrição:
    Criação de uma game engine construída com SDL e C. O jogo roda em uma
    plataforma 2D, utilizando integrações sensoriais com o Arduino.
    - Repositório: [GitHub](https://github.com/yagotome/sonic-jump-arduino-sdl)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=hUVc6oqPt-0)

- Bruno e Guilherme
    - Descrição:
    Jogo em SDL que aguarda interação com o usuário através de mensagem
    codificada em código morse pelo arduino.
    - Repositório: [GitHub](https://github.com/BFreire07/reativos/tree/master/Projeto%20Final)
    - Vídeo: ?? <!--[YouTube](https://www.youtube.com/watch?v=rbUciOqEyw4)-->

#### Mini Projetos com Arduino

- Adrianno Sampaio, Giancarlo França, Yago Tomé
    - Descrição:
    O projeto consiste na criação de um carro de duas rodas com direção
    automatizada com base em dados obtidos através de quatro sensores de
    distância: um frontal, no centro; dois para visão periférica, a ~45° para
    cada um dos lados; e um na parte traseira.
    O carro seguirá em frente sempre que possível, utilizando os sensores de
    visão periférica para auxiliar no julgamento do melhor sentido para
    rotacionar caso seja detectado algum obstáculo.
    Se ambos os sensores laterais sinalizarem uma colisão iminente ao mesmo
    tempo (em um intervalo de X ms), o carro se movimentará em ré até que seja
    possível rotacionar para um dos lados. Se o sensor de distância traseiro
    detectar um obstáculo próximo durante o movimento em ré, o carro irá parar
    e acionar uma buzina para sinalizar que está preso.
    - Repositório: [GitHub](https://github.com/adrianno3259/reativos/blob/master/code/MiniArduino)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=lmC8ijmA6iE)

<!--
- Anny Caroline Chagas, Leonardo Marinho, Vitória Rio
    - Descrição:
    Este projeto é sobre um pequeno radar de velocidade que utiliza sensores de
    luz. De acordo com os dados recebidos por estes sensores, o Arduino calcula
    a velocidade estimada do objeto e a exibe na tela.
    O usuário pode definir através do teclado uma velocidade limite que, se
    ultrapassada, fará com que a buzina soe. Tendo também um viés de educação
    no trânsito, a buzina toca em três modos diferentes, de acordo com o quanto
    a velocidade foi transgredida: de 1 a 20%, de 20% a 50% e acima de 50%.
    Estas faixas de valores são as mesmas utilizadas pelo DETRAN.
    Haverá também um botão que liga e desliga o radar. Um LED ficará aceso
    quando o radar estiver funcionando e apagado caso contrário.
    - Repositório:
    - Vídeo:
-->

- Camila e Renato
    - Descrição:
    O sistema de controle de acesso consiste em uma trava eletrônica,
    representada por um micro servo motor, que é destravada quando o usuário
    digita a senha correta.
    O sistema conta ainda com sinais sonoros e visuais que indicam ao usuário
    se a senha digitada está correta ou não.
    - Repositório: [GitHub](https://github.com/camila-cg/reativos/tree/master/MiniProjeto_Arduino)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=Sof8esEVl5o)

- Igor e Tiago
    - Descrição:
    O projeto consiste na utilização de um sensor de distância que medirá o
    quão próximo um objeto se aproxima dele e a utilização de alguns LEDs.
    Conforme algum objeto se aproxime do sensor, os LEDs irão piscar juntos com
    a buzina que emitirá um som (apito) que passará a fazer barulho em
    intervalos cada vez menores de acordo com a proximidade do objeto.
    - Repositório: [GitHub](https://github.com/igortouguinho/reativos/tree/master/tarefas/mini-projeto)
    - Vídeo: [GitHub](https://github.com/igortouguinho/reativos/tree/master/tarefas/mini-projeto)

- José Matheus, Matheus Stutzel, Rodrigo Braga
    - Descrição:
    Programar uma versão do jogo Timberman do Android no arduino.
    - Repositório: [GitHub](https://github.com/moghat/reativos/tree/master/Projeto/projeto%20mini%20arduino)
    - Vídeo: [GoogleDrive](https://drive.google.com/file/d/0B1HVVfussc4FYVdoQXVvb1B2UjA/view)

- Gustavo, Lucas, Luiz Henrique
    - Descrição:
    Nessa primeira etapa do projeto, faremos um controlador de acesso com leitor RFID.
    - Repositório: [GitHub](https://github.com/lucascomp/reativos/tree/master/mini-arduino)
    - Vídeo: [YouTube](https://www.youtube.com/watch?v=eyv2O1DpoO4)

- Lucas e Rafael
    - Descrição:
    O projeto do relógio Multifuncional dispõe de diversas modalidades.
    São eles: Relógio, Alarme, Timer e Cronômetro.
    O Relógio mostra as horas.
    O Alarme é para que dispare uma buzina quando o horário definido pelo
    usuário coincide com a hora do Relógio.
    O Timer é um tempo determinado pelo usuário que decresce até chegar a zero,
    disparando uma buzina.
    O Cronômetro é para medir o tempo que se passa.
    Apesar de ser possível visualizar apenas um módulo de cada vez, vale
    a pena frisar que os módulos podem funcionar simultaneamente.
    - Repositório: [GitHub](https://github.com/LucasAmaralPIres/reativos)
    - Vídeo: [GitHub](https://github.com/LucasAmaralPIres/reativos/tree/master/Mini-Arduino/Projeto/Mini-Arduino%20V%C3%ADdeos)

### Outros Períodos (PUC-Rio)

- https://www.youtube.com/watch?v=0E0lpCe-Kes
- https://youtu.be/LVPj2yIZhNo
- https://youtu.be/qlI0RzYik2w
- https://www.youtube.com/watch?v=3XSLrWWUBA8
- https://github.com/fsantanna-uerj/reativos-videos/

<!--

Prezados alunos,

Estou oferecendo uma disciplina eletiva para o próximo semestre:

    Sistemas Reativos

    Segunda: M1-M2
    Quarta:  M1-M2
    (Horários livres na grade do 6o e 8o períodos.)

A disciplina envolve programação para Arduino, Jogos e (possivelmente) Redes de
Sensores sem Fio.
O enfoque é bastante prático e os trabalhos desenvolvidos durante o curso podem
evoluir para projetos finais.
O link a seguir apresenta a ementa da disciplina e vídeos de trabalhos de
alunos antigos (a disciplina também é dada na PUC-Rio):

https://github.com/fsantanna-uerj/reativos

Peço aos alunos interessados que me mandem um e-mail para que possamos avaliar
a viabilidade da disciplina.

Atenciosamente,
Francisco Sant'Anna (francisco@ime.uerj.br)

Programa detalhado
------------------

* O que é um sistema Reativo?
    - Sistemas transformacionais
    - Sistemas interativos
    - Sistemas reativos

* Modelos de Concorrência
    - Concorrência e Paralelismo
    - Modelo assíncrono
        - Sincronismo explícito
        - *Threads* (memória compartilhada)
        - Atores (troca de mensagens)
    - Modelo síncrono
        - Sincronismo implícito
        - Hipótese de sincronismo
        - Restrições

* Técnicas de Programação
    - Padrão *Observer* (*callbacks*)
    - Máquinas de estado
    - Corrotinas
    - *Futures & Promises*
    - Programação Reativa Functional (FRP)
    - Programação Reativa Imperativa

* Linguagens e Ferramentas
    - Lua/Love
    - C/SDL
    - C/Arduino
    - C/TinyOS
    - Elm
    - Céu

* Aplicações
    - Jogos (SDL, Love)
    - Sistemas embarcados (Arduino)
    - Internet das coisas (TinyOS)

* Avaliação
    - Mini testes baseados em leitura de artigos científicos
    - Pequenos projetos
    - Projeto final

!-- - Escolher uma outra ferramenta e discutir o modelo de execução. --

Aulas
-----

<table border="1" cellspacing="0" cellpadding="20">
<tr><th>1</th><th>15-08</th><td>
<ul>
    <li> Apresentação do Curso
    <li> Sistemas reativos
    <li> Arduino
    <li> Tarefa-1, Tarefa-2, Artigos&Videos-1
</ul>
!--
    Avaliação.
    Github.
    Artigos.
--
</td></tr>
<tr><th>2</th><th>22-08</th><td>
<ul>
    <li> Modelos de Concorrência
    <li> Concorrência e Paralelismo
    <li> Modelo Assíncrono
    <li> Modelo Síncrono
    <li> Arduino Chibi-OS, Occam-PI, Céu
</ul>
!--
    <li> Padrão Observer
    Exemplo do Blink.
    Esquemas de implementação do modelo síncrono.
    Padrão observer (similaridades com a impl. sinc.)
    - Onde aparece nas linguagens? OO/Swing, Android/?
    - C/SDL
    - C/Arduino
    - Lua/Love
        Primeira tarefa que envolva uma máquina de estados potencialmente 
        hierárquica.
--
</td></tr>
<tr><th>3</th><th>29-08</th><td>
    <br/>
!--
<ul>
    <li> Máquinas de estado / Hierárquicas
    <li> Arduino (C, Céu)
</ul>
--
</td></tr>
<tr><th>4</th><th>05-09</th><td><br/></td></tr>
<tr><th>5</th><th>12-09</th><td><br/></td></tr>
<tr><th>6</th><th>19-09#</th><td><br/></td></tr>
<tr><th>7</th><th>26-09#</th><td><br/></td></tr>
<tr><th>8</th><th>03-10#</th><td><br/></td></tr>
<tr><th>9</th><th>10-10#</th><td><br/></td></tr>
<tr><th>10</th><th>17-10#</th><td><br/></td></tr>
<tr><th>11</th><th>24-10#</th><td><br/></td></tr>
<tr><th>12</th><th>31-10</th><td><br/></td></tr>
<tr><th>13</th><th>07-11</th><td><br/></td></tr>
<tr><th>14</th><th>14-11</th><td><br/></td></tr>
<tr><th>15</th><th>21-11</th><td><br/></td></tr>
<tr><th>16</th><th>28-11</th><td><br/></td></tr>
<tr><th>17</th><th>05-12</th><td><br/></td></tr>
<tr><th>18</th><th>12-12</th><td><br/></td></tr>
</table>
-->

# 1. Dispositivo Antiaglomeração e Medidor de Termperatura (D.A.M.T)
O projeto tem como objetivo prevenir aglomerações em estabelecimentos, promovendo uma diminuição do rsico de contamenação pelo Coronavírus, através da contagem e limitação de um número máximo de pessoas num mesmo ambiente. Conta 
também com a integração de outro projeto para a medição da temperatura corporal, sendo ele o *projeto termômetro automático*, que pode ser acessado via GitHub [clicando aqui](https://github.com/LelisSoares/Projeto-termometro-automatico-). Abaixo é mostrado o funcionamento do dispositivo e para maior compreensão visual do trabalho acesse o vídeo completo [click aqui](https://youtu.be/dMgaaTF5XD0)
![FINAL 1](https://user-images.githubusercontent.com/75312838/104361737-9cd52d00-54f1-11eb-955f-7eca2d26e434.gif)

# 2. Duas formas de funcionamento
Para realizar a montagem desse projeto de forma completa você terá também que realizar a montagem do *projeto termômetro automático*, acessível [aqui](https://github.com/LelisSoares/Projeto-termometro-automatico-), além de, considerar os subtópicos **tal e tal**. Caso deseje apenas desenvolver a parte da contagem e limitação de pessoas em um estabelecimento, prossiga na leitura e considere o **Tópico X** com as informações sobre as modificações necessárias no código para utilizar apenas essa função.

# 3. Montagem
Nesse tópcio você encontrará a lista dos componentes, circuito esquemático e os modelos 3D das peças.

# 3.1 Lista de compnentes eletrônicos e circuito esquemático
Esse tópico aborda os elementos e o arranjo para a confecção da PCI de controle geral, que fica fixada dentro da carcaça do **Display contador**, como pode ser visto abaixo.

![Display contador com legenda](https://user-images.githubusercontent.com/75312838/104498151-120c3500-55ba-11eb-9df5-c8b39925f7b2.PNG)

Os componentes utilizados para a confecção do projeto foram:

    1x - Arduino Nano;

    1m - Fita led RGB;

    1x - Display LCD 20x4;

    4x - Sensor ultrssônico (HC-SR04);

    1x - Potênciometro de 10Khom;
    
    3x - Resistores de 1Khom;
    
    3x - Resistores de 10Khom;
    
    3x - Transistores TIP122;

    60x - Pinos macho;
    
    40x - Pinos Fêmea;

    1x - PCI (de aproximadamente 60x100mm);

    1x - Chave ON/OFF;

    1x - Jack fêmea;

    1x - Fonte de 5V;

    Vários jumpers fêmea/fêmea.
    
Para uma melhor visualização o circuito do trabalho acesse e baixe o arquivo **Circuito esquemático** nesse repositório.
![Schematic_CIRCUITO D A M T_2021-01-13](https://user-images.githubusercontent.com/75312838/104498992-2f8dce80-55bb-11eb-95d0-47c9767d6dd9.png)

É importante deixar alguns pontos claros nesse circuito. O pimeiro, é que os barramentos **CONT_ENTRADA** e **CONT_SAIDA** se referem as conexões dos conjuntos que compõem os sensores da entrada e da saída, dessa forma os pinos **E1_INP**, **T1_INP** devem ser conectados respectivamente aos pinos **ECHO** e **THRIGER** do primeiro sensor ultrassônico do conjunto do **sensor da enrtada**, ou seja ao sensor ultrassônico que primeiro detecta a pessoa na entrada do estabelecimento, da mesma forma, os pinos **E2_INP**, **T2_INP** devem ser conectados respectivamente aos pinos **ECHO** e **THRIGER** do segundo sensor ultrassônico, ou seja, ao sensor ultrassônico que detecta por último a pessoa na entrada do estabelecimento. De forma análoga essas conexões devem ocorrer no conjunto que compõem o sensor da saída.

O segundo ponto é que, os pinos **LED_INP** e **LED_OUT** dos barramentos **CONT_ENTRADA** e **CONT_SAIDA** são os pinos de sinalização, devem ser conectados nos leds desses conjuntos.

# 3.2 Circuito esquemático dos sensores da entrada e da saída

O trabalho apresenta dois módulos chamados de **sensor da entrada** e **sensor da saída**, ambos são um conjunto formado pela carcaça de cada módulo, um pedaço de fita led, dois sensores ultrassonicos e as conexões elétricas. Os mesmos são fixados de forma simétrica e oposta, onde se convencionou que o módulo da esquerda é o **sensor da entrada** e o módulo da direita é o **sensor da saída**, como pode ser visto na figura abaixo.



 

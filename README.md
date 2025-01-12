# Projeto SOS com LED – BitDogLab

Este projeto implementa a transmissão do sinal **SOS** em código Morse utilizando um LED conectado a uma GPIO da placa **BitDogLab**. O programa foi desenvolvido em C e simulado no **Wokwi**.

## Requisitos do Projeto
- Placa: BitDogLab
- Ambiente: Visual Studio Code + Wokwi
- Linguagem: C
- Toolchain: Arm GNU Toolchain

## Funcionamento
O programa transmite o sinal SOS utilizando pulsos luminosos, seguindo as seguintes regras:
- **Ponto (.)** – 0,2 segundos com o LED aceso.
- **Traço (-)** – 0,8 segundos com o LED aceso.
- Intervalos entre os pulsos e letras são controlados conforme o padrão Morse.

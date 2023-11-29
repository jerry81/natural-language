# raspberry pi instructions vocab and translation

## chapter 1: learning preparation

- this book will introduce various fundamentals of embedded programming, like what is rp, breadboard, how to install and use rp, sensor modules, learning projects, etc.
- in the experimental chapter

- for the reader's understanding, we give detailed descriptions of each sensor modul. in the practical chapter, each lab includes pictures, the theory behind the circuits and the 实物接线图 - physical wiring document, and we also offer an accompanying instructional video

## chapter 2 : understanding raspberry pi

- 树莓派是尺寸仅有信用卡大小的一个小型计算机
- RBP is a small scale computer the size of a credit card.
- 可以将树莓派连接在电视，显示器，键盘及鼠标等设备上使用
- you can connected the RBP to tv, monitor, keyboard and mouse
- 树莓派能替代日常桌面计算机的多种用途
- raspberry pi can substitute many daily tasks you do your PC
- 包括文字处理， 电子表格， 媒体中心甚至是游戏， 并且树莓派还可以播放高清视频
- including word processing, spreadsheets, media center, and even games and playing high def video
- we hope to promote rbp to young hobbyists
- rbp has been developed for almost 10 years
- many versions have been created
- newest version is 4B, 3B+ also on the market.

### 2.1 - getting ready to work

- if you want to setup a rbp development environment, at the minimum you need
  - 树莓派主板 rbp motherboard
  - 电源适配器 power adapter
  - 电源线 power cable
  - TF 卡 -> transflash card - aka microSD card from sandisk
  - 读卡器 -> card reader
  - 简单的排线引出 I/O 口 - simple cable that leads to io port

### 2.1.1 - 3B+ (not mine)

### 2.1.2 4B

- traditional BCM2711 processor
  - broadcom
  - ARM
- diagram of 4b
- bottom interfaces
  - typec power supply
  - micro hdmi x 2
  - audio port
  - usb 管理芯片
- right side interfaces
  - gigabit ethernet
  - usb 3.0
  - usb 2.0
- left side
  - DSI connector (display serial interface)
- top
  - wifi/bluetooth 5.0
  - cpu
  - memory
  - network card
  - poe port (power over ethernet)

### 2.1.3 power adapter

- has a custom-made on-off
- 4B runs at 4 amperes

### 2.1.4 Breadboard

- the breadboard is for prototyping electronic circuits
- you can easily stick the following into it
- 分立元器件 - discrete components
  - electronic devices that are distinct and separate, (non integrated)
    - capacitors
    - resistors
    - inductors
    - transistors
    - diodes
- 跳线 - jumper wire
  - short wire connect two points on circuit board or electronic component
- two types of breadboards - single and double sided, we use single sided

- 引脚 - pin, pinout - pins of device, component or IC. metal connectors extending from body of component used to electrically connect component to circuit

  - connect for transmit
    - recieve
    - power
    - grounding
      - fundamental concept - connect device to earth
        - safety, stabilization, reference point
        - allow excess current to flow safely into the ground preventing accumulation

- resistor - limits flow
- capacitor - store and release electrical energy as electric field
  - two conductors seperated by insulator
  - for filtering, smoothing, energy storage
- inductor - coil of wire - resists changes in flow of electric current
  - stores in magnetic field
  - releases when current changes
  - used for filters, transformers, energy storage
- transistor - semiconductor that amplifies or switches electronic signals
  - 3 layers: emitter, base, collector
  - fundamental building block in digital logic circuits
- diode - semiconductor - current flows in one direction

  - anode + cathode
  - used for rectification (AC to DC)
  - signal demodulation, protection vs voltage spikes

- 起见 - for the sake of
- let blue wire be GND,
- let the red cable be Vcc.
  - means voltage supply
- every 5 holes are connected by a metal plate vertically
- metal plates cannot touch metal plates
- user can use wires or components to horizontally connect to the metal plate

- let's experiment with the breadboard!
  - breadboard allows you to avoid soldering
  - connect led and watch it light!
  - their picture has a 9v battery with a connector that gives two wire outputs
  - connect one wire at + row
  - connect another from battery to - row and next column

### 2.1.5 TF 卡 (transflash)

- RBP has no disk. MicroSD acts as the disk.
- in their example it is a thumb drive
- ours is a 2TB thumb (microSDXC)
- and a chip 32GB (microSDHC)
- when burning the tf card into the system a matching card reader is needed and the burning operation needs to be carried out on the computer.

### 2.1.6 跳线

- jump wire - make temp connection between two points on circuit

- 行 row 列 column

- although wire colors are not the same, it doesn't mean their functionality are not the same.
- the colors are for organizational and asthetic purposes.

### 2.1.7 T shaped adapter T 形转接板

- RBP has 40 I/O ports. Usually, when breadboarding, you will use a T shaped adapter to connect the rbp i/o ports to transfer out signals.

### 2.1.8 monitor

- optionally, a display monitor can be provided, we obviously didn't get one

## 2.2 - installing raspbery pi system

- RBP supports Raspbian, Windows 10 IoT, Ubuntu Mate, etc.
- most common Raspbian
- recommended Raspbian
- go to official site to download newest version and install
- download a zip

- raspbian rebranded to Raspberry pi os
- latest version bookworm

### 2.2.1 in windows, format SD card

- the usb thumb drive has a slot for the sd card meaning it acts as the adapter too.
# raspberry pi instructions vocab and translation

## chapter 1: learning preparation

- this book will introduce various fundamentals of embedded programming, like what is rp, breadboard, how to install and use rp, sensor modules, learning projects, etc.
- in the experimental chapter

- for the reader's understanding, we give detailed descriptions of each sensor modul.  in the practical chapter, each lab includes pictures, the theory behind the circuits and the 实物接线图 - physical wiring document, and we also offer an accompanying instructional video

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
  - 简单的排线引出I/O口 - simple cable that leads to io port

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

-  has a custom-made on-off
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

- 引脚 - pin, pinout - pins of device, component or IC.  metal connectors extending from body of component used to electrically connect component to circuit
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
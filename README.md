
  <div>
     <h1 align="center">Pocket Led Matrix</h1> 
    <div align="center"><img width="600" alt="Matrix" src="https://github.com/user-attachments/assets/13b9a221-1453-43df-8813-86916ebbd2fd" /></div>
      <p align="center"><em ><code align="center">A Small ESP32-C3 Powered Compact LED Matrix Display,Key Chain Sized</code></em></p>
    </p>
    <div align="center">
      <a href="https://www.kicad.org/" style="margin-right: 15px; display: inline-block;">
        <img align="center" src="https://img.shields.io/badge/KiCad-2B5FC3?style=for-the-badge&logo=kicad&logoColor=white" style="border-radius: 30px;" alt="kicad">
      </a>
      <a href="https://easyeda.com/" style="margin-right: 15px; display: inline-block;">
        <img align="center" src="https://img.shields.io/badge/EasyEDA-1765F3?style=for-the-badge&logo=circuitboard&logoColor=white" style="border-radius: 30px;" alt="easyeda">
      </a>
      <a href="https://www.espressif.com/" style="display: inline-block;">
        <img align="center" src="https://img.shields.io/badge/ESP32-C3-000000?style=for-the-badge&logo=espressif&logoColor=white" style="border-radius: 30px;" alt="esp32">
      </a>
    </div>
    <br>
    <p align="left">
     A small LED screen that is very bright. It uses ESP32-C3 and IS31FL3731 to work This screen is good for showing animations and text. It is also made to fit on small circuit boards.It can show a lot of information in a space. The IS31FL3731 ic make it powerful.
    </p>
  </div>
</div>
<br clear="left">

<h1> Why i made this?</h1>
I wanted to build a very compact LED display that can fit into small devices and but still show animations and text. Mmst LED matrices are bulky or use too many pins so I designed this using driver ICs and a dense PCB layout to clean and compacted

## Setup ESP32

1. Install Arduino IDE  
2. Add ESP32 board  
3. Select **ESP32 C3 Dev Module**  
4. Connect board via USB


<h1 align="center">USAGE</h1>

## Wiring

### ESP32 to IC

- GPIO8 → SDA  
- GPIO9 → SCL  
- 3.3V → VCC  
- GND → GND  

Both chips use the same wires I2C


### Chip Setup 

- SDB → 3.3V  
- REXT → 20kΩ → GND  
- CFIL → 1uF → GND  
- Add Decopuing 0.1µF capacitor  



### Address Setup

- Chip 1, Address = `0x74`  
- Chip 2, Address = `0x77`  



### LED Wiring (6×18)

- Rows (R1–R6) are connected to **CB1–CB6** on BOTH chips  
Columns:
- Chip 1, C1–C9 to CA1–CA9  
- Chip 2, C10–C18 to CA1–CA9  

Each LED:
Row (CB) -> LED -> Column (CA)

<h1 align="center"> PCB & SCHEMATIC</h1>

<img width="500"  alt="Screenshot 2026-05-27 000205" src="https://github.com/user-attachments/assets/0f36d0ff-ec47-49a3-98c7-f9eb40da7343" />
<img width="500"  alt="Screenshot 2026-05-27 000126" src="https://github.com/user-attachments/assets/122c699a-a729-45e9-ab68-bb9e0479f7a8" />
<img width="1000"  alt="image" src="https://github.com/user-attachments/assets/1e928c94-2eb7-4250-8c15-8555730d071c" />



<h1 align="center">Zine Page</h1>
<p align="center"><img width="500" alt="Power Zine" src="https://github.com/user-attachments/assets/518b758f-7c27-4377-8904-68c06cba5fb1" />



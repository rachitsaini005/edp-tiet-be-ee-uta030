# Engineering Design Project — UTA030

![Course](https://img.shields.io/badge/Course-UTA030-1F3864?style=flat-square)
![Institute](https://img.shields.io/badge/TIET-Patiala-8C7A3B?style=flat-square)
![Semester](https://img.shields.io/badge/Semester-Jul--Dec_2024-2E5FA3?style=flat-square)
![Reports](https://img.shields.io/badge/Reports-4-informational?style=flat-square)
![Arduino Sketches](https://img.shields.io/badge/Arduino_Sketches-18-00979D?style=flat-square)
![Figures](https://img.shields.io/badge/Figures-114-informational?style=flat-square)

Coursework for **Engineering Design Project-I**, B.E. Electrical Engineering,
Second Year (Batch 2D11/2EL1), Thapar Institute of Engineering & Technology.

The semester-long build is a line-following **buggy** that reads gantry
signals around a track — combining custom PCB design (ECED) with Arduino-based
sensing, control and wireless communication (CSED). This repo holds both the
final submitted reports and the underlying Arduino code / figures broken out
as standalone files.

## Team — Lab Activity Group 1

| Name | Roll No. |
|---|---|
| Tanav Pathak | 102304001 |
| Anushka Tiwari | 102304002 |
| Vishavjeet Singh | 102304003 |
| Parth Gupta | 102304005 |
| Rachit Saini | 102304007 |

**Supervisors:** Dr. Gitanjali (ECED, PCB design) · Dr. Ashutosh Mishra, Assistant Professor (CSED, Arduino/RoboCar)

## The four reports

| Report | Dept. | Exam | What it covers |
|---|---|---|---|
| [MST Individual Report](ECED/MST_Individual_Report) | ECED | Mid-Sem | Schematic + PCB design in Eagle: IR receiver, IR sensor module, PWM transmitter |
| [EST Group Report](ECED/EST_Group_Report) | ECED | End-Sem | Soldering and DSO-testing the three circuits above |
| [MST Group Report](CSED/MST_Group_Report) | CSED | Mid-Sem | Arduino fundamentals — 10 experiments from LED blink to buggy geometric-shape motion |
| [EST Group Report](CSED/EST_Group_Report) | CSED | End-Sem | RoboCar sensors (IR, ultrasonic), gantry pulse detection, ZigBee control, and the **Bronze Challenge** (full autonomous lap with obstacle avoidance) |

## Repository structure

```text
EDP-UTA030/
├── ECED/                                Electronics & Comm. Engg. — Dr. Gitanjali
│   ├── MST_Individual_Report/
│   │   ├── EDP-I_Activity_Report_Rachit_Saini.docx
│   │   └── Experiment_1|2|3/figures/    Schematics, PCB layouts, component photos
│   └── EST_Group_Report/
│       ├── EDP_EST_Group_Report_Rachit_Saini.docx
│       └── Experiment_4|5|6/figures/    Soldered circuits, DSO waveform captures
│
└── CSED/                                Computer Science & Engg. — Dr. Ashutosh Mishra
    ├── MST_Group_Report/
    │   ├── EDP_MST_Group_Report_Rachit_Saini.docx
    │   └── Experiment_1..10/
    │       ├── code/*.ino               Arduino sketches
    │       └── figures/                 Component photos, Tinkercad diagrams
    └── EST_Group_Report/
        ├── EDP_EST_Group_Report_CSED_Rachit_Saini.docx
        └── Experiment_1|2|3|4a|4b|5/
            ├── code/*.ino
            └── figures/
```

Each `.docx` is the complete, formatted report as submitted. The `code/` and
`figures/` folders under every `Experiment_N` hold the same material as
individual files — 18 sketches and 114 figures in total — for anyone who wants
to read or reuse them without opening Word.

## Tools & platform

- **Eagle CAD** — schematic capture and PCB layout (ECED circuits)
- **Arduino IDE / Tinkercad** — sketch development and simulation (CSED)
- **NVIS 3302ARD RoboCar** — ATmega328P-based buggy platform
- **HC-SR04** ultrasonic sensor, **BPW41N/BPX65** IR photodiodes, **XBee/ZigBee** modules
- **Digital Storage Oscilloscope** — PWM waveform verification

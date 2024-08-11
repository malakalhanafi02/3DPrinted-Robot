# Robot Legs Assembly and Control

This project involves assembling a pair of robotic legs equipped with servo motors to simulate human-like movement. The legs include a base, knee joints, hip joints, and a total of 6 servo motors controlled by an Arduino board. 

<p align="center">
  <img width="481" alt="image" src="https://github.com/user-attachments/assets/731c1c07-5cf7-4567-b72d-7f821230e0da">
</p>


## Contents
- Base Structure (2x)
- Knee Joints (2x)
- Hip brace (1x)
- Servo Motors (6x)
- Arduino Board (1x)

## Assembly Instructions

#### Step 1- Setting Up the Servos:
Manually set each servo motor to 90 degrees one by one using the Arduino
You can find the servo control code in the [servo.ino](servo.ino) file.

#### Step 2- Prepare the Base:
- Attach two servo motors to the base structure

<p align="center">
  <img width="414" alt="Base" src="https://github.com/user-attachments/assets/e80984d7-a3d7-4158-9508-2e2a27c83481">
</p>
<p align="center">
  <img width="429" alt="image" src="https://github.com/user-attachments/assets/a4409dfd-4858-4467-ab14-48b54cc6ddbf">
</p>

#### Step 3- Assemble the Knees:
- Attach the knee joints to the servo motors on the base using screws
<p align="center">
  <img width="458" alt="image" src="https://github.com/user-attachments/assets/78cb9fc1-46de-439f-a198-b9e94a219355">
</p>



- Attach the servo brushes on the knee joints:
<p align="center">
  <img width="400" alt="image" src="https://github.com/user-attachments/assets/e2ce3883-18cf-4dd0-97d2-e8bd3a32982b">
</p>

#### Step 4- Assemble the Hips:
- Fix the remaining two servo motors on top of the hip brace, with the rotating parts facing downwards vertically

<p align="center">
  <img width="1016" alt="image" src="https://github.com/user-attachments/assets/0bc8cb21-a044-41aa-b7ce-1c3068b960ff">
</p>
<p align="center">
  <img width="569" alt="image" src="https://github.com/user-attachments/assets/7238f0e7-41c3-4fa8-8167-dcaee552c4c3">
</p>

#### Step 5- Connections & Coding:

- The (potential) code for controlling the robot legs can be found in the [robot_legs.ino](robot_legs.ino) file.

## Tips:

- When attaching the brushes to the parts, use a heat-gun to make the brush fit:

<p align="center">
  <img width="473" alt="image" src="https://github.com/user-attachments/assets/9f7ede4b-19bb-4c75-ab4e-1397472121a9">
</p>

- Add screws to the brushes to make sure theyre attahed properly:

<p align="center">
  <img width="425" alt="image" src="https://github.com/user-attachments/assets/746da52f-e0df-48c6-93d6-f380f6488734">
</p>




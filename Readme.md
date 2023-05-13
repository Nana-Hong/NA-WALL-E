# WALL-E: LET‘S GUARD OUR PLANTS
<img width="855" alt="截屏2023-05-13 18 32 23" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/8ba82922-f55f-40d7-866f-82a0f0964035">

VIDEO: https://www.youtube.com/watch?v=KJEZgrKgXcE 

BLOG: https://www.dropbox.com/scl/fi/rt2tai9olgxiw36eswfw4/Nas-Blog.paper?dl=0&rlkey=naqzln7mpahn7uiwhcamny3dc 
 
## IDEATION
Inspiration: tracking camera

<img width="876" alt="截屏2023-05-13 18 32 43" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/6a0510fb-a2eb-48d5-8323-e3c5696cf2e5">

I found a real-time tracking camera in the Elephant & Castle subway station, which is constantly detecting and recording every subway coming and going. This is very interesting. Home tracking cameras are very popular now, and most families with small pets will use this camera to remotely observe their pets. I want to add this functionality to my work.
At the same time, I remembered Wall-E, which protects the world, which will be the main object of my work.

I will have two parts:
The first part is the head of Wall-e, which mainly focuses on face tracking
The input of a camera will always recognize the face, and the output of the motor will make Wall-e's eyes follow the movement of the person.
The second part is Wall-e's body.
The distance detector is the main input. When it detects that someone is approaching, the two motors in the output will make the arm move, accompanied by the sound of the Buzzer and the flashing of the LED.

 
## PLAN
<img width="450" alt="截屏2023-05-13 18 35 39" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/65b19d0f-bc08-461b-80cd-61dc3b0504c3">
<img width="449" alt="截屏2023-05-13 18 35 50" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/d1a8c741-2128-4791-974b-80684b27e261"><br/>
<img width="985" alt="截屏2022-11-29 05 58 31" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/f7c77706-914a-4a0e-ba38-da23d8944973"><br/>
1- I will try to run the face recognition project to make sure the main code is successful <br/>
2- I will run my code on Tinkercad to make the theory successful<br/>
3- Connect the Arduino and sensors together to ensure that the physical Arduino runs successfully<br/>
4- Do appearance and mechanics, use 3D printing or laser cutter<br/>
5- Put the Arduino in the shell, master the length of the wire, and start soldering the Arduino<br/>
6- Do an experiment to test whether it is successful.<br/>

 
## PROCESS

<img width="659" alt="截屏2023-05-13 18 36 09" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/f0355412-653d-41b5-a8c9-fb501ac2d785"><br/>
<img width="894" alt="截屏2023-05-13 18 36 26" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/e39852e0-e4d2-4aef-b626-c8a56515ab41"><br/>

HEAD: After trying the face recognition detection code to run successfully, I used a 3D printing pen to draw a wall-e face on the camera, and roughly estimated the size of the wall-e and the position of the camera hole.<br/>

<img width="800" alt="截屏2023-05-13 18 36 47" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/703bccc9-7e31-49b2-8aa6-81a4340c92c0"><br/>
BODY: In the end I used a laser cutter to make my shell, and made the teeth around the shell, these can make my shell close tightly. And the material I used acrylic sheet, this material is beautiful and strong.

## CIRCUIT DIAGRAM
<img width="400" alt="截屏2022-12-09 13 41 07" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/3ee08f6a-4095-47a7-a117-068df163233d">
<img width="400" alt="截屏2023-05-13 18 51 01" src="https://github.com/Nana-Hong/NA-WALL-E/assets/119884327/450b6537-aa2f-4fa0-b294-6fe82106fb8e"><br/>
I wired up my circuit on Tinkercad to see if it works.<br/>
Then I used Python and Arduino to complete my projects and uploaded them to GitHub

## CHALLENGE

Coding & Arduino<br/>
1. Face tracking: The python code I download was incorrect. I collected and checked every piece of code on the Internet, and temporarily learned the python language. Finally, I successfully wrote the correct python code for face tracking.<br/>
2. LED strip: At first the LED light strip was not bright, and there was no trace of flickering. I replaced it with a single LED light.<br/>
3. Servo motor: My motor broke down and all the motors in school were gone, so I borrowed motors from other students, which took a long time. Afterwards, the motor trembled continuously, and the reason was that the object was too heavy to bear. I changed it's bearing surface, it's better but still slightly trembling.<br/>

Handmaking<br/>
1. Head: The head is too heavy, the motor that controls the head camera can‘t bear it, and it often falls down. Later I changed the material and replaced the acrylic board with balsa wood. And I lowered the center of gravity of the camera and shortened the length of the support column. Finally, the motor below can support the head camera smoothly.<br/>
2. Body: There is an error in the teeth of the bottom surface of the box, and it cannot be completely combined with other surfaces. I lined up other successfully cut box sides, smoothly drew the bottom side with the correct teeth, and cut it off.





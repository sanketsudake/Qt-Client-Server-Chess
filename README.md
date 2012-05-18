***Qt-Client-Server-Chess Demo

Description::
================
This code just demo for how Chess like game can be played using
client & server.There are two projects Mytcpserver and socket1
both are developed using "qtcreator".Both Mytcpserver and socket1
 are 'Qt console projects'
'Mytcpserver' acts as server ,and 'socket1' acts as client.
First run server which is console app and then client.

Working::
=================
Server accepts port no which should be given by user, same port no.
should be given client.Server as default works on 'localhost'.
As default server can enter first move which can be like 'a2b4'.
While server is accepting move, client can't do anything.After 
server finished his move ,client immediately gets update of server's
move.Now client can enter his move meanwhile server can't do anything.
This process should undergone validation which is done my project 'CINES'.
To finish this message passing loop either of server or client can enter 
keyword "quit".

Future work::
=================
This projects should work with CINES so that two player can play chess 
remotely.

For any information feel free to @contact,
Sanket Sudake sanketsudake@gmail.com


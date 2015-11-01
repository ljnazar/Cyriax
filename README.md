# Cyriax


This program is a firewall application that works in conjunction with Netfilter/iptables. Cyriax allows blocking external attacks to a computer connected to the internet and has special features to block attacks from the application layer of the TCP/IP model.


###Necesario para que funcione:
----------------------------


**1) Establecer el LOG para iptables, ya que ese LOG sirve para visualizar el bloqueo de los ataques en el software**

El archivo de configuración que hay que editar es /etc/rsyslog.conf (o su versión antigua /etc/syslog.conf). Se debe agregar la siguiente linea al final del archivo:

kern.warning /var/log/iptables.log

[warning es el nivel 4 de prioridad e indica entonces que todos los mensajes provenientes del kernel que tengan un nivel de prioridad 4 o mayor se guardarán en el archivo /var/log/iptables.log y se ignoran los de prioridad inferior que son debug, info y notice que generalmente son irrelevantes.]

Luego necesitamos reiniciar el servidor rsyslog (o su versión antigua /etc/syslog.conf).

/etc/init.d/rsyslog restart


**2) Instalar dependencias Qt**

apt-get install qt5-qmake

apt-get install qt5-default

apt-get install libqt5sql5-mysql


**3) Instalar MySQL (necesario para cargar reglas de bloqueos manuales)**

apt-get install mysql-server


**4) Compilar (es necesario ser ususario root)**

ir a la carpeta donde se encuantra el archivo Cyriax.pro y poner:

qmake -o Makefile Cyriax.pro

make

**5) Dar permisos a la carpeta de instalación**

chmod -R 777 Carpeta-de-instalación

**6) Ejecutar aplicación**

cd bin/

./Cyriax



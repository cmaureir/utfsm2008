#!/bin/sh
rm -fr a.out *.txt
gcc encuesta.c
./a.out >> encuesta.txt
cat encuesta.txt | grep Edad | awk '{ print $4 }' >> edades_iniciacion.txt
cat encuesta.txt | grep Horas | awk '{ print $4 }' >> horas_medios_comunicacion.txt
cat encuesta.txt | grep programa | awk '{ print $3 }' >> programas.txt




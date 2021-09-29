#
VIEW := View
CONTROLLER := Controller
MODEL := Model

all: programa
programa: Persona Colaborador Estudiante Universidad vista Main
	g++ -o Ejecutable Persona.o Colaborador.o Estudiante.o  Universidad.o View.o Main.o
Universidad: ${MODEL}/Universidad.cpp ${MODEL}/Universidad.h ${MODEL}/Persona.h
	g++ -c ${MODEL}/Universidad.cpp
Estudiante: ${MODEL}/Estudiante.cpp ${MODEL}/Persona.h
	g++ -c ${MODEL}/Estudiante.cpp
Colaborador: ${MODEL}/Colaborador.cpp ${MODEL}/Persona.h
	g++ -c ${MODEL}/Colaborador.cpp
Persona: ${MODEL}/Persona.cpp ${MODEL}/Persona.h
	g++ -c ${MODEL}/Persona.cpp
vista: ${VIEW}/View.cpp ${VIEW}/View.h ${MODEL}/Universidad.h
	g++ -c ${VIEW}/View.cpp
Main: Main.cpp ${VIEW}/View.h 
	g++ -c Main.cpp
delete: #comando para borrar los .o
	@echo "limpio los archivos intermediosd de las carpetas ..."+ ${MODEL} + ${VIEW}
	del *.o, del *.exe
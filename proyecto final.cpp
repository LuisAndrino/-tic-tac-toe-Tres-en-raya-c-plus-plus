#include <iostream>
using namespace std;

char juego[3][3];


void tablero() {		        //Definimos la funcion para crear el tablero
	int vertical = 0;
	int horizontal = 0;
	for (int i = 0; i <= 5; i++) {	//Como es un array de dos dimensiones, necesitamos iterar sobre dos ejes para dibujar lineas
		for (int j = 0; j < 3; j++) {
			if (i < 5 && i % 2 != 0) {		//Por estetica, se necesita un tablero grande, asi que sera de 5 * 3 
				cout << "___";			//Imprimimos las lineas horizontales si i es menor que 5 y es un numero impar
			}
			else {
				if (i < 5) {
					cout << " " << juego[horizontal][vertical] << " ";		   //De lo contrario imprimimos tres espacio
					vertical++;
				}
				else {
					cout << "   ";
				}
			}

			if (j < 2) {			  //Si j es menor que 2, imprimos un caracter horizontal, esta condicion la usamos para no imprimir caracteres de mas
				cout << "|";
			}
		}
		vertical = 0;
		if (i % 2 == 1) {

			horizontal++;
		}
		cout << endl;
	}
}

void iniciotab() {
	juego[0][0] = '1';
	juego[0][1] = '2';
	juego[0][2] = '3';
	juego[1][0] = '4';
	juego[1][1] = '5';
	juego[1][2] = '6';
	juego[2][0] = '7';
	juego[2][1] = '8';
	juego[2][2] = '9';

	tablero();


}

void ponerturnos() {
	int turno = 1;
	int jugador = 1;
	string respuesta, rep;
	char tiro;
	

		iniciotab();

		while (turno >= 1 && turno < 10) {


			if (jugador == 1 && turno < 10) {
				cout << "Jugador 1, Elija una posicion: " << endl;
				cin >> tiro;

				
				
				if((tiro == '1' && juego[0][0] != 'X') && juego[0][0] != 'O' ) {
					juego[0][0] = 'X';
				}
				else if ((tiro == '2' && juego[0][1] != 'X') && juego[0][1] != 'O' ) {
					juego[0][1] = 'X';
				}
				else if ((tiro == '3' && juego[0][2] != 'X') && juego[0][2] != 'O' ) {
					juego[0][2] = 'X';
				}
				else if ((tiro == '4' && juego[1][0] != 'X') && juego[1][0] != 'O' ) {
					juego[1][0] = 'X';
				}
				else if ((tiro == '5' && juego[1][1] != 'X') && juego[1][1] != 'O' ) {
					juego[1][1] = 'X';
				}
				else if ((tiro == '6' && juego[1][2] != 'X') && juego[1][2] != 'O' ) {
					juego[1][2] = 'X';
				}		 
				else if ((tiro == '7' && juego[2][0] != 'X') && juego[2][0] != 'O' ) {
					juego[2][0] = 'X';
				}
				else if ((tiro == '8' && juego[2][1] != 'X') && juego[2][1] != 'O' ) {
					juego[2][1] = 'X';
				}
				else if ((tiro == '9' && juego[2][2] != 'X') && juego[2][2] != 'O' ) {
					juego[2][2] = 'X';
				}

				else {
					cout << "______________________________________________" << endl;
					cout << "Tiro invaldo, tire de nuevo" <<endl; 
					cout << "______________________________________________" << endl;
					jugador--;
					turno--;
				}
				if ((juego[0][0] == juego[0][1]) && (juego[0][0] == juego[0][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][0] == juego[1][0]) && (juego[0][0] == juego[2][0])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][1] == juego[1][1]) && (juego[2][1] == juego[2][0])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][2] == juego[1][2]) && (juego[0][2] == juego[2][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[1][0] == juego[1][1]) && (juego[1][0] == juego[1][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[2][0] == juego[2][1]) && (juego[2][0] == juego[2][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][0] == juego[1][1]) && (juego[0][0] == juego[2][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][2] == juego[1][1]) && (juego[0][2] == juego[2][0])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}



				jugador++;
				++turno;
				tablero();

				
			}

			if (jugador == 2 && turno < 10) {
				cout << "Jugador 2, Elija una posicion: " << endl;
				cin >> tiro;


				if ((tiro == '1' && juego[0][0] != 'X') && juego[0][0] != 'O') {
					juego[0][0] = 'O';
				}
				else if ((tiro == '2' && juego[0][1] != 'X') && juego[0][1] != 'O') {
					juego[0][1] = 'O';
				}
				else if ((tiro == '3' && juego[0][2] != 'X') && juego[0][2] != 'O') {
					juego[0][2] = 'O';
				}
				else if ((tiro == '4' && juego[1][0] != 'X') && juego[1][0] != 'O') {
					juego[1][0] = 'O';
				}
				else if ((tiro == '5' && juego[1][1] != 'X') && juego[1][1] != 'O') {
					juego[1][1] = 'O';
				}
				else if ((tiro == '6' && juego[1][2] != 'X') && juego[1][2] != 'O') {
					juego[1][2] = 'O';
				}
				else if ((tiro == '7' && juego[2][0] != 'X') && juego[2][0] != 'O') {
					juego[2][0] = 'O';
				}
				else if ((tiro == '8' && juego[2][1] != 'X') && juego[2][1] != 'O') {
					juego[2][1] = 'O';
				}
				else if ((tiro == '9' && juego[2][2] != 'X') && juego[2][2] != 'O') {
					juego[2][2] = 'O';
				}

				else {
					cout << "______________________________________________" << endl;
					cout << "Tiro invaldo, tire de nuevo" << endl;
					cout << "______________________________________________" << endl;
					jugador++;
					turno--;
				}
				if ((juego[0][0] == juego[0][1]) && (juego[0][0] == juego[0][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][0] == juego[1][0]) && (juego[0][0] == juego[2][0])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][1] == juego[1][1]) && (juego[2][1] == juego[2][0])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][2] == juego[1][2]) && (juego[0][2] == juego[2][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[1][0] == juego[1][1]) && (juego[1][0] == juego[1][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[2][0] == juego[2][1]) && (juego[2][0] == juego[2][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][0] == juego[1][1]) && (juego[0][0] == juego[2][2])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}
				else if ((juego[0][2] == juego[1][1]) && (juego[0][2] == juego[2][0])) {
					cout << "______________________________________________" << endl;
					cout << "El jugador: " << jugador << " gano la partida" << endl;
					cout << "______________________________________________" << endl;
					tablero();
					break;
				}

				jugador--;
				++turno;
				tablero();
			}



		}

}


int main() {
	bool repetir = true;
	string rep, respuesta;

	cout << "Bienvenido al totito \nResponda Si para empezar a jugar, escriba cualquier otra cosa para cerrar: ";
	cin >> respuesta;

	if ((respuesta == "Si" || respuesta == "si") || respuesta == "SI") {
		while (repetir == true) {

			ponerturnos();

			cout << "Desea jugar de nuevo? \n";
			cin >> rep;
			if ((rep == "si" || rep == "Si") || rep == "SI") {
				repetir = true;
			}
			else {
				cout << "Has decidido terminar el juego" << endl;
				repetir = false;
				break;
			}
		}
	}
	else {
		cout << "Ha decidido salir del juego" << endl;
	} 
	
	return 0;
}

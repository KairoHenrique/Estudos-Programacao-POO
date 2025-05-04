#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream arquivoEntrada("entrada.txt");
	string linha;
	bool italico = false, negrito = false;

	if (!arquivoEntrada) {
		cout << "Erro ao abrir o arquivo de entrada." << endl;
		return 1;
	}
	while (getline(arquivoEntrada, linha)) {
		for (size_t i = 0; i < linha.length(); i++) {
			if (linha[i] == '_') {
				if (italico) {
					cout << "</i>";
				} else {
					cout << "<i>";
				}
				italico = !italico;

			} else if (linha[i] == '*') {
				if (negrito) {
					cout << "</b>";
				} else {
					cout << "<b>";
				}
				negrito = !negrito;
			} else {
				cout << linha[i];
			}
		}
		cout << endl;
	}

	arquivoEntrada.close();
	return 0;
}
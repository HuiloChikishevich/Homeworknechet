#include <iostream>
#include <vector>
#include <string>

using namespace std;

void delete_duplicates(vector <string> Array, int sin) {
	for (int i = 0; i < sin; i++) {
		for (int j = i + 1; j < sin; j++) {
			 if (Array[i] == Array[j]) {
				Array[j] = " ";

			}

		}
	}
	for (int k = 0; k < sin; k++) {				//output Array
		if (Array[k] != " ") {
			cout << Array[k] << endl;
		}
	}

}

int main() {
	int sin;
	cin >> sin;
	vector <string> Array(sin);	// string need to work 0
	for (int i = 0; i < sin;i++){		//fill Array
		cin >> Array[i];
	}
	delete_duplicates(Array,sin);

	return 0;
}

#include<iostream>
using namespace std;

int combinational(int n, int r) {
	
	int total;
	int nfact = 1;
    double rfact = 1;
	int nrfact=1;
	int b = n - r;

	if (r <= 0 || r > n) {
		return 0;
	}

	else {

		for (int i = 1; i <= n; i++) {

			nfact *= i;
		}

		for (int j = 1; j <= r; j++) {

			rfact *= j;
		}

		for (int k = 1; k <=b; k++) {

            nrfact *= k;
		}

		total = nfact / ((rfact) * (nrfact));

		return total;
	}
	

}

int main() {

	cout << combinational(11, 5) << endl;

	return 0;
}
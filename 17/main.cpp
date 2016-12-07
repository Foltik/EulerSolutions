#include <cstdio>
#include <string>
int main() {
	std::string ones = "onetwothreefourfivesixseveneightnine";
	std::string teens = "teneleventwelvethirteenfourteenfifteensixteenseventeeneighteennineteen";
	std::string tens = "twentythirtyfortyfiftysixtyseventyeightyninety";
	std::string hundred = "hundred";
	std::string thousand = "onethousand";
	std::string strand = "and";

	int nones = ones.length();
	int nteens = teens.length();
	int ntens = 10 * tens.length();
	ntens += 8 * nones;
	int nhundreds = 0;
	nhundreds += 9 * hundred.length();
	nhundreds += 9 * 99 * (hundred.length() + strand.length());
	nhundreds += 9 * (nones + nteens + ntens);
	nhundreds += 100 * nones;
	nhundreds += thousand.length();

	printf("%d\n", nones + nteens + ntens + nhundreds);
}

#include "Currency.h"
#include <iostream>
#include <string>
using namespace std;

Currency::Currency() {
	fname = "Unknown Bill";
	pname = "Unknown Subunit";
	full = 0;
	partial = 0;
	subunit = 100;
}

Currency::Currency(int f, int p) {
	fname = "Unknown Bill";
	pname = "Unknown Subunit";
	full = f;
	subunit = 100;
	if (p > subunit) {
		full += (p / subunit);
		partial = p % subunit;
	}
	else {
		partial = p;
	}
}

// allows user to create custom currency
Currency::Currency(string fn, string pn, int f, int p, int s) {
	fname = fn;
	pname =pn;
	full = f;
	subunit = s;
	if (p > s) {
		full += (p / s);
		partial = p % s;
	}
	else {
		partial = p;
	}
}

Currency::~Currency() {
}

void Currency::setFName(string fn) {
	fname = fn;
}

void Currency::setPname(string pn) {
	pname = pn;
}

string Currency::getFName() const {
	return fname;
}

string Currency::getPName() const {
	return pname;
}

void Currency::setFull(int f) {
	full = f;
}

void Currency::setPartial(int p) {
	partial = p;
}

int Currency::getFull() const {
	return full;
}

int Currency::getPartial() const {
	return partial;
}

void Currency::setSubunit(int s) {
	subunit = s;
}

int Currency::getSubunit() const {
	return subunit;
}


Currency& Currency::operator+(const Currency &augend) {
	setFull(getFull() + augend.getFull());
	if (getPartial() + augend.getPartial() > getSubunit()) {
		setPartial((getPartial() + augend.getPartial()) % getSubunit());
		setFull((getPartial() + augend.getPartial()) / getSubunit());
	}
	else {
		setPartial(getPartial() + augend.getPartial());
	}
	return *this;
}

Currency& Currency::operator-(const Currency &subtrahend) {
	setFull(getFull() - subtrahend.getFull());
	if (getPartial() - subtrahend.getPartial() < 0) {
		int temp = getPartial() - subtrahend.getPartial();
		setPartial( temp % getSubunit() + getSubunit() );
		setFull( getFull() - ((temp / getSubunit())*-1 + 1));
	}
	else {
		setPartial(getPartial() - subtrahend.getPartial());
	}

	if (getFull() < 0) {
		setFull(0);
		setPartial(0);
	}

	return *this;
}

ostream& operator<<(ostream& outstream, const Currency &output) {
	outstream << to_string(output.full) + " " + output.fname + " " + to_string(output.partial) + " " + output.pname;
	return outstream;
}

istream& operator>> (istream& instream, Currency &input) {
	cout << "Enter the value for the " << input.fname << " amount:" << endl;
	instream >> input.full;
	cout << "Enter the value for the " << input.pname << " amount:" << endl;
	instream >> input.partial;
	return instream;
}

//---------------------------
Dollar::Dollar() {
	fname = "Dollar";
	pname = "Cent";
	full = 0;
	partial = 0;
	subunit = 100;
}

Dollar::Dollar(int f, int p) {
	fname = "Dollar";
	pname = "Cent";
	full = f;
	partial = p;
	subunit = 100;
}

Dollar::~Dollar() {
}

Currency& Dollar::operator+(const Currency &augend) {
	setFull(getFull() + augend.getFull());
	if (getPartial() + augend.getPartial() > getSubunit()) {
		setPartial((getPartial() + augend.getPartial()) % getSubunit());
		setFull((getPartial() + augend.getPartial()) / getSubunit());
	}
	else {
		setPartial(getPartial() + augend.getPartial());
	}
	return *this;
}

Currency& Dollar::operator-(const Currency &subtrahend) {
	setFull(getFull() - subtrahend.getFull());
	if (getPartial() - subtrahend.getPartial() < 0) {
		int temp = getPartial() - subtrahend.getPartial();
		setPartial(temp % getSubunit() + getSubunit());
		setFull(getFull() - ((temp / getSubunit())*-1 + 1));
	}
	else {
		setPartial(getPartial() - subtrahend.getPartial());
	}

	if (getFull() < 0) {
		setFull(0);
		setPartial(0);
	}

	return *this;
}

//---------------------------
Yen::Yen() {
	fname = "Yen";
	pname = "Sen";
	full = 0;
	partial = 0;
	subunit = 1000;
}

Yen::Yen(int f, int p) {
	fname = "Yen";
	pname = "Sen";
	full = f;
	partial = p;
	subunit = 1000;
}

Yen::~Yen() {
}

Currency& Yen::operator+(const Currency &augend) {
	setFull(getFull() + augend.getFull());
	if (getPartial() + augend.getPartial() > getSubunit()) {
		setPartial((getPartial() + augend.getPartial()) % getSubunit());
		setFull((getPartial() + augend.getPartial()) / getSubunit());
	}
	else {
		setPartial(getPartial() + augend.getPartial());
	}
	return *this;
}

Currency& Yen::operator-(const Currency &subtrahend) {
	setFull(getFull() - subtrahend.getFull());
	if (getPartial() - subtrahend.getPartial() < 0) {
		int temp = getPartial() - subtrahend.getPartial();
		setPartial(temp % getSubunit() + getSubunit());
		setFull(getFull() - ((temp / getSubunit())*-1 + 1));
	}
	else {
		setPartial(getPartial() - subtrahend.getPartial());
	}

	if (getFull() < 0) {
		setFull(0);
		setPartial(0);
	}

	return *this;
}

//---------------------------
Quetzal::Quetzal() {
	fname = "Quetzal";
	pname = "Centavo";
	full = 0;
	partial = 0;
	subunit = 100;
}

Quetzal::Quetzal(int f, int p) {
	fname = "Quetzal";
	pname = "Centavo";
	full = f;
	partial = p;
	subunit = 100;
}

Quetzal::~Quetzal() {
}

Currency& Quetzal::operator+(const Currency &augend) {
	setFull(getFull() + augend.getFull());
	if (getPartial() + augend.getPartial() > getSubunit()) {
		setPartial((getPartial() + augend.getPartial()) % getSubunit());
		setFull((getPartial() + augend.getPartial()) / getSubunit());
	}
	else {
		setPartial(getPartial() + augend.getPartial());
	}
	return *this;
}

Currency& Quetzal::operator-(const Currency &subtrahend) {
	setFull(getFull() - subtrahend.getFull());
	if (getPartial() - subtrahend.getPartial() < 0) {
		int temp = getPartial() - subtrahend.getPartial();
		setPartial(temp % getSubunit() + getSubunit());
		setFull(getFull() - ((temp / getSubunit())*-1 + 1));
	}
	else {
		setPartial(getPartial() - subtrahend.getPartial());
	}

	if (getFull() < 0) {
		setFull(0);
		setPartial(0);
	}

	return *this;
}

//---------------------------
Tala::Tala() {
	fname = "Tala";
	pname = "Sene";
	full = 0;
	partial = 0;
	subunit = 1000;
}

Tala::Tala(int f, int p) {
	fname = "Tala";
	pname = "Sene";
	full = f;
	partial = p;
	subunit = 100;
}

Tala::~Tala() {
}

Currency& Tala::operator+(const Currency &augend) {
	setFull(getFull() + augend.getFull());
	if (getPartial() + augend.getPartial() > getSubunit()) {
		setPartial((getPartial() + augend.getPartial()) % getSubunit());
		setFull((getPartial() + augend.getPartial()) / getSubunit());
	}
	else {
		setPartial(getPartial() + augend.getPartial());
	}
	return *this;
}

Currency& Tala::operator-(const Currency &subtrahend) {
	setFull(getFull() - subtrahend.getFull());
	if (getPartial() - subtrahend.getPartial() < 0) {
		int temp = getPartial() - subtrahend.getPartial();
		setPartial(temp % getSubunit() + getSubunit());
		setFull(getFull() - ((temp / getSubunit())*-1 + 1));
	}
	else {
		setPartial(getPartial() - subtrahend.getPartial());
	}

	if (getFull() < 0) {
		setFull(0);
		setPartial(0);
	}

	return *this;
}

//---------------------------
Krona::Krona() {
	fname = "Krona";
	pname = "Ore";
	full = 0;
	partial = 0;
	subunit = 1000;
}

Krona::Krona(int f, int p) {
	fname = "Krona";
	pname = "Ore";
	full = f;
	partial = p;
	subunit = 100;
}

Krona::~Krona() {
}

Currency& Krona::operator+(const Currency &augend) {
	setFull(getFull() + augend.getFull());
	if (getPartial() + augend.getPartial() > getSubunit()) {
		setPartial((getPartial() + augend.getPartial()) % getSubunit());
		setFull((getPartial() + augend.getPartial()) / getSubunit());
	}
	else {
		setPartial(getPartial() + augend.getPartial());
	}
	return *this;
}

Currency& Krona::operator-(const Currency &subtrahend) {
	setFull(getFull() - subtrahend.getFull());
	if (getPartial() - subtrahend.getPartial() < 0) {
		int temp = getPartial() - subtrahend.getPartial();
		setPartial(temp % getSubunit() + getSubunit());
		setFull(getFull() - ((temp / getSubunit())*-1 + 1));
	}
	else {
		setPartial(getPartial() - subtrahend.getPartial());
	}

	if (getFull() < 0) {
		setFull(0);
		setPartial(0);
	}

	return *this;
}
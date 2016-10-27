#pragma once
#include <iostream>
#include <string>
using namespace std;

class Currency {
protected:
	string fname;
	string pname;
	int full;
	int partial;
	int subunit;

public:
	Currency();
	Currency(int f, int p);
	Currency(string fn, string pn, int f, int p, int s);
	virtual ~Currency();


	void setFName(string fn);
	void setPname(string pn);
	string getFName() const;
	string getPName() const;
	void setFull(int f);
	void setPartial(int p);
	int getFull() const;
	int getPartial() const;
	void setSubunit(int s);
	int getSubunit() const;

	virtual Currency& operator+(const Currency &augend);
	virtual Currency& operator-(const Currency &augend);

	virtual bool operator== (const Currency& addend);

	friend ostream& operator<<(ostream& outstream, const Currency &output);
	friend istream& operator>>(istream& instream, Currency &input);
};

class Dollar : public Currency {
public:
	Dollar();
	Dollar(int f, int p);
	~Dollar();
	Currency& operator+(const Currency &augend);
	Currency& operator-(const Currency &augend);
};

class Yen : public Currency {
public:
	Yen();
	Yen(int f, int p);
	~Yen();
	Currency& operator+(const Currency &augend);
	Currency& operator-(const Currency &augend);
};

class Quetzal : public Currency {
public:
	Quetzal();
	Quetzal(int f, int p);
	~Quetzal();
	Currency& operator+(const Currency &augend);
	Currency& operator-(const Currency &augend);
};

class Tala : public Currency {
public:
	Tala();
	Tala(int f, int p);
	~Tala();
	Currency& operator+(const Currency &augend);
	Currency& operator-(const Currency &augend);
};

class Krona : public Currency {
public:
	Krona();
	Krona(int f, int p);
	~Krona();
	Currency& operator+(const Currency &augend);
	Currency& operator-(const Currency &augend);
};
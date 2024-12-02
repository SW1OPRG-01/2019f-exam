#include "Bog.h"
#include <iostream>
using namespace std;

Bog::Bog(string titel, string forfatter, string ISBN, int sider) { 
  setTitel(titel);
  setISBN(ISBN);
  setForfatter(forfatter);
  setAntalSider(sider);
}

void Bog::setTitel(string titel)
{ 
	titel_ = titel != "" ? titel : "Ukendt";
}

string Bog::getTitel() const
{
	return titel_;
}

void Bog::setForfatter(string forfatter)
{ 
	forfatter_ = forfatter != "" ? forfatter : "Ukendt";
}

string Bog::getForfatter() const
{
	return forfatter_;
}

void Bog::setISBN(string isbn)
{
  if(isbn.length() != 13) {
    ISBN_ = "1234567890123";
    return;
  }

  for(int i = 0; i < isbn.length(); i++) {
    char current = isbn[i];
    if(current < '0' || current > '9') {
      ISBN_ = "1234567890123";
      return;
    }
  }
  ISBN_ = isbn;
}

string Bog::getISBN() const
{
	return ISBN_;
}

void Bog::setAntalSider(int sider)
{ 
	antalSider_ = sider > 0 ? sider : 1;
}

int Bog::getAntalSider() const
{
	return antalSider_;
}

void Bog::print() const {
  cout << getForfatter() << ":" << getTitel() << endl;
  cout << "ISBN: " << getISBN() << endl;
  cout << getAntalSider() << " sider" << endl;
}

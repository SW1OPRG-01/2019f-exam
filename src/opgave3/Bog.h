#include <string>

using namespace std;


class Bog {
  public:
    Bog(string titel = "Ukendt", string forfatter = "Ukendt", string ISBN = "1234567890123", int sider = 1);
    void setTitel(string titel);
    string getTitel() const;
    void setForfatter(string forfatter);
    string getForfatter() const;
    void setISBN(string isbn);
    string getISBN() const;
    void setAntalSider(int sider);
    int getAntalSider() const;
    void print() const;
  private:
    string forfatter_;
    string titel_;
    string ISBN_;
    int antalSider_;
};
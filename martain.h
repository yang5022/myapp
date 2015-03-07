#ifndef _MARTAIN_H_
#define _MARTAIN_H_

class Martain{
public:
	Martain();
	~Martain();
	
	static int getcount();

	void hide();
	void fight();

private:
	static int m_count;
};


#endif

//File "FrameHandler.h"

#include "console.h"

enum class Symbol: char{
	Border,
	White,
	Black,
};

class FrameHandler{
private:
	Symbol s_current[MAP_HEIGHT * MAP_WIDTH];
	Symbol s_next[MAP_HEIGHT * MAP_WIDTH];
	Symbol s_temp[MAP_HEIGHT * MAP_WIDTH];

	int m_lock_level;

	FrameHandler();
public:
	static FrameHandler& get_handler();
	
	void fill(int, int);
	void clear(int, int);

	void lock();
	void unlock();

	void render();
};
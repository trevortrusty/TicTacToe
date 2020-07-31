tictactoe.exe:	client.cpp game.cpp player.cpp
		g++ client.cpp game.cpp player.cpp
clean:
		del tictactoe.exe

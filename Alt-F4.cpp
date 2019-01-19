xdc    #include <SFML/Graphics.hpp>
    #include <iostream>
    int windowWidth = 400;
    int windowHeight = 300;
    using namespace sf;
    using namespace std;


    class playerClass{
        public:
			bool playerFaceRight;
			float xpos;
			float ypos;
			float xvel;
			float yvel;
            playerClass(){
				playerFaceRight = true;
				xpos = 0;
				yvel = 0;
				xvel = 0;
				yvel = 0;
                


            }
			void update(bool playerUp,bool playerDown,bool playerLeft,bool playerRight) {
				
				    if (playerRight) {
						playerFaceRight = true;
					xvel = 5;
				}
					if(playerLeft){ 
						xvel = -5;
}
					if(playerDown) {
						yvel = 5;
					}
					if (playerUp) {
						yvel = -5;
					}
					if (!(playerRight || playerLeft)) {
						xvel = 0;
					}
					xpos += xvel;
					ypos += yvel;
					cout << xpos << endl;
					
					

                    			


    };


int main()
{
    // Create the main window
    sf::RenderWindow app(VideoMode(windowWidth, windowHeight)), "Alt-F4");

    bool playerUp, playerDown, playerLeft, playerRight = false;

    playerClass playerObject;
	font fixedsysFont;
	fixedsysFont.loadFromFile("Documents/Alt-F4/8514fix.ttf");

	Text helloText("Hello MrGuy!",fixedsysFont, 50 );

	Texture snail;
	snail.loadFromFile("Documents/Alt-F4/Stress_Ball.png");
	Sprite mrGuy(snail);
	
	// Start the game loop
    while (app.isOpen())
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();
        }
		if (Keyboard::isKeyPressed(Keyboard::Right)) playerRight = true;
		if (Keyboard::isKeyPressed(Keyboard::Left)) playerLeft = true;
		if (Keyboard::isKeyPressed(Keyboard::Up)) playerUp = true;
		if (Keyboard::isKeyPressed(Keyboard::Down)) playerDown = true;
		if (!(Keyboard::isKeyPressed(Keyboard::Down))) playerDown = false;
		if (!(Keyboard::isKeyPressed(Keyboard::Up))) playerUp = false;
		if (!(Keyboard::isKeyPressed(Keyboard))) playerLeft = false;
		if (!(Keyboard::isKeyPressed(Keyboard))) playerRight = false;
		playerObject.update(playerUp, playerDown, playerLeft, playerRight);
	    // Clear screen
        app.clear(); 

		app.draw(snail);
		app.draw(helloText)
		snail.move(Vector2f(playerObject.xvel, playerObject.yvel))

        // Draw the sprite


        // Update the window
        app.display();
		

    }

    return EXIT_SUCCESS;
}

xdc    #include <SFML/Graphics.hpp>
    #include <iostream>
    int windowWidth = 400;
    int windowHeight = 300;
    using namespace sf;
    using namespace std;


    class playerClass{
        public:
            playerClass(){
                cout << "Bounce" << endl;


            }


    };


int main()
{
    // Create the main window
    sf::RenderWindow app(VideoMode(windowWidth, windowHeight)), "Alt-F4");

    bool up, down, left, right = false;

    playerClass playerObject;
	
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

        // Clear screen
        app.clear();

        // Draw the sprite


        // Update the window
        app.display();
    }

    return EXIT_SUCCESS;
}

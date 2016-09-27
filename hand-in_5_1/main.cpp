#include <iostream>

#include <SFML/Graphics.hpp>
#include "ball.h"
#include "player.h"

// Creates window
bool init();

//Shutdowns SFML
void close();

//The window
sf::RenderWindow* pWindow = nullptr;

//Players
Player* player1;
Player* player2;

//Ball
Ball* ball;

bool init()
{
    //initialization flag
    bool success = true;

    //Create the window
    sf::RenderWindow window (sf::VideoMode(400, 400), "Lets pong!");
    pWindow = &window;
    if( pWindow == nullptr )
    {
        std::cout << "Window could not be created!" << std::endl;
        success = false;
    }

    //Enable verticalsync
    pWindow->setVerticalSyncEnabled(true);

    //window.~RenderWindow();

    return success;
}

int main()
{
    double *x;
    double *y;
    double *speed;
    *speed = 2.5;
    *y = 200.0;
    *x = 200.0;
    Ball::Ball(x, y);

    //Creates window
    if( !init() )
    {
        std::cout << "Failed to initialize!\n";
    }
    else
    {
        //Main loop flag
        bool quit = false;

        //Event handler
        sf::Event event;

        while( !quit )
        {
            while (pWindow->pollEvent(event))
            {
                //Handle events on que
                if(event.type == sf::Event::Closed)
                {
                    pWindow->close();
                    quit = true;
                }
            }

            //Do logic
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                double *y = ball->GetY();
                *y += *speed;
                ball->SetY(y);
            }

            //Draw stuff
            pWindow->clear(sf::Color::Black);
            ball->DrawMe();




        }
    }

    return 0;
}
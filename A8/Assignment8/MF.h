/* A7 - Magic Item: The Magic Book
*
* Desc: Declaration file for MagicBook Class
*
* Author: Matt Frankmore
* CSCI261 Section E
*/

#pragma once

class MagicBook {
    private:
        int _points;
        const int _POINTS_THRESHOLD = 3;
    
    public:
        //Constructors
        MagicBook();
        //Setters
        void setPoints(int ptsToAdd);
        //Getters
        int getPoints();
        //Functions
        void introduction();
        void riddles();
        void winner();
};


#ifndef POWERUPLIGHTNING_H
#define POWERUPLIGHTNING_H
#include "powerup.h"
#include <cstdlib>
#include <QRect>
#include <QImage>

class powerupLightning: public Powerup
{
	public: 
		powerupLightning();
		virtual ~powerupLightning();

   	public : 
    	void resetState();
   		virtual void appear();
   		bool isActive();
   		void setActive(bool);
   		//virtual void useAbility();
   		void setX(int);
    	void setY(int);
    	void setAppeared(bool);
   		bool hasAppeared();
   		int count;
   		QRect getRect();
    	QImage & getImage();
    
    private :
    	int x;
    	int y;
    	bool active;
    	bool appeared;
       	QImage image;
    	QRect rect;	
};

#endif

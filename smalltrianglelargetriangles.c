

struct box
{
    int length,width,height;

};

typedef struct box box;

int get_volume(box b) {
    int s;

        s=b.length*b.width*b.height;
        return s;
    	/**
	* Return the volume of the box
	*/
}

int is_lower_than_max_height(box b) {
    if(b.height<41)
    {return 1;}
    
    else {return 0;}
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}


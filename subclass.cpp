/* Alexander Wuerz */
/* GILLIGAN'S ISLAND: https://stackoverflow.com/questions/18153184/c-copying-of-objects-of-derived-class-into-objects-of-base-class 
 * base_class, subclass_1, and subclass_2 were taken directly from the chapter 12 slides. */  

class base_class {
	private:
   	 	int a;
   	 	float x;
	protected:
    		int b;
    		float y;
  	public:
    		int c;
    		float z;
}; 

class subclass_1 : public base_class {  };
//     In this one, b and y are protected and
//     c and z are public

class subclass_2 : private base_class {  };
//    In this one, b, y, c, and z are private,
//    and no derived class has access to any
//    member of base_class

main() {
	subclass_1 sb_1_alt;
	subclass_1* sb_1; 
	base_class bs; 
	// sb_1 = &bs; // this doesn't work
	// bs = sb_1; // this doesn't work
	// sb_1 = &bs;
 	sb_1 = &sb_1_alt; 
}

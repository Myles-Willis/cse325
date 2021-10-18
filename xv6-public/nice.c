#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main( int argc, char *argv[] )  {

	 int pid, priority, nice_value;
	 
	 // two arguments: pid then priority value
   if(argc == 3 ) {  
      
      pid = atoi(argv[1]);
      priority = atoi(argv[2]);
      
			if(priority < 0) {
			 	printf(2,"\npriority < 0, clamping to 0\n");	
			} else if(priority > 39) {	
			 	printf(2,"\npriority > 39, clamping to 39\n");
		  }
           
      set_priority(pid, priority);
      nice_value = get_priority(pid);
      
      printf(2, "System process ID #%d now has nice value: %d \n", pid, nice_value);
     
   }
   else if( argc > 2 ) {
      printf(2, "Too many arguments supplied.\n");
      printf(2, "Expected: pid priority.\n");
   }
   else {
      printf(2, "Expected: pid priority.\n");
   }
     
   exit();
}

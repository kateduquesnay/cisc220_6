//Assignment 6
//Sarah Carter 10193595
//Katherine DuQuesnay 10138898
//Adele McCallum 10093867
//Dean Wilkins-Reeves 10176758


int position[5] = {0, 0, 0, 0, 0};

int main() {

  
  
  
}//end main

int drawingtrack() {
	system("clear");
	printf(" Welcome to CISC220 Racing Arena \n Hit Enter to move forward \n");
	
	for(int i=0; i < 5; i++) {
		for(int k=0; k < position[i]; k++) {
			putchar('~');
		}
		printf("|->");
		
		int remainingpos = 40 - position[i];
		for (int j=0; j<remainingpos; j++) {
			putchar(' ');
		}
		printf("# Lane %d #\n", i+1);
	}
	sleep(20);
	checkwinner();
}//end drawingtrack

int checkwinner(){
	
}//end checkwinner


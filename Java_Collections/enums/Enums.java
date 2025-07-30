public class Enums{
	enum Week{  //In java enum is a keyword used to describe enums 
		MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY  //Enums constants must be always in upper case
	}
	
	public static void main(String[] args){
		Week week; //object of enum Week

		week = Week.MONDAY; // Initializing reference to Monday
		System.out.println(week); //printing the reference

		int index = week.ordinal();
		System.out.println("The index of " + week + " is "+ index);


		for(Week iterator  : Week.values()){ //Iterating over enum constants 
			System.out.println(iterator);
		}

		String nameofenum = week.name();
		System.out.println("Fetching the name of enum reference : " + nameofenum);

		Week matchingenum = Week.valueOf("monday".toUpperCase());
		System.out.println("The name of matching enum is : "+matchingenum);

		System.out.println(matchingenum.equals(week));
	}
    
}	
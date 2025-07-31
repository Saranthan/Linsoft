import java.util.ArrayList; //part of java.util.ArrayList package 
			 
//Array List implements the List Interface


public class ArrayListEg{
	public static void main (String[] args){

		//declaration for ArrayList 
		ArrayList<Integer> arrayList = new ArrayList<>();

		//ArrayList<Integer> arrayList = new ArrayList<>(int capacity);d	
		arrayList.add(10); //function to add elements
		arrayList.add(20);
		arrayList.add(30);
		arrayList.add(50);
		arrayList.add(32);

		System.out.println(arrayList.get(0)); //get(index) reterives elements
		
		System.out.println(arrayList.remove(0)); //removes tnd returnst the first index	of list

		arrayList.set(0,1); //returns element of previous index and  set index and value

		System.out.println(arrayList.contains(10)); //true

		
		System.out.println(arrayList);		
	}
}	
	

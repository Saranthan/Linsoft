import java.util.LinkedList;
import java.util.Collections;

public class LinkedListEg {
	public static void main(String... args){ 

	LinkedList<Integer> llist = new LinkedList<>();
	llist.add(1);
	llist.add(2);
	System.out.println(llist);
 
	LinkedList<Integer> llist2 = new LinkedList<Integer>(llist);
	Collections.reverse(llist2);
	System.out.println(llist2);	

	}
}
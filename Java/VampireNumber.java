/**
 * ThinkingInJava(5ED.) Chapter4 Ex.10
 * @author Jacky_Chou
 *Finding all VampireNumber of 4 digits
 */
public class VampireNumber {

	public static void main(String[] args){
		for(int i = 1000; i <= 9999; i++){
			String numberString = "" + i; //convert number to string
			if(Integer.valueOf(numberString.substring(0, 2)).intValue() *  Integer.valueOf(numberString.substring(2, 4)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(0,1) + numberString.substring(2,3)).intValue() *  Integer.valueOf(numberString.substring(1,2) + numberString.substring(3,4)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(0,1) + numberString.substring(3,4)).intValue() *  Integer.valueOf(numberString.substring(1,2) + numberString.substring(2,3)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(1,2) + numberString.substring(0,1)).intValue() *  Integer.valueOf(numberString.substring(3,4) + numberString.substring(2,3)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(0,1) + numberString.substring(1,2)).intValue() *  Integer.valueOf(numberString.substring(3,4) + numberString.substring(2,3)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(1,2) + numberString.substring(0,1)).intValue() *  Integer.valueOf(numberString.substring(2,3) + numberString.substring(3,4)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(3,4) + numberString.substring(0,1)).intValue() *  Integer.valueOf(numberString.substring(2,3) + numberString.substring(1,2)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(0,1) + numberString.substring(3,4)).intValue() *  Integer.valueOf(numberString.substring(2,3) + numberString.substring(1,2)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(3,4) + numberString.substring(0,1)).intValue() *  Integer.valueOf(numberString.substring(1,2) + numberString.substring(2,3)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(2,3) + numberString.substring(0,1)).intValue() *  Integer.valueOf(numberString.substring(3,4) + numberString.substring(1,2)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(0,1) + numberString.substring(2,3)).intValue() *  Integer.valueOf(numberString.substring(3,4) + numberString.substring(1,2)).intValue() == i){
				System.out.println(i);
				continue;
			}
			else if(Integer.valueOf(numberString.substring(2,3) + numberString.substring(0,1)).intValue() *  Integer.valueOf(numberString.substring(1,2) + numberString.substring(3,4)).intValue() == i){
				System.out.println(i);
				continue;
			}
		}
			
	}
	
}

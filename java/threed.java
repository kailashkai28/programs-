public class threed
{	public static void main(String[] args)
	{

	int[][][] test = {
              {
               {1, -2, 3}, 
               {2, 3, 4}
              }, 
              { 
               {-4, -5, 6, 9}, 
               {1}, 
               {2, 3}
              } 
};	
for (int[][] a2D: test) {
        for (int[] a1D: a2D) {
           for(int item: a1D) {
              System.out.println(item);
           }
        }
     }
  }
}

public class fourd{
	public static void main(String args[]){
	int arr[][][][] = {
                        {
                          {
                            {1,2},{1,2},{1,2},{4,2}
                          },
                          {
                            {2, 4},{1, 4},{1, 4},{1,2}
                          },
                          {
                            {2, 4},{1, 4},{1, 4},{1,8}
                          }
                       },
                       {
                         {
                           {1,2},{1,2},{1,2},{4,2}
                         },
                         {
                           {2, 4},{1, 4},{1, 4},{1,2}
                         },
                         {
                           {2, 4},{1, 4},{1, 4},{1,2}
                         }
                      }
                    };                          	
	for (int[][][] a3D: arr) {
        for (int[][] a2D: a3D) {
           for(int[] a1D: a2D) {
		for(int item:a1D){
              System.out.print("\t"+item);
           }
	

        }


     }


  }
	

}
}

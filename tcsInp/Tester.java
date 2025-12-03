class Tester{
    public static void main(String[] args) {
        int[] array1 = new int[]{1,2,3,-84,5,115};

        int currentSum = 0;
        int maxSum = 0;
        for(int val : array1){
            currentSum +=val;
            maxSum = Math.max(maxSum, currentSum);
            if(currentSum<0) currentSum=0;
         }
         System.out.println(maxSum);
    }

}
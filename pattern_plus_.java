public class pattern_plus_ {
    public static void main(String[] args) {
        int v=4;
        for(int i=5;i>0;i--){
            for(int j=i-1;j>0;j--){
                System.out.print(" ");
            }
            for(int k=5-v;k>0;k--){
                System.out.print("* ");
            }
            v--;
            System.out.println(" ");
        }
    }
    
}

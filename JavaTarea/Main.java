public class matrizejemplo{

     public static void main(String []args){
       int matriz[][] = new int[3][3];
       matriz[0][0] = 2;

matriz[0][1] = 4;
matriz[0][2] = 4;
matriz[1][0] = 6;
matriz[1][1] = 6;
matriz[1][2] = 9;
matriz[2][0] = 8;
matriz[2][1] = 10;
matriz[2][2] = 12;

int [][] Matriz = {{2,4,4},{6,6,9},{8,10,12}};
         for (int[] matriz1 : matriz) {
             for (int y = 0; y < matriz1.length; y++) {
                 System.out.println(matriz1[y]);
             }
         }

     }
}

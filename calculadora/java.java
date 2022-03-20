import java.util.Scanner;

public class Operation {

    public static void main(String[] args){
        
        float value;
        float result;
        char op;
        char resp;
        Scanner keyboard = new Scanner(System.in);

        System.out.println("Value: ");
        result = keyboard.nextFloat();
        do{
            System.out.println("Value: ");
            value = keyboard.nextFloat();
            System.out.println("Operation: ");
            op = keyboard.nextLine();
            operation(op, result, value);
            System.out.println("Coninue {Y,N}: ");
            resp = keyboard.nextLine();
        }while(resp == "N");
        
    }

    public static float operation(char op, float result, float value){
    
        if(op.equals("+")){
            result +=  value;
        }
        else if(op.equals("-")){
            result -= value;        
        }else if(op.equals("*")){
            result = result * value;
        }else if(op.equals("/")){
            if (value != 0){
                result = result / value;
            }else{
                System. out.println("Nao e possvel dividir por 0");
            }
        }
        return result;
    }
}
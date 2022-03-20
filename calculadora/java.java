public class Operation {

    public static void main(String[] args){
        float value;
        float result;
        char op, resp;
        Scaner keyboard = new Scaner(Systen.in);

        System.out.println("Value: ");
        result = keyboard.nextfloat();
        do{
            System.out.println("Value: ");
            value = keyboard.nextfloat();
            System.out.println("Operation: ");
            op = keyboard.nextchar();
            operation(op, result, value);

        }while(resp == "N");
        
    }
    public static float operation(char op, float result, float value){
    
        if(op == "+"){
            result +=  value;
        }
        elif(op == "-"){
            result -= value;        
        }elif(op ==""){
            result = result * value;
        }elif(op == "/"){
            if (value; != 0){
                result = result / value;
            }else{
                printf("Nao e possvel dividir por 0");
            }
        }
        return result;
    }
}
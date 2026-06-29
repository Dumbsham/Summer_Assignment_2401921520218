package Week_4.OOPS;

interface test {
    void square(int a);
}

class arithmetic implements test {
    @Override
    public void square(int a) {
        System.out.println("The square of " + a + " is " + (a * a));
    }
}

public class InterfaceTestAndArithmetic {
    public static void main(String[] args) {
        arithmetic obj = new arithmetic();
        obj.square(5);
    }
}

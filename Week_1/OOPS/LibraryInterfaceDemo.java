package Week_1.OOPS;

interface LibraryUser{

    
    public void registerAccount(int age);
    public void requestBook(String BookType);
}

class kidUser implements LibraryUser{
    int age;
    String BookType;

    public void registerAccount(int age){
        if(age < 12){
            System.out.println("You have successfully registered under a Kids Account.");
        }
        else{
            System.out.println("Sorry,Age must be less than 12 to register as a kid.");
        }
    }

    public void requestBook(String BookType){
        if(BookType.equals("Kids")){
            System.out.println("Book Issued successfully,please return the book within 10 days.");
        }
        else{
            System.out.println("Oops,you are allowed to take only Kids books");
        }
    }

}

class adultUser implements LibraryUser{
    int age;
    String BookType;

    public void registerAccount(int age){
        if(age > 12){
            System.out.println("You have successfully registered under an Adult account.");
        }
        else{
            System.out.println("Sorry,Age must be greater than 12 to register as an adult.");
        }
    }

    public void requestBook(String BookType){
        if(BookType.equals("Fiction")){
            System.out.println("Book Issued successfully,please return the book within 7 days.");
        }
        else{
            System.out.println("Oops,You are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        kidUser kid1 = new kidUser();
        kid1.age = 10;
        kid1.registerAccount(kid1.age);
        kid1.age = 18;
        kid1.registerAccount(kid1.age);
        kid1.requestBook("Kids");
        kid1.requestBook("Fiction");

        System.out.println("\n");
        adultUser adult1 = new adultUser();

        adult1.age = 5;
        adult1.registerAccount(adult1.age);

        adult1.age = 23;
        adult1.registerAccount(adult1.age);

        adult1.requestBook("Kids");
        adult1.requestBook("Fiction");
    }
    
}

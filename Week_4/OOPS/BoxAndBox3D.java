package Week_4.OOPS;

class Box {
    double length;
    double breadth;

    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double getArea() {
        return length * breadth;
    }
}

class Box3D extends Box {
    double height;

    public Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    public double getVolume() {
        return getArea() * height;
    }
}

public class BoxAndBox3D {
    public static void main(String[] args) {
        Box3D box = new Box3D(5.0, 4.0, 3.0);
        System.out.println("Area of 2D face: " + box.getArea());
        System.out.println("Volume of 3D box: " + box.getVolume());
    }
}

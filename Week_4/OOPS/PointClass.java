package Week_4.OOPS;

class Point {
    private int x;
    private int y;

    public Point() {
        this.x = 0;
        this.y = 0;
    }

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public double distance(int x, int y) {
        int xDiff = this.x - x;
        int yDiff = this.y - y;
        return Math.sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    public double distance(Point p) {
        int xDiff = this.x - p.x;
        int yDiff = this.y - p.y;
        return Math.sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    public double distance() {
        return Math.sqrt(x * x + y * y);
    }
}

public class PointClass {
    public static void main(String[] args) {
        Point p1 = new Point();
        Point p2 = new Point(3, 4);

        System.out.println("p1 coordinates: (" + p1.getX() + ", " + p1.getY() + ")");
        System.out.println("p2 coordinates: (" + p2.getX() + ", " + p2.getY() + ")");

        p1.setXY(1, 2);
        System.out.println("p1 updated coordinates: (" + p1.getX() + ", " + p1.getY() + ")");

        System.out.println("Distance between p1 and p2: " + p1.distance(p2));
        System.out.println("Distance of p2 from origin: " + p2.distance());
    }
}

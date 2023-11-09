import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        float x1 = 0;
        float y1 = 0;
        float x2 = 0;
        float y2 = 0;
        float x3 = 0;
        float y3 = 0;
        float r = 0;
        float side1 = 0;
        float side2 = 0;
        boolean isIncorrect;

        Scanner scanner = new Scanner(System.in);

        do {
            isIncorrect = false;

            System.out.println("Введите координаты нижней левой точки прямоугольника:");
            try {
                x1 = Integer.parseInt(scanner.nextLine());
                y1 = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException E) {
                System.out.println("Введенные данные не удовлетворяют условию. Повторите попытку.");
                isIncorrect = true;
            }
        } while (isIncorrect);


        do {
            isIncorrect = false;

            System.out.println("Введите координаты верхней правой точки прямоугольника:");
            try {
                x2 = Integer.parseInt(scanner.nextLine());
                y2 = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException E) {
                System.out.println("Введенные данные не удовлетворяют условию. Повторите попытку.");
                isIncorrect = true;}
                if (!isIncorrect && (x2 < x1 || y2 < y1)) {
                    System.out.println("Введенные данные не удовлетворяют условию. Повторите попытку.");
                    isIncorrect = true;}
        } while (isIncorrect);

        System.out.println("Введите координаты центра круга и его радиус:");
        if (scanner.hasNextFloat()) {
            x3 = scanner.nextFloat();
            y3 = scanner.nextFloat();
            r = scanner.nextFloat();
        } else {
            System.out.println("Ошибка ввода для X3. Пожалуйста, введите число.");
            scanner.nextLine();
            isIncorrect = true;
        }

        side1 = Math.abs(x2 - x1);
        side2 = Math.abs(y2 - y1);

        if (!isIncorrect && x1 < x2 && x3 < x2 && y1 < y3 && y3 < y2 && 2 * r <= side1 && 2 * r <= side2) {
            System.out.println("Принадлежит области прямоугольника.");
        } else {
            System.out.println("Не принадлежит области прямоугольника.");
        }
    }
}






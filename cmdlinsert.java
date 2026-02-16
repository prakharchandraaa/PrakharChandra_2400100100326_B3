class cmdlinsert {
    public static void main(String[] args) {

        String[] values = new String[args.length];

        for (int i = 0; i < args.length; i++) {
            values[i] = args[i];
        }
        System.out.println("Inserted values:");
        for (int i = 0; i < values.length; i++) {
            System.out.println(values[i]);
        }
    }
}
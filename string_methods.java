package com.company;

public class string_methods {
    public static void main(String[] args) {
        String name = "Harry";
        String a1 = new String("Harry");
        System.out.println(name);
        int value = name.length();     // Returns the length of the string.
        System.out.println(value);
        String uname = name.toUpperCase();  // Converts into all uppercase characters.
        System.out.println(uname);
        String lname = name.toLowerCase();  // Converts into all lowercase characters.
        System.out.println(lname);
        String name1 = "    Harry      ";
        System.out.println(name1.trim());  // Removes the spaces before printing the whole string.
        System.out.println(name.substring(3));  // Returns substring from start to the end.
        System.out.println(name.substring(1,3));   // Returns the substring from the beginindex(included) to the endindex(excluded) that has been passed.
        System.out.println(name.replace('r', 'p'));  // Replaces the r letter with p (that has been passed to the replace method) in the string name (only takes the characters).
        System.out.println(name.replace("rry", "ier"));  // Replaces the rry string with ier string (that has been passed to the replace method) in the string name (only takes the string).It can also replace between string and characters.
        System.out.println(name.startsWith("Ha")); // Returns the boolean value(True or False) if the condition is met.
        System.out.println(name.endsWith("ry")); // Returns boolean value(True or False) if the condition is met.
        System.out.println(name.charAt(3)); // Returns the character of the passed index.
        System.out.println(name.indexOf('r'));  // Returns the index of the character or the string.(if same letter is printed then the first letter's index is given.
        String modifiedname = "Harryrry";
        System.out.println(modifiedname.indexOf("rry", 4));   // Returns -1 if the passed string is not available.
        System.out.println(modifiedname.lastIndexOf("r"));  // Returns the last index of the passed letter in the method.
        System.out.println(modifiedname.lastIndexOf("rry",4));  //Returns the last index before the passed int value.
        System.out.println(name.equals("Harry"));  // Returns the boolean value if the string(passed) is equal to original string.
        System.out.println(name.equalsIgnoreCase("haRRy")); // Returns the boolean value ignoring the case sensitivity.


        System.out.println("\" I am an escape sequence character \"");








    }
}

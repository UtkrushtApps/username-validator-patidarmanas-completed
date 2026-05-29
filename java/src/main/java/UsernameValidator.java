public class UsernameValidator {
    public boolean isValid(String username) {
        if (username == null || username.isEmpty()) {
            return false;
        }
        if (username.length() < 3 || username.length() > 20) {
            return false;
        }
        char first = username.charAt(0);
        if (!Character.isLetter(first)) {
            return false;
        }
        for (int i = 1; i < username.length(); i++) {
            char ch = username.charAt(i);
            if (!Character.isLetterOrDigit(ch) && ch != '_') {
                return false;
            }
        }
        return true;
    }
}

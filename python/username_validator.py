class UsernameValidator:
    def is_valid(self, username: str) -> bool:
        if username is None or username == "":
            return False
        if len(username) < 3 or len(username) > 20:
            return False
        if not username[0].isalpha():
            return False
        for ch in username[1:]:
            if not (ch.isalpha() or ch.isdigit() or ch == '_'):
                return False
        return True

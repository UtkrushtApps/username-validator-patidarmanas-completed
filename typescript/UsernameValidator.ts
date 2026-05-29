export class UsernameValidator {
  isValid(username: string | null | undefined): boolean {
    if (username === null || username === undefined || username === '') {
      return false;
    }
    if (username.length < 3 || username.length > 20) {
      return false;
    }
    if (!/^[a-zA-Z]/.test(username)) {
      return false;
    }
    if (!/^[a-zA-Z][a-zA-Z0-9_]*$/.test(username)) {
      return false;
    }
    return true;
  }
}

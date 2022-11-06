namespace Blog;

public static class Configuration
{
    // TOKEN - JWT
    public static string JwtKey = "ZjZiMDdiNTAtMzQxOC00N2MxLWFiNDYtY2QxZjllYjgxMzg0";
    public static string ApiKeyName = "api_key";
    public static string ApiKey = "curso_api_2MxLWFiNDYtY2QxZjllYvW023#$4a";
    public static SmtpConfiguration Smtp = new();

    public class SmtpConfiguration
    {
        public string Host { get; set; }
        public int Port { get; set; } = 25;
        public string UserName { get; set; }
        public string Password { get; set; }
    }
}

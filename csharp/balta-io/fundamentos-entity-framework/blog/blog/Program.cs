using blog.Data;
using blog.Models;
using System.Linq;

namespace blog
{
    public class Program
    {
        static void Main(string[] args)
        {
            using var context = new BlogDataContext();

            context.Users.Add(new User
            {
                Bio = "Uma biografia",
                Email = "email@gmail.com",
                Github = "Gabriel-Moya",
                Image = "https://site.com/imagem.jpeg",
                Name = "Gabriel Moya",
                PasswordHash = "1234",
                Slug = "gabriel-moya"
            });
            context.SaveChanges();
        }
    }
}

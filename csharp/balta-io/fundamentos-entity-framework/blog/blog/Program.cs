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

            //context.Users.Add(new User
            //{
            //    Bio = "Uma biografia",
            //    Email = "email@gmail.com",
            //    Image = "https://site.com/imagem.jpeg",
            //    Name = "Gabriel Moya",
            //    PasswordHash = "1234",
            //    Slug = "gabriel-moya"
            //});
            //context.SaveChanges();

            var user = context.Users.FirstOrDefault();
            var post = new Post
            {
                Author = user,
                Body = "Meu artigo",
                Category = new Category
                {
                    Name = "Backend",
                    Slug = "backend"
                },
                CreateDate = System.DateTime.Now,
                // LastUpdateDate=
                Slug = "meu-artigo",
                Summary = "Neste artigo vamos conferir...",
                // Tags=null,
                Title = "Meu artigo",
            };
            context.Posts.Add(post);
            context.SaveChanges();
        }
    }
}

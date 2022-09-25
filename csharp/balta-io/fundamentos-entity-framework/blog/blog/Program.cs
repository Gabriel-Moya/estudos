using blog.Data;
using blog.Models;
using Microsoft.EntityFrameworkCore;
using System;
using System.Linq;

namespace blog
{
    internal class Program
    {
        static void Main(string[] args)
        {
            using var context = new BlogDataContext();

            //var user = new User
            //{
            //    Name = "Gabriel Moya",
            //    Slug = "gabriel-moya",
            //    Email = "gabrielmoya123@gmail.com",
            //    Bio = "Descrição da biografia aqui",
            //    Image = "https://enderecodaimagem.com/imagem.jpeg",
            //    PasswordHash = "123456"
            //};

            //var category = new Category
            //{
            //    Name = "Backend",
            //    Slug = "backend"
            //};

            //var post = new Post
            //{
            //    Author = user,
            //    Category = category,
            //    Body = "<p>Hello world!</p>",
            //    Slug = "comecando-com-ef-core",
            //    Summary = "Neste artigo vamos aprender EF Core",
            //    Title = "Começando com EF Core",
            //    CreateDate = DateTime.Now,
            //    LastUpdateDate = DateTime.Now,
            //};

            //context.Posts.Add(post);
            //context.SaveChanges();

            var posts = context
                .Posts
                .AsNoTracking()
                .Include(x => x.Author)
                .Include(x => x.Category)
                .OrderByDescending(x => x.LastUpdateDate)
                .ToList();

            foreach (var post in posts)
                Console.WriteLine($"{post.Title} escrito por {post.Author?.Name} em {post.Category?.Name}");
        }
    }
}

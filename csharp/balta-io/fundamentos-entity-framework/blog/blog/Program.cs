using blog.Data;
using blog.Models;
using System.Linq;

namespace blog
{
    internal class Program
    {
        static void Main(string[] args)
        {
            using (var context = new BlogDataContext())
            {
                // CREATE
                //var tag = new Tag { Name = "ASP.NET", Slug = "aspnet" };
                //context.Tags.Add(tag);
                //context.SaveChanges();

                // READ
                var tag = context.Tags.FirstOrDefault(x => x.Id == 1);
                tag.Name = ".NET";
                tag.Slug = "dotnet";

                context.Update(tag);
                context.SaveChanges();
            }
        }
    }
}
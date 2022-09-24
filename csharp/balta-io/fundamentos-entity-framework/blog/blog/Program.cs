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
                //var tag = new Tag { Name = ".NET", Slug = "dotnet" };
                //context.Tags.Add(tag);
                //context.SaveChanges();

                //var tag2 = new Tag { Name = "ASP.NET", Slug = "aspnet" };
                //context.Tags.Add(tag2);
                //context.SaveChanges();

                // Update
                //var tag = context.Tags.FirstOrDefault(x => x.Id == 1);
                //tag.Name = ".NET";
                //tag.Slug = "dotnet";

                //context.Update(tag);
                //context.SaveChanges();

                // DELETE
                //var tag = context.Tags.FirstOrDefault(x => x.Id == 1);

                //context.Remove(tag);
                //context.SaveChanges();

                var tags = context.Tags.ToList();

                foreach (var tag in tags)
                {
                    System.Console.WriteLine(tag.Name);
                }
            }
        }
    }
}

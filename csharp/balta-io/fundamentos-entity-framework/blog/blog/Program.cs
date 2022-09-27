using blog.Data;
using blog.Models;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace blog
{
    public class Program
    {
        static void Main(string[] args)
        {
            using var context = new BlogDataContext();

            var posts = context.Posts
                .Include(x => x.Author)
                .ThenInclude(x => x.Roles)
                .Include(x => x.Category);

            Console.WriteLine("Teste");
        }

        public static List<Post> GetPosts(BlogDataContext context, int skip = 0, int take = 25)
        {
            var posts = context
                .Posts
                .AsNoTracking()
                .Skip(skip)
                .Take(take)
                .ToList();
            return posts;
        }
    }
}

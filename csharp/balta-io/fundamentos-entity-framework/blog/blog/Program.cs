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
            // Lazy Loading
            // Eager Loading
            using var context = new BlogDataContext();
            var posts = GetPosts(context, 0, 25);
            var posts2 = GetPosts(context, 25, 25);
            var posts3 = GetPosts(context, 50, 25);
            var posts4 = GetPosts(context, 75, 25);

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

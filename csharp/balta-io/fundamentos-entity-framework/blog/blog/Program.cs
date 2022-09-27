using blog.Data;
using blog.Models;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;

namespace blog
{
    public class Program
    {
        static async Task Main(string[] args)
        {
            using var context = new BlogDataContext();

            var post = await context.Posts.ToListAsync();
            var users = await context.Users.ToListAsync();

            var posts = await GetPosts(context);

            Console.WriteLine("Teste");
        }

        public static async Task<IEnumerable<Post>> GetPosts(BlogDataContext context)
        {
            return await context.Posts.ToListAsync();
        }
    }
}

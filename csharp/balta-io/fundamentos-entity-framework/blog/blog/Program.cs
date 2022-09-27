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

            var posts = context.Posts.Include(x => x.Tags);
            foreach (var post in posts)
            {
                foreach (var tag in post.Tags)
                {

                }
            }

            Console.WriteLine("Teste");
        }
    }
}

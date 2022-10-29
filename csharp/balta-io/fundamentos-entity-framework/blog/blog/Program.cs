using blog.Data;
using blog.Models;
using Microsoft.EntityFrameworkCore;
using System;
using System.Collections.Generic;
using System.Linq;

namespace blog
{
    public class Program
    {
        static void Main(string[] args)
        {
            using var context = new BlogDataContext();

            var posts = context.PostWithTagsCount.ToList();
            foreach (var post in posts)
            {
                Console.WriteLine(post.Name);
                Console.WriteLine(post.Count);
            }

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

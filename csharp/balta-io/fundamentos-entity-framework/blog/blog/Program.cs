using blog.Data;
using Microsoft.EntityFrameworkCore;
using System.Linq;

namespace blog
{
    public class Program
    {
        static void Main(string[] args)
        {
            using var context = new BlogDataContext();
            var post = context.Posts.FirstOrDefault(x => x.Id == 1);
            var posts2 = context.Posts.AsNoTracking();
            // UPDATE [Tabela] SET [Campo] = VALOR WHERE [Id] = X
        }
    }
}

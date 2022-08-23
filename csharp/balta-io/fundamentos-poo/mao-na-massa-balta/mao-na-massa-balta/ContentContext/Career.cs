using System.Collections.Generic;

namespace mao_na_massa_balta.ContentContext
{
    public class Career : Content
    {
        public Career(string title, string url) : base(title, url)
        {
            Items = new List<CareerItem>();
        }

        public IList<CareerItem> Items { get; set; }

        // Expression Body
        // Sempre que não houver um set e o get for um return de linha única
        // podemos reduzir dessa forma abaixo
        public int TotalCourses => Items.Count;
    }
}

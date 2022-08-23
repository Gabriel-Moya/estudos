using System;

namespace mao_na_massa_balta.ContentContext
{
    public abstract class Content
    {
        public Content(string title, string url)
        {
            Id = Guid.NewGuid(); // SPOF = Single Point of Failure
            Title = title;
            Url = url;
        }

        public Guid Id { get; set; }
        public string Title { get; set; }
        public string Url { get; set; }
    }
}

using mao_na_massa_balta.NotificationContext;
using System.Collections.Generic;

namespace mao_na_massa_balta.ContentContext
{
    public class Article : Content
    {
        public IList<Notification> Notifications { get; set; }
        public Article(string title, string url) : base(title, url) { }
    }
}

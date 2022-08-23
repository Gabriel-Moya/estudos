using System;

namespace mao_na_massa_balta.ContentContext
{
    public class CareerItem
    {
        public CareerItem(int order,
            string title,
            string description,
            Course course)
        {
            Order = order;
            Title = title;
            Description = description;
            Course = course ?? throw new Exception("O curso não pode ser nulo");
        }

        public int Order { get; set; }
        public string Title { get; set; }
        public string Description { get; set; }
        public Course Course { get; set; }
    }
}

using mao_na_massa_balta.ContentContext.Enums;
using mao_na_massa_balta.SharedContext;

namespace mao_na_massa_balta.ContentContext
{
    public class Lecture : Base
    {
        public int Order { get; set; }
        public string Title { get; set; }
        public int DurationInMinutes { get; set; }
        public EContentLevel Level { get; set; }
    }
}

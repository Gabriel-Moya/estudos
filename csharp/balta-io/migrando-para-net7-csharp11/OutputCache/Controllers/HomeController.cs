using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.OutputCaching;

namespace OutputCache.Controllers;

public class HomeController : ControllerBase
{
    [HttpGet("controllers")]
    [OutputCache(Duration = 15)]
    public string Get(MeuServico servico)
    {
        return DateTime.Now.ToString("yyyy-MM-ddTHH:mm:ss");
    }
}

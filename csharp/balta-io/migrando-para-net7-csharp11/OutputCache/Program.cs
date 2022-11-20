var builder = WebApplication.CreateBuilder(args);
builder.Services.AddOutputCache(options =>
{
    options.DefaultExpirationTimeSpan = TimeSpan.FromSeconds(5);
});

var app = builder.Build();

app.MapGet("/", () => new
{
    date = DateTime.Now
});

app.MapGet("/cache", () => new
{
    date = DateTime.Now
}).CacheOutput();

app.UseOutputCache();

app.Run();

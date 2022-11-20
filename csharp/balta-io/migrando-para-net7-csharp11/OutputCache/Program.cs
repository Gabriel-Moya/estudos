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

app.MapGet("/cache/vary/{cacheId}", (string cacheId) => new
{
    date = DateTime.Now
}).CacheOutput(policy =>
{
    policy.SetVaryByQuery("cacheId");
    policy.Expire(TimeSpan.FromSeconds(15));
});

app.UseOutputCache();

app.Run();

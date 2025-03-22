#include "crow.h"

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")([](){
    return R"(
      <div style="width: 300px; margin: 50px auto; padding: 20px; border: 1px solid #ccc; border-radius: 5px; box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);">
        <h2 style="text-align: center;">Login</h2>
        <form>
          <label for="username" style="display: block; margin-bottom: 10px;">Username:</label>
          <input type="text" id="username" name="username" style="width: 100%; height: 40px; margin-bottom: 20px; padding: 10px; border: 1px solid #ccc; border-radius: 5px;">
          <label for="password" style="display: block; margin-bottom: 10px;">Password:</label>
          <input type="password" id="password" name="password" style="width: 100%; height: 40px; margin-bottom: 20px; padding: 10px; border: 1px solid #ccc; border-radius: 5px;">
          <button type="submit" style="width: 100%; height: 40px; background-color: #4CAF50; color: #fff; padding: 10px; border: none; border-radius: 5px; cursor: pointer;">Login</button>
        </form>
      </div>
    )";
  });

  app.port(18080).run();
}
